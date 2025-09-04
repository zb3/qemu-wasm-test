/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Helper file for declaring TCG helper functions.
 * This one expands info structures for tcg helpers.
 * Define HELPER_H for the header file to be expanded.
 */

#include "tcg/tcg.h"
#include "tcg/helper-info.h"
#include "exec/helper-head.h"

/*
 * Need one more level of indirection before stringification
 * to get all the macros expanded first.
 */
#define str(s) #s

# ifdef TARGET_LONG_BITS
#  if TARGET_LONG_BITS == 32
#   define dhf_typecode_tl i32
#  else
#   define dhf_typecode_tl i64
#  endif
# endif
#define dhf_typecode_void void
#define dhf_typecode_noreturn noreturn
#define dhf_typecode_i32 i32
#define dhf_typecode_s32 s32
#define dhf_typecode_i64 i64
#define dhf_typecode_s64 s64
#define dhf_typecode_ptr ptr
#define dhf_typecode_i128 i128
#define dhf_typecode_int s32
#define dhf_typecode_f16 i32
#define dhf_typecode_f32 i32
#define dhf_typecode_f64 i64
#define dhf_typecode_cptr cptr
#define dhf_typecode_env env
#define dhf_typecode(t) dhf_typecode_##t



#ifndef glue
#define glue(a, b) a ## b
#endif

#define glue3(a, b, c) glue(glue(a, b), c)
#define glue4(a, b, c, d) glue(glue3(a, b, c), d)
#define glue5(a, b, c, d, e) glue(glue4(a, b, c, d), e)

#define GET_TC_TOKEN(t) glue(_, dhf_typecode(t))

#define MAKE_CALL_HELPER_0(NAME, RET) glue3(fcallhelper_, glue(NAME, _), GET_TC_TOKEN(RET))
#define MAKE_CALL_HELPER_1(NAME, RET, T1)  glue(MAKE_CALL_HELPER_0(NAME, RET), GET_TC_TOKEN(T1))
#define MAKE_CALL_HELPER_2(NAME, RET, T1, T2) glue(MAKE_CALL_HELPER_1(NAME, RET, T1), GET_TC_TOKEN(T2))
#define MAKE_CALL_HELPER_3(NAME, RET, T1, T2, T3) glue(MAKE_CALL_HELPER_2(NAME, RET, T1, T2), GET_TC_TOKEN(T3))
#define MAKE_CALL_HELPER_4(NAME, RET, T1, T2, T3, T4) glue(MAKE_CALL_HELPER_3(NAME, RET, T1, T2, T3), GET_TC_TOKEN(T4))
#define MAKE_CALL_HELPER_5(NAME, RET, T1, T2, T3, T4, T5) glue(MAKE_CALL_HELPER_4(NAME, RET, T1, T2, T3, T4), GET_TC_TOKEN(T5))
#define MAKE_CALL_HELPER_6(NAME, RET, T1, T2, T3, T4, T5, T6) glue(MAKE_CALL_HELPER_5(NAME, RET, T1, T2, T3, T4, T5), GET_TC_TOKEN(T6))
#define MAKE_CALL_HELPER_7(NAME, RET, T1, T2, T3, T4, T5, T6, T7) glue(MAKE_CALL_HELPER_6(NAME, RET, T1, T2, T3, T4, T5, T6), GET_TC_TOKEN(T7))




#define DEF_HELPER_FLAGS_0(NAME, FLAGS, RET)                            \
    void MAKE_CALL_HELPER_0(NAME, RET)(tcg_target_ulong *regs, uint64_t *stack);                          \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0),                                 \
        .callhelper = MAKE_CALL_HELPER_0(NAME, RET)                           \
    };

#define DEF_HELPER_FLAGS_1(NAME, FLAGS, RET, T1)                        \
    void MAKE_CALL_HELPER_1(NAME, RET, T1)(tcg_target_ulong *regs, uint64_t *stack);                          \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0) | dh_typemask(T1, 1),            \
        .callhelper = MAKE_CALL_HELPER_1(NAME, RET, T1)                       \
    };


