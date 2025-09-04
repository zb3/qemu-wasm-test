import sys

"""
#define REG_IARG_BASE 8

void fcallhelper_test1__void_i32_ptr_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
    test1(
        regs[REG_IARG_BASE + 0],
        (int32_t)regs[REG_IARG_BASE + 1],
        (int32_t)regs[REG_IARG_BASE + 2]
    );
}

void fcallhelper_test2__i32_ptr_i32_s32(tcg_target_ulong *regs, uint64_t *stack) {
   uint64_t tmp = test2(
        regs[REG_IARG_BASE + 0],
        (uint32_t)regs[REG_IARG_BASE + 1],
        (int32_t)regs[REG_IARG_BASE + 2]
   );

    // write return
    regs[0] = tmp;
}

// 5 arguments go to registers, then we read from the stack
// always at least 64bits, even for 32bit integers

void fcallhelper_test3__ptr_i64_ptr_ptr_ptr_i32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    void *tmp = test3(
        regs[REG_IARG_BASE + 0],
        (void *)regs[REG_IARG_BASE + 1],
        (void *)regs[REG_IARG_BASE + 2],
        (void *)regs[REG_IARG_BASE + 3],
        regs[REG_IARG_BASE + 4],
        *(uint64_t*)(&stack[0])
    );

    regs[0] = tmp;
}


"""

argmap = {
    'void': 'void',
    'noreturn': 'G_NORETURN void',
    'i32': 'uint32_t',
    's32': 'int32_t',
    'i64': 'uint64_t',
    's64': 'int64_t',
    'ptr': 'void *',
    'cptr': 'const void *',
    'i128': 'Int128',
    'env': 'CPUArchState *'
}

print('#define REG_IARG_BASE 8')

decls = ''
defs = ''

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue


    fname, args = line.split('__')
    fname = fname[len("fcallhelper_"):]

    rtype, *argtypes = args.split('_')


    defs += f"void {line}(tcg_target_ulong *regs, uint64_t *stack) {{\n"

    if 'dhf_typecode' in args or '_memset' in line:
        # unsupported
        defs += "   g_assert_not_reached();\n"
        defs += "}\n"
        continue

    # use argmap to add a declaration for the original helper
    decls += f"{argmap[rtype]} helper_{fname}(" + f"{', '.join([f'{argmap[at]} arg{i}' for i, at in enumerate(argtypes) if at != 'void'])}" + ");\n"



    call_args = []
    reg_idx = 0
    stack_idx = 0

    # Process arguments
    for i, arg_type in enumerate(arg_type for arg_type in argtypes if arg_type != 'void'):
        if reg_idx < 5:  # First 5 arguments go to registers
            if arg_type in ('ptr', 'cptr', 'env'):
                call_args.append(f"(void *)regs[REG_IARG_BASE + {reg_idx}]")
            elif arg_type == 'i32':
                call_args.append(f"(uint32_t)regs[REG_IARG_BASE + {reg_idx}]")
            elif arg_type == 's32':
                call_args.append(f"(int32_t)regs[REG_IARG_BASE + {reg_idx}]")
            elif arg_type == 'i64' or arg_type == 's64':
                call_args.append(f"regs[REG_IARG_BASE + {reg_idx}]")
            elif arg_type == 'i128':
                # lo = read from reg
                # hi = if reg_idx<5 read from reg, otherwise from stack and increment stack
                # the argument is then int128_make128(lo, hi)
                lo = f"regs[REG_IARG_BASE + {reg_idx}]"
                reg_idx += 1
                if reg_idx < 5:
                    hi = f"regs[REG_IARG_BASE + {reg_idx}]"
                else:
                    hi = f"*(uint64_t*)(&stack[{stack_idx}])"
                    stack_idx += 1
                call_args.append(f"int128_make128({lo}, {hi})")

            else:
                call_args.append(f"regs[REG_IARG_BASE + {reg_idx}]") # Default for unknown types
            reg_idx += 1
        else:  # Remaining arguments go to stack
            if arg_type in ('ptr', 'cptr', 'env'):
                call_args.append(f"(void *)stack[{stack_idx}]")
            elif arg_type == 'i32':
                call_args.append(f"(uint32_t)stack[{stack_idx}]")
            elif arg_type == 's32':
                call_args.append(f"(int32_t)stack[{stack_idx}]")
            elif arg_type == 'i64' or arg_type == 's64':
                call_args.append(f"*(uint64_t*)(&stack[{stack_idx}])")
            elif arg_type == 'i128':
                lo = f"*(uint64_t*)(&stack[{stack_idx}])";
                stack_idx += 1;
                hi = f"*(uint64_t*)(&stack[{stack_idx}])";
                call_args.append(f"int128_make128({lo}, {hi})");

            else:
                call_args.append(f"stack[{stack_idx}]") # Default for unknown types
            stack_idx += 1

    if rtype in ('void', 'noreturn'):
        defs += f"    helper_{fname}({', '.join(call_args)});\n"
    else:
        ret_prefix = ""
        ret_suffix = ""
        if rtype in ('ptr', 'cptr'):
            ret_prefix = "void *"
        elif rtype == 'i32':
            ret_prefix = "uint32_t "
        elif rtype == 's32':
            ret_prefix = "int32_t "
        elif rtype == 'i64':
            ret_prefix = "uint64_t "
        elif rtype == 's64':
            ret_prefix = "int64_t "
        elif rtype == 'i128':
            ret_prefix = "Int128 "

        defs += f"    {ret_prefix}tmp = helper_{fname}({', '.join(call_args)});\n"

        if rtype == 'i128':
            defs += "    memcpy(&regs[0], &tmp, 16);\n"
        elif rtype in ('ptr', 'cptr'):
            defs += "    regs[0] = (tcg_target_ulong)tmp;\n"
        else:
            defs += "    regs[0] = tmp;\n"

    defs += '}\n'


print(decls)
print(defs)