#define DEF_HELPER_FLAGS_2(NAME, FLAGS, RET, T1, T2)                      \
    void MAKE_CALL_HELPER_2(NAME, RET, T1, T2)(tcg_target_ulong *regs, uint64_t *stack);                          \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0) | dh_typemask(T1, 1) |           \
                    dh_typemask(T2, 2),                                  \
        .callhelper = MAKE_CALL_HELPER_2(NAME, RET, T1, T2)                       \
    };

#define DEF_HELPER_FLAGS_3(NAME, FLAGS, RET, T1, T2, T3)                \
    void MAKE_CALL_HELPER_3(NAME, RET, T1, T2, T3)(tcg_target_ulong *regs, uint64_t *stack);                          \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0) | dh_typemask(T1, 1) |           \
                    dh_typemask(T2, 2) | dh_typemask(T3, 3),             \
        .callhelper = MAKE_CALL_HELPER_3(NAME, RET, T1, T2, T3)                       \
    };

#define DEF_HELPER_FLAGS_4(NAME, FLAGS, RET, T1, T2, T3, T4)            \
    void MAKE_CALL_HELPER_4(NAME, RET, T1, T2, T3, T4)(tcg_target_ulong *regs, uint64_t *stack);                          \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0) | dh_typemask(T1, 1) |           \
                    dh_typemask(T2, 2) | dh_typemask(T3, 3) |            \
                    dh_typemask(T4, 4),                                  \
        .callhelper = MAKE_CALL_HELPER_4(NAME, RET, T1, T2, T3, T4)     \
    };

#define DEF_HELPER_FLAGS_5(NAME, FLAGS, RET, T1, T2, T3, T4, T5)        \
    void MAKE_CALL_HELPER_5(NAME, RET, T1, T2, T3, T4, T5)(tcg_target_ulong *regs, uint64_t *stack);                          \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0) | dh_typemask(T1, 1) |           \
                    dh_typemask(T2, 2) | dh_typemask(T3, 3) |            \
                    dh_typemask(T4, 4) | dh_typemask(T5, 5),             \
        .callhelper = MAKE_CALL_HELPER_5(NAME, RET, T1, T2, T3, T4, T5)                       \
    };

#define DEF_HELPER_FLAGS_6(NAME, FLAGS, RET, T1, T2, T3, T4, T5, T6)    \
    void MAKE_CALL_HELPER_6(NAME, RET, T1, T2, T3, T4, T5, T6)(tcg_target_ulong *regs, uint64_t *stack); \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0) | dh_typemask(T1, 1) |           \
                    dh_typemask(T2, 2) | dh_typemask(T3, 3) |            \
                    dh_typemask(T4, 4) | dh_typemask(T5, 5) |            \
                    dh_typemask(T6, 6),                                  \
        .callhelper = MAKE_CALL_HELPER_6(NAME, RET, T1, T2, T3, T4, T5, T6)                       \
    };

#define DEF_HELPER_FLAGS_7(NAME, FLAGS, RET, T1, T2, T3, T4, T5, T6, T7)    \
    void MAKE_CALL_HELPER_7(NAME, RET, T1, T2, T3, T4, T5, T6, T7)(tcg_target_ulong *regs, uint64_t *stack); \
    TCGHelperInfo glue(helper_info_, NAME) = {                          \
        .func = HELPER(NAME), .name = str(NAME),                        \
        .flags = FLAGS | dh_callflag(RET),                              \
        .typemask = dh_typemask(RET, 0) | dh_typemask(T1, 1) |           \
                    dh_typemask(T2, 2) | dh_typemask(T3, 3) |            \
                    dh_typemask(T4, 4) | dh_typemask(T5, 5) |            \
                    dh_typemask(T6, 6) | dh_typemask(T7, 7),             \
        .callhelper = MAKE_CALL_HELPER_7(NAME, RET, T1, T2, T3, T4, T5, T6, T7)                       \
    };


#include HELPER_H

#undef str
#undef DEF_HELPER_FLAGS_0
#undef DEF_HELPER_FLAGS_1
#undef DEF_HELPER_FLAGS_2
#undef DEF_HELPER_FLAGS_3
#undef DEF_HELPER_FLAGS_4
#undef DEF_HELPER_FLAGS_5
#undef DEF_HELPER_FLAGS_6
#undef DEF_HELPER_FLAGS_7
