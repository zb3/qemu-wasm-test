#define REG_IARG_BASE 8
uint64_t helper_cc_compute_all(uint64_t arg0, uint64_t arg1, uint64_t arg2, int32_t arg3);
uint64_t helper_cc_compute_c(uint64_t arg0, uint64_t arg1, uint64_t arg2, int32_t arg3);
void helper_write_eflags(CPUArchState * arg0, uint64_t arg1, uint32_t arg2);
uint64_t helper_read_eflags(CPUArchState * arg0);
void helper_divb_AL(CPUArchState * arg0, uint64_t arg1);
void helper_idivb_AL(CPUArchState * arg0, uint64_t arg1);
void helper_divw_AX(CPUArchState * arg0, uint64_t arg1);
void helper_idivw_AX(CPUArchState * arg0, uint64_t arg1);
void helper_divl_EAX(CPUArchState * arg0, uint64_t arg1);
void helper_idivl_EAX(CPUArchState * arg0, uint64_t arg1);
void helper_divq_EAX(CPUArchState * arg0, uint64_t arg1);
void helper_idivq_EAX(CPUArchState * arg0, uint64_t arg1);
void helper_cr4_testbit(CPUArchState * arg0, uint32_t arg1);
void helper_bndck(CPUArchState * arg0, uint32_t arg1);
uint64_t helper_bndldx32(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_bndldx64(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
void helper_bndstx32(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);
void helper_bndstx64(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);
void helper_bnd_jmp(CPUArchState * arg0);
void helper_aam(CPUArchState * arg0, int32_t arg1);
void helper_aad(CPUArchState * arg0, int32_t arg1);
void helper_aaa(CPUArchState * arg0);
void helper_aas(CPUArchState * arg0);
void helper_daa(CPUArchState * arg0);
void helper_das(CPUArchState * arg0);
uint64_t helper_lsl(CPUArchState * arg0, uint64_t arg1);
uint64_t helper_lar(CPUArchState * arg0, uint64_t arg1);
void helper_verr(CPUArchState * arg0, uint64_t arg1);
void helper_verw(CPUArchState * arg0, uint64_t arg1);
void helper_lldt(CPUArchState * arg0, int32_t arg1);
void helper_ltr(CPUArchState * arg0, int32_t arg1);
void helper_load_seg(CPUArchState * arg0, int32_t arg1, int32_t arg2);
void helper_ljmp_protected(CPUArchState * arg0, int32_t arg1, uint64_t arg2, uint64_t arg3);
void helper_lcall_real(CPUArchState * arg0, uint32_t arg1, uint32_t arg2, int32_t arg3, uint32_t arg4);
void helper_lcall_protected(CPUArchState * arg0, int32_t arg1, uint64_t arg2, int32_t arg3, uint64_t arg4);
void helper_iret_real(CPUArchState * arg0, int32_t arg1);
void helper_iret_protected(CPUArchState * arg0, int32_t arg1, int32_t arg2);
void helper_lret_protected(CPUArchState * arg0, int32_t arg1, int32_t arg2);
void helper_clts(CPUArchState * arg0);
void helper_set_dr(CPUArchState * arg0, int32_t arg1, uint64_t arg2);
uint64_t helper_get_dr(CPUArchState * arg0, int32_t arg1);
void helper_sysenter(CPUArchState * arg0);
void helper_sysexit(CPUArchState * arg0, int32_t arg1);
void helper_syscall(CPUArchState * arg0, int32_t arg1);
void helper_sysret(CPUArchState * arg0, int32_t arg1);
G_NORETURN void helper_pause(CPUArchState * arg0, int32_t arg1);
G_NORETURN void helper_raise_interrupt(CPUArchState * arg0, int32_t arg1, int32_t arg2);
G_NORETURN void helper_raise_exception(CPUArchState * arg0, int32_t arg1);
void helper_boundw(CPUArchState * arg0, uint64_t arg1, int32_t arg2);
void helper_boundl(CPUArchState * arg0, uint64_t arg1, int32_t arg2);
void helper_rsm(CPUArchState * arg0);
void helper_into(CPUArchState * arg0, int32_t arg1);
G_NORETURN void helper_single_step(CPUArchState * arg0);
void helper_rechecking_single_step(CPUArchState * arg0);
void helper_cpuid(CPUArchState * arg0);
uint64_t helper_rdpid(CPUArchState * arg0);
void helper_rdtsc(CPUArchState * arg0);
G_NORETURN void helper_rdpmc(CPUArchState * arg0);
void helper_outb(CPUArchState * arg0, uint32_t arg1, uint32_t arg2);
uint64_t helper_inb(CPUArchState * arg0, uint32_t arg1);
void helper_outw(CPUArchState * arg0, uint32_t arg1, uint32_t arg2);
uint64_t helper_inw(CPUArchState * arg0, uint32_t arg1);
void helper_outl(CPUArchState * arg0, uint32_t arg1, uint32_t arg2);
uint64_t helper_inl(CPUArchState * arg0, uint32_t arg1);
void helper_check_io(CPUArchState * arg0, uint32_t arg1, uint32_t arg2);
void helper_bpt_io(CPUArchState * arg0, uint32_t arg1, uint32_t arg2, uint64_t arg3);
void helper_svm_check_intercept(CPUArchState * arg0, uint32_t arg1);
void helper_svm_check_io(CPUArchState * arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void helper_vmrun(CPUArchState * arg0, int32_t arg1, int32_t arg2);
void helper_vmmcall(CPUArchState * arg0);
void helper_vmload(CPUArchState * arg0, int32_t arg1);
void helper_vmsave(CPUArchState * arg0, int32_t arg1);
void helper_stgi(CPUArchState * arg0);
void helper_clgi(CPUArchState * arg0);
void helper_flush_page(CPUArchState * arg0, uint64_t arg1);
G_NORETURN void helper_hlt(CPUArchState * arg0, int32_t arg1);
void helper_monitor(CPUArchState * arg0, uint64_t arg1);
G_NORETURN void helper_mwait(CPUArchState * arg0, int32_t arg1);
void helper_rdmsr(CPUArchState * arg0);
void helper_wrmsr(CPUArchState * arg0);
uint64_t helper_read_crN(CPUArchState * arg0, int32_t arg1);
void helper_write_crN(CPUArchState * arg0, int32_t arg1, uint64_t arg2);
void helper_flds_FT0(CPUArchState * arg0, uint32_t arg1);
void helper_fldl_FT0(CPUArchState * arg0, uint64_t arg1);
void helper_fildl_FT0(CPUArchState * arg0, int32_t arg1);
void helper_flds_ST0(CPUArchState * arg0, uint32_t arg1);
void helper_fldl_ST0(CPUArchState * arg0, uint64_t arg1);
void helper_fildl_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fildll_ST0(CPUArchState * arg0, int64_t arg1);
uint32_t helper_fsts_ST0(CPUArchState * arg0);
uint64_t helper_fstl_ST0(CPUArchState * arg0);
int32_t helper_fist_ST0(CPUArchState * arg0);
int32_t helper_fistl_ST0(CPUArchState * arg0);
int64_t helper_fistll_ST0(CPUArchState * arg0);
int32_t helper_fistt_ST0(CPUArchState * arg0);
int32_t helper_fisttl_ST0(CPUArchState * arg0);
int64_t helper_fisttll_ST0(CPUArchState * arg0);
void helper_fldt_ST0(CPUArchState * arg0, uint64_t arg1);
void helper_fstt_ST0(CPUArchState * arg0, uint64_t arg1);
void helper_fpush(CPUArchState * arg0);
void helper_fpop(CPUArchState * arg0);
void helper_fdecstp(CPUArchState * arg0);
void helper_fincstp(CPUArchState * arg0);
void helper_ffree_STN(CPUArchState * arg0, int32_t arg1);
void helper_fmov_FT0_STN(CPUArchState * arg0, int32_t arg1);
void helper_fmov_ST0_STN(CPUArchState * arg0, int32_t arg1);
void helper_fmov_STN_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fxchg_ST0_STN(CPUArchState * arg0, int32_t arg1);
void helper_fcom_ST0_FT0(CPUArchState * arg0);
void helper_fucom_ST0_FT0(CPUArchState * arg0);
void helper_fcomi_ST0_FT0(CPUArchState * arg0);
void helper_fucomi_ST0_FT0(CPUArchState * arg0);
void helper_fadd_ST0_FT0(CPUArchState * arg0);
void helper_fmul_ST0_FT0(CPUArchState * arg0);
void helper_fsub_ST0_FT0(CPUArchState * arg0);
void helper_fsubr_ST0_FT0(CPUArchState * arg0);
void helper_fdiv_ST0_FT0(CPUArchState * arg0);
void helper_fdivr_ST0_FT0(CPUArchState * arg0);
void helper_fadd_STN_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fmul_STN_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fsub_STN_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fsubr_STN_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fdiv_STN_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fdivr_STN_ST0(CPUArchState * arg0, int32_t arg1);
void helper_fchs_ST0(CPUArchState * arg0);
void helper_fabs_ST0(CPUArchState * arg0);
void helper_fxam_ST0(CPUArchState * arg0);
void helper_fld1_ST0(CPUArchState * arg0);
void helper_fldl2t_ST0(CPUArchState * arg0);
void helper_fldl2e_ST0(CPUArchState * arg0);
void helper_fldpi_ST0(CPUArchState * arg0);
void helper_fldlg2_ST0(CPUArchState * arg0);
void helper_fldln2_ST0(CPUArchState * arg0);
void helper_fldz_ST0(CPUArchState * arg0);
void helper_fldz_FT0(CPUArchState * arg0);
uint32_t helper_fnstsw(CPUArchState * arg0);
uint32_t helper_fnstcw(CPUArchState * arg0);
void helper_fldcw(CPUArchState * arg0, uint32_t arg1);
void helper_fclex(CPUArchState * arg0);
void helper_fwait(CPUArchState * arg0);
void helper_fninit(CPUArchState * arg0);
void helper_fbld_ST0(CPUArchState * arg0, uint64_t arg1);
void helper_fbst_ST0(CPUArchState * arg0, uint64_t arg1);
void helper_f2xm1(CPUArchState * arg0);
void helper_fyl2x(CPUArchState * arg0);
void helper_fptan(CPUArchState * arg0);
void helper_fpatan(CPUArchState * arg0);
void helper_fxtract(CPUArchState * arg0);
void helper_fprem1(CPUArchState * arg0);
void helper_fprem(CPUArchState * arg0);
void helper_fyl2xp1(CPUArchState * arg0);
void helper_fsqrt(CPUArchState * arg0);
void helper_fsincos(CPUArchState * arg0);
void helper_frndint(CPUArchState * arg0);
void helper_fscale(CPUArchState * arg0);
void helper_fsin(CPUArchState * arg0);
void helper_fcos(CPUArchState * arg0);
void helper_fstenv(CPUArchState * arg0, uint64_t arg1, int32_t arg2);
void helper_fldenv(CPUArchState * arg0, uint64_t arg1, int32_t arg2);
void helper_fsave(CPUArchState * arg0, uint64_t arg1, int32_t arg2);
void helper_frstor(CPUArchState * arg0, uint64_t arg1, int32_t arg2);
void helper_fxsave(CPUArchState * arg0, uint64_t arg1);
void helper_fxrstor(CPUArchState * arg0, uint64_t arg1);
void helper_xsave(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
void helper_xsaveopt(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
void helper_xrstor(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_xgetbv(CPUArchState * arg0, uint32_t arg1);
void helper_xsetbv(CPUArchState * arg0, uint32_t arg1, uint64_t arg2);
uint64_t helper_rdpkru(CPUArchState * arg0, uint32_t arg1);
void helper_wrpkru(CPUArchState * arg0, uint32_t arg1, uint64_t arg2);
uint64_t helper_pdep(uint64_t arg0, uint64_t arg1);
uint64_t helper_pext(uint64_t arg0, uint64_t arg1);
void helper_ldmxcsr(CPUArchState * arg0, uint32_t arg1);
void helper_update_mxcsr(CPUArchState * arg0);
void helper_enter_mmx(CPUArchState * arg0);
void helper_emms(CPUArchState * arg0);
uint64_t helper_crc32(uint32_t arg0, uint64_t arg1, uint32_t arg2);
uint64_t helper_rclb(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rclw(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rcll(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rcrb(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rcrw(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rcrl(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rclq(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rcrq(CPUArchState * arg0, uint64_t arg1, uint64_t arg2);
uint64_t helper_rdrand(CPUArchState * arg0);
int64_t helper_mulsh_i64(int64_t arg0, int64_t arg1);
uint64_t helper_muluh_i64(uint64_t arg0, uint64_t arg1);
const void * helper_lookup_tb_ptr(CPUArchState * arg0);
G_NORETURN void helper_exit_atomic(CPUArchState * arg0);
Int128 helper_ld_i128(CPUArchState * arg0, uint64_t arg1, uint32_t arg2);
void helper_st_i128(CPUArchState * arg0, uint64_t arg1, Int128 arg2, uint32_t arg3);
uint32_t helper_atomic_cmpxchgb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
uint32_t helper_atomic_cmpxchgw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
uint32_t helper_atomic_cmpxchgw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
uint32_t helper_atomic_cmpxchgl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
uint32_t helper_atomic_cmpxchgl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
uint64_t helper_atomic_cmpxchgq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint32_t arg4);
uint64_t helper_atomic_cmpxchgq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint32_t arg4);
uint32_t helper_atomic_fetch_addb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_addw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_addw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_addl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_addl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_addq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_addq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_andb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_andw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_andw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_andl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_andl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_andq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_andq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_orb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_orw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_orw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_orl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_orl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_orq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_orq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_xorb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_xorw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_xorw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_xorl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_fetch_xorl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_xorq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_fetch_xorq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_add_fetchb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_add_fetchw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_add_fetchw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_add_fetchl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_add_fetchl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_add_fetchq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_add_fetchq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_and_fetchb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_and_fetchw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_and_fetchw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_and_fetchl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_and_fetchl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_and_fetchq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_and_fetchq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_or_fetchb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_or_fetchw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_or_fetchw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_or_fetchl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_or_fetchl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_or_fetchq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_or_fetchq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_xor_fetchb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xor_fetchw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xor_fetchw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xor_fetchl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xor_fetchl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_xor_fetchq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_xor_fetchq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint32_t helper_atomic_xchgb(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xchgw_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xchgw_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xchgl_le(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint32_t helper_atomic_xchgl_be(CPUArchState * arg0, uint64_t arg1, uint32_t arg2, uint32_t arg3);
uint64_t helper_atomic_xchgq_le(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
uint64_t helper_atomic_xchgq_be(CPUArchState * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3);
void helper_gvec_mov(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_dup8(void * arg0, uint32_t arg1, uint32_t arg2);
void helper_gvec_dup16(void * arg0, uint32_t arg1, uint32_t arg2);
void helper_gvec_dup32(void * arg0, uint32_t arg1, uint32_t arg2);
void helper_gvec_dup64(void * arg0, uint32_t arg1, uint64_t arg2);
void helper_gvec_add8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_add16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_add32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_add64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sub8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sub16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sub32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sub64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_mul8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_mul16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_mul32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_mul64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ssadd8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ssadd16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ssadd32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ssadd64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sssub8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sssub16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sssub32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_sssub64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_usadd8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_usadd16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_usadd32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_usadd64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ussub8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ussub16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ussub32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ussub64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smin8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smin16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smin32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smin64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smax8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smax16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smax32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_smax64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umin8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umin16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umin32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umin64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umax8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umax16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umax32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_umax64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_abs8(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_abs16(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_abs32(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_abs64(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_and(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_or(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_xor(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_andc(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_shl8i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_shl16i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_shl32i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_shl64i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_shr8i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_shr16i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_shr32i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_shr64i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_sar8i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_sar16i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_sar32i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_sar64i(void * arg0, void * arg1, uint32_t arg2);
void helper_gvec_eq8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_eq16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_eq32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_eq64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ne8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ne16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ne32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ne64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_lt8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_lt16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_lt32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_lt64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_le8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_le16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_le32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_le64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ltu8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ltu16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ltu32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_ltu64(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_leu8(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_leu16(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_leu32(void * arg0, void * arg1, void * arg2, uint32_t arg3);
void helper_gvec_leu64(void * arg0, void * arg1, void * arg2, uint32_t arg3);

void fcallhelper_cc_compute_all__i64_i64_i64_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_cc_compute_all(regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (int32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_cc_compute_c__i64_i64_i64_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_cc_compute_c(regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (int32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_write_eflags__void_env_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_write_eflags((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_read_eflags__i64_env(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_read_eflags((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_divb_AL__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_divb_AL((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_idivb_AL__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_idivb_AL((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_divw_AX__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_divw_AX((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_idivw_AX__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_idivw_AX((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_divl_EAX__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_divl_EAX((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_idivl_EAX__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_idivl_EAX((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_divq_EAX__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_divq_EAX((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_idivq_EAX__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_idivq_EAX((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_cr4_testbit__void_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_cr4_testbit((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_bndck__void_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_bndck((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_bndldx32__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_bndldx32((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_bndldx64__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_bndldx64((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_bndstx32__void_env_i64_i64_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_bndstx32((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], regs[REG_IARG_BASE + 3], regs[REG_IARG_BASE + 4]);
}
void fcallhelper_bndstx64__void_env_i64_i64_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_bndstx64((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], regs[REG_IARG_BASE + 3], regs[REG_IARG_BASE + 4]);
}
void fcallhelper_bnd_jmp__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_bnd_jmp((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_aam__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_aam((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_aad__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_aad((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_aaa__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_aaa((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_aas__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_aas((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_daa__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_daa((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_das__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_das((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_lsl__i64_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_lsl((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_lar__i64_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_lar((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_verr__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_verr((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_verw__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_verw((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_lldt__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_lldt((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_ltr__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_ltr((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_load_seg__void_env_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_load_seg((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_ljmp_protected__void_env_s32_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_ljmp_protected((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], regs[REG_IARG_BASE + 3]);
}
void fcallhelper_lcall_real__void_env_i32_i32_s32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_lcall_real((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (int32_t)regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
}
void fcallhelper_lcall_protected__void_env_s32_i64_s32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_lcall_protected((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (int32_t)regs[REG_IARG_BASE + 3], regs[REG_IARG_BASE + 4]);
}
void fcallhelper_iret_real__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_iret_real((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_iret_protected__void_env_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_iret_protected((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_lret_protected__void_env_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_lret_protected((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_clts__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_clts((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_set_dr__void_env_s32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_set_dr((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_get_dr__i64_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_get_dr((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_sysenter__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_sysenter((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_sysexit__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_sysexit((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_syscall__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_syscall((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_sysret__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_sysret((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_pause__noreturn_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_pause((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_raise_interrupt__noreturn_env_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_raise_interrupt((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_raise_exception__noreturn_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_raise_exception((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_boundw__void_env_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_boundw((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_boundl__void_env_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_boundl((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_rsm__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_rsm((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_into__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_into((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_single_step__noreturn_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_single_step((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_rechecking_single_step__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_rechecking_single_step((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_cpuid__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_cpuid((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_rdpid__i64_env(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rdpid((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_rdtsc__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_rdtsc((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_rdpmc__noreturn_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_rdpmc((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_outb__void_env_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_outb((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_inb__i64_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_inb((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_outw__void_env_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_outw((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_inw__i64_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_inw((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_outl__void_env_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_outl((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_inl__i64_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_inl((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_check_io__void_env_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_check_io((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_bpt_io__void_env_i32_i32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_bpt_io((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], regs[REG_IARG_BASE + 3]);
}
void fcallhelper_svm_check_intercept__void_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_svm_check_intercept((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_svm_check_io__void_env_i32_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_svm_check_io((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_vmrun__void_env_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_vmrun((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_vmmcall__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_vmmcall((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_vmload__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_vmload((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_vmsave__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_vmsave((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_stgi__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_stgi((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_clgi__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_clgi((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_flush_page__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_flush_page((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_hlt__noreturn_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_hlt((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_monitor__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_monitor((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_mwait__noreturn_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_mwait((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_rdmsr__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_rdmsr((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_wrmsr__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_wrmsr((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_read_crN__i64_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_read_crN((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_write_crN__void_env_s32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_write_crN((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_flds_FT0__void_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_flds_FT0((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fldl_FT0__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldl_FT0((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fildl_FT0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fildl_FT0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_flds_ST0__void_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_flds_ST0((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fldl_ST0__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldl_ST0((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fildl_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fildl_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fildll_ST0__void_env_s64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fildll_ST0((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fsts_ST0__i32_env(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_fsts_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fstl_ST0__i64_env(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_fstl_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fist_ST0__s32_env(tcg_target_ulong *regs, uint64_t *stack) {
    int32_t tmp = helper_fist_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fistl_ST0__s32_env(tcg_target_ulong *regs, uint64_t *stack) {
    int32_t tmp = helper_fistl_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fistll_ST0__s64_env(tcg_target_ulong *regs, uint64_t *stack) {
    int64_t tmp = helper_fistll_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fistt_ST0__s32_env(tcg_target_ulong *regs, uint64_t *stack) {
    int32_t tmp = helper_fistt_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fisttl_ST0__s32_env(tcg_target_ulong *regs, uint64_t *stack) {
    int32_t tmp = helper_fisttl_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fisttll_ST0__s64_env(tcg_target_ulong *regs, uint64_t *stack) {
    int64_t tmp = helper_fisttll_ST0((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fldt_ST0__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldt_ST0((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fstt_ST0__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fstt_ST0((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fpush__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fpush((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fpop__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fpop((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fdecstp__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fdecstp((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fincstp__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fincstp((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_ffree_STN__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_ffree_STN((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fmov_FT0_STN__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fmov_FT0_STN((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fmov_ST0_STN__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fmov_ST0_STN((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fmov_STN_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fmov_STN_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fxchg_ST0_STN__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fxchg_ST0_STN((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fcom_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fcom_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fucom_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fucom_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fcomi_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fcomi_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fucomi_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fucomi_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fadd_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fadd_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fmul_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fmul_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fsub_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsub_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fsubr_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsubr_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fdiv_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fdiv_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fdivr_ST0_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fdivr_ST0_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fadd_STN_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fadd_STN_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fmul_STN_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fmul_STN_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fsub_STN_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsub_STN_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fsubr_STN_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsubr_STN_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fdiv_STN_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fdiv_STN_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fdivr_STN_ST0__void_env_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fdivr_STN_ST0((void *)regs[REG_IARG_BASE + 0], (int32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fchs_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fchs_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fabs_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fabs_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fxam_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fxam_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fld1_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fld1_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fldl2t_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldl2t_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fldl2e_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldl2e_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fldpi_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldpi_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fldlg2_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldlg2_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fldln2_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldln2_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fldz_ST0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldz_ST0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fldz_FT0__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldz_FT0((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fnstsw__i32_env(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_fnstsw((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fnstcw__i32_env(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_fnstcw((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_fldcw__void_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldcw((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fclex__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fclex((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fwait__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fwait((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fninit__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fninit((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fbld_ST0__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fbld_ST0((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fbst_ST0__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fbst_ST0((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_f2xm1__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_f2xm1((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fyl2x__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fyl2x((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fptan__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fptan((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fpatan__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fpatan((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fxtract__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fxtract((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fprem1__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fprem1((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fprem__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fprem((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fyl2xp1__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fyl2xp1((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fsqrt__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsqrt((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fsincos__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsincos((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_frndint__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_frndint((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fscale__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fscale((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fsin__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsin((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fcos__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fcos((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_fstenv__void_env_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fstenv((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_fldenv__void_env_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fldenv((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_fsave__void_env_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fsave((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_frstor__void_env_i64_s32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_frstor((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (int32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_fxsave__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fxsave((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_fxrstor__void_env_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_fxrstor((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
}
void fcallhelper_xsave__void_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_xsave((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_xsaveopt__void_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_xsaveopt((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_xrstor__void_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_xrstor((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_xgetbv__i64_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_xgetbv((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_xsetbv__void_env_i32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_xsetbv((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_rdpkru__i64_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rdpkru((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_wrpkru__void_env_i32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_wrpkru((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_pdep__i64_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_pdep(regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_pext__i64_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_pext(regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_ldmxcsr__void_env_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_ldmxcsr((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1]);
}
void fcallhelper_update_mxcsr__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_update_mxcsr((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_enter_mmx__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_enter_mmx((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_emms__void_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_emms((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_psrlw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psraw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psllw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrld_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrad_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pslld_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrlq_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psllq_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhrw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhuw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pavgb_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pavgw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmuludq_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmaddwd_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psadbw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maskmov_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufw_mmx__void_dhf_typecode_MMXReg_dhf_typecode_MMXReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packsswb_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packuswb_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packssdw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklbw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklwd_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckldq_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhbw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhwd_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhdq_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pi2fd__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pi2fw__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pf2id__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pf2iw__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfacc__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfadd__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfcmpeq__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfcmpge__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfcmpgt__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfmax__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfmin__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfmul__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfnacc__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfpnacc__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfrcp__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfrsqrt__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfsub__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pfsubr__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pswapd__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddd_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddsw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubd_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubsw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmaddubsw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhrsw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufb_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignb_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignw_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignd_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_palignr_mmx__void_env_dhf_typecode_MMXReg_dhf_typecode_MMXReg_dhf_typecode_MMXReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrlw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psraw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psllw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrld_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrad_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pslld_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrlq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psllq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrldq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pslldq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhuw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pavgb_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pavgw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmuludq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmaddwd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psadbw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maskmov_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufd_xmm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshuflw_xmm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufhw_xmm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_shufps_xmm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_shufpd_xmm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_subps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_subpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_subss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_subsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mulps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mulpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mulss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mulsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_divps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_divpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_divss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_divsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_minps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_minpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_minss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_minsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maxps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maxpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maxss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maxsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sqrtps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sqrtpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sqrtss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sqrtsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtps2pd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtpd2ps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtdq2ps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtdq2pd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtps2dq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtpd2dq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttps2dq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttpd2dq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtss2sd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtsd2ss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtpi2ps__void_env_dhf_typecode_ZMMReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtpi2pd__void_env_dhf_typecode_ZMMReg_dhf_typecode_MMXReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtsi2ss__void_env_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtsi2sd__void_env_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtsq2ss__void_env_dhf_typecode_ZMMReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtsq2sd__void_env_dhf_typecode_ZMMReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtps2pi__void_env_dhf_typecode_MMXReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtpd2pi__void_env_dhf_typecode_MMXReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtss2si__s32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtsd2si__s32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtss2sq__s64_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtsd2sq__s64_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttps2pi__void_env_dhf_typecode_MMXReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttpd2pi__void_env_dhf_typecode_MMXReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttss2si__s32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttsd2si__s32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttss2sq__s64_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttsd2sq__s64_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_rsqrtps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_rcpps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_rsqrtss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_rcpss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_extrq_r__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_extrq_i__void_env_dhf_typecode_ZMMReg_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_insertq_r__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_insertq_i__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_haddps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_haddpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_hsubps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_hsubpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addsubps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addsubpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmplepd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpless__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmplesd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnlepd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnless__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnlesd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngepd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngess__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngesd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalseps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsepd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsess__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsesd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgepd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgess__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgesd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptrueps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruepd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruess__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruesd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqsps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqspd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqsss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqssd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordsps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordspd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordsss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordssd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordsps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordspd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordsss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordssd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequsps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequspd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequsss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequssd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsesps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsespd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsesss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsessd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequsps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequspd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequsss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequssd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtqps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtqpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtqss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtqsd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruesps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruespd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruesss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruessd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_ucomiss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_comiss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_ucomisd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_comisd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_movmskps_xmm__i32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_movmskpd_xmm__i32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packsswb_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packuswb_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packssdw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklbw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklwd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckldq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhbw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhwd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhdq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklqdq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhqdq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddsw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubsw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmaddubsw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhrsw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufb_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignb_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_palignr_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pblendvb_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendvps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendvpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_ptest_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxbw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxbd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxbq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxwd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxwq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxdq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxbw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxbd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxbq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxwd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxwq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxdq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsldup_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovshdup_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovdldup_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmuldq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packusdw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phminposuw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_roundps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_roundpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_roundss_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_roundsd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pblendw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_dpps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_dppd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mpsadbw_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pcmpestri_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pcmpestrm_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pcmpistri_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pcmpistrm_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_crc32__i64_i32_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_crc32((uint32_t)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_aesdec_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesdeclast_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesenc_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesenclast_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesimc_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aeskeygenassist_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pclmulqdq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtph2ps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtps2ph_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_fma4ss__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_fma4sd__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_fma4ps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_fma4pd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilpd_imm_xmm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilps_imm_xmm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsrlvd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsravd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsllvd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsrlvq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsravq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsllvq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vtestps_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vtestpd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovd_st_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovq_st_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherdd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherdq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherqd_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherqq_xmm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha1rnds4_f0__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha1rnds4_f1__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha1rnds4_f2__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha1rnds4_f3__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha1nexte__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha1msg1__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha1msg2__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha256rnds2__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha256msg1__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sha256msg2__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrlw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psraw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psllw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrld_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrad_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pslld_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrlq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psllq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psrldq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pslldq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhuw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pavgb_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pavgw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmuludq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmaddwd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psadbw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufd_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshuflw_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufhw_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_shufps_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_shufpd_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_subps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_subpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mulps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mulpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_divps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_divpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_minps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_minpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maxps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_maxpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sqrtps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_sqrtpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtps2pd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtpd2ps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtdq2ps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtdq2pd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtps2dq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtpd2dq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttps2dq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvttpd2dq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_rsqrtps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_rcpps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_haddps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_haddpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_hsubps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_hsubpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addsubps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_addsubpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmplepd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnlepd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngepd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalseps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsepd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgepd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptrueps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruepd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqsps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpeqspd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpltqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpleqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordsps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpunordspd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpneqqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnltqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnleqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordsps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpordspd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequsps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpequspd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngeqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpngtqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsesps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpfalsespd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequsps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpnequspd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgeqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtqps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmpgtqpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruesps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cmptruespd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_movmskps_ymm__i32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_movmskpd_ymm__i32_env_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packsswb_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packuswb_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packssdw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklbw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklwd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckldq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhbw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhwd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhdq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpcklqdq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_punpckhqdq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phaddsw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_phsubsw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmaddubsw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmulhrsw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pshufb_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignb_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_psignd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_palignr_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pblendvb_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendvps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendvpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_ptest_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxbw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxbd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxbq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxwd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxwq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsxdq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxbw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxbd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxbq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxwd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxwq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovzxdq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovsldup_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovshdup_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmovdldup_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pmuldq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_packusdw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_roundps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_roundpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_blendpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pblendw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_dpps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_mpsadbw_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesdec_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesdeclast_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesenc_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_aesenclast_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_pclmulqdq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtph2ps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_cvtps2ph_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_fma4ps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_fma4pd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_s32_s32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilpd_imm_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermilps_imm_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsrlvd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsravd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsllvd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsrlvq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsravq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpsllvq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vtestps_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vtestpd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovd_st_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovq_st_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpmaskmovq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherdd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherdq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherqd_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpgatherqq_ymm__void_env_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermd_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermdq_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_vpermq_ymm__void_dhf_typecode_ZMMReg_dhf_typecode_ZMMReg_i32(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_rclb__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rclb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rclw__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rclw((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rcll__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rcll((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rcrb__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rcrb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rcrw__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rcrw((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rcrl__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rcrl((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rclq__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rclq((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rcrq__i64_env_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rcrq((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
    regs[0] = tmp;
}
void fcallhelper_rdrand__i64_env(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_rdrand((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = tmp;
}
void fcallhelper_mulsh_i64__s64_s64_s64(tcg_target_ulong *regs, uint64_t *stack) {
    int64_t tmp = helper_mulsh_i64(regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_muluh_i64__i64_i64_i64(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_muluh_i64(regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1]);
    regs[0] = tmp;
}
void fcallhelper_lookup_tb_ptr__cptr_env(tcg_target_ulong *regs, uint64_t *stack) {
    void *tmp = helper_lookup_tb_ptr((void *)regs[REG_IARG_BASE + 0]);
    regs[0] = (tcg_target_ulong)tmp;
}
void fcallhelper_exit_atomic__noreturn_env(tcg_target_ulong *regs, uint64_t *stack) {
    helper_exit_atomic((void *)regs[REG_IARG_BASE + 0]);
}
void fcallhelper_memset__ptr_ptr_s32_ptr(tcg_target_ulong *regs, uint64_t *stack) {
   g_assert_not_reached();
}
void fcallhelper_ld_i128__i128_env_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    Int128 tmp = helper_ld_i128((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
    memcpy(&regs[0], &tmp, 16);
}
void fcallhelper_st_i128__void_env_i64_i128_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_st_i128((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], int128_make128(regs[REG_IARG_BASE + 2], regs[REG_IARG_BASE + 3]), (uint32_t)regs[REG_IARG_BASE + 4]);
}
void fcallhelper_atomic_cmpxchgb__i32_env_i64_i32_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_cmpxchgb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
    regs[0] = tmp;
}
void fcallhelper_atomic_cmpxchgw_be__i32_env_i64_i32_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_cmpxchgw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
    regs[0] = tmp;
}
void fcallhelper_atomic_cmpxchgw_le__i32_env_i64_i32_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_cmpxchgw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
    regs[0] = tmp;
}
void fcallhelper_atomic_cmpxchgl_be__i32_env_i64_i32_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_cmpxchgl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
    regs[0] = tmp;
}
void fcallhelper_atomic_cmpxchgl_le__i32_env_i64_i32_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_cmpxchgl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
    regs[0] = tmp;
}
void fcallhelper_atomic_cmpxchgq_be__i64_env_i64_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_cmpxchgq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
    regs[0] = tmp;
}
void fcallhelper_atomic_cmpxchgq_le__i64_env_i64_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_cmpxchgq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], regs[REG_IARG_BASE + 3], (uint32_t)regs[REG_IARG_BASE + 4]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_addb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_addb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_addw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_addw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_addw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_addw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_addl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_addl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_addl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_addl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_addq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_addq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_addq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_addq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_andb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_andb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_andw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_andw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_andw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_andw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_andl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_andl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_andl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_andl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_andq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_andq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_andq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_andq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_orb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_orb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_orw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_orw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_orw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_orw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_orl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_orl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_orl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_orl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_orq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_orq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_orq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_orq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_xorb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_xorb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_xorw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_xorw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_xorw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_xorw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_xorl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_xorl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_xorl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_fetch_xorl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_xorq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_xorq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_fetch_xorq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_fetch_xorq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_add_fetchb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_add_fetchb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_add_fetchw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_add_fetchw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_add_fetchw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_add_fetchw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_add_fetchl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_add_fetchl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_add_fetchl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_add_fetchl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_add_fetchq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_add_fetchq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_add_fetchq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_add_fetchq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_and_fetchb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_and_fetchb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_and_fetchw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_and_fetchw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_and_fetchw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_and_fetchw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_and_fetchl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_and_fetchl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_and_fetchl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_and_fetchl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_and_fetchq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_and_fetchq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_and_fetchq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_and_fetchq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_or_fetchb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_or_fetchb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_or_fetchw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_or_fetchw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_or_fetchw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_or_fetchw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_or_fetchl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_or_fetchl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_or_fetchl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_or_fetchl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_or_fetchq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_or_fetchq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_or_fetchq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_or_fetchq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xor_fetchb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xor_fetchb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xor_fetchw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xor_fetchw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xor_fetchw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xor_fetchw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xor_fetchl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xor_fetchl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xor_fetchl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xor_fetchl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xor_fetchq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_xor_fetchq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xor_fetchq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_xor_fetchq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xchgb__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xchgb((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xchgw_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xchgw_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xchgw_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xchgw_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xchgl_le__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xchgl_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xchgl_be__i32_env_i64_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint32_t tmp = helper_atomic_xchgl_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xchgq_le__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_xchgq_le((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_atomic_xchgq_be__i64_env_i64_i64_i32(tcg_target_ulong *regs, uint64_t *stack) {
    uint64_t tmp = helper_atomic_xchgq_be((void *)regs[REG_IARG_BASE + 0], regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
    regs[0] = tmp;
}
void fcallhelper_gvec_mov__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_mov((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_dup8__void_ptr_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_dup8((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_dup16__void_ptr_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_dup16((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_dup32__void_ptr_i32_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_dup32((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_dup64__void_ptr_i32_i64(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_dup64((void *)regs[REG_IARG_BASE + 0], (uint32_t)regs[REG_IARG_BASE + 1], regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_add8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_add8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_add16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_add16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_add32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_add32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_add64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_add64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sub8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sub8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sub16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sub16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sub32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sub32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sub64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sub64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_mul8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_mul8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_mul16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_mul16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_mul32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_mul32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_mul64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_mul64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ssadd8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ssadd8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ssadd16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ssadd16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ssadd32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ssadd32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ssadd64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ssadd64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sssub8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sssub8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sssub16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sssub16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sssub32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sssub32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_sssub64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sssub64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_usadd8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_usadd8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_usadd16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_usadd16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_usadd32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_usadd32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_usadd64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_usadd64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ussub8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ussub8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ussub16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ussub16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ussub32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ussub32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ussub64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ussub64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smin8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smin8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smin16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smin16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smin32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smin32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smin64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smin64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smax8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smax8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smax16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smax16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smax32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smax32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_smax64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_smax64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umin8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umin8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umin16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umin16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umin32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umin32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umin64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umin64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umax8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umax8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umax16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umax16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umax32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umax32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_umax64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_umax64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_abs8__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_abs8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_abs16__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_abs16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_abs32__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_abs32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_abs64__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_abs64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_and__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_and((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_or__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_or((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_xor__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_xor((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_andc__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_andc((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_shl8i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shl8i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_shl16i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shl16i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_shl32i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shl32i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_shl64i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shl64i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_shr8i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shr8i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_shr16i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shr16i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_shr32i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shr32i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_shr64i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_shr64i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_sar8i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sar8i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_sar16i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sar16i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_sar32i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sar32i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_sar64i__void_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_sar64i((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (uint32_t)regs[REG_IARG_BASE + 2]);
}
void fcallhelper_gvec_eq8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_eq8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_eq16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_eq16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_eq32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_eq32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_eq64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_eq64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ne8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ne8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ne16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ne16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ne32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ne32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ne64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ne64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_lt8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_lt8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_lt16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_lt16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_lt32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_lt32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_lt64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_lt64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_le8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_le8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_le16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_le16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_le32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_le32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_le64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_le64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ltu8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ltu8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ltu16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ltu16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ltu32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ltu32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_ltu64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_ltu64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_leu8__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_leu8((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_leu16__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_leu16((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_leu32__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_leu32((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}
void fcallhelper_gvec_leu64__void_ptr_ptr_ptr_i32(tcg_target_ulong *regs, uint64_t *stack) {
    helper_gvec_leu64((void *)regs[REG_IARG_BASE + 0], (void *)regs[REG_IARG_BASE + 1], (void *)regs[REG_IARG_BASE + 2], (uint32_t)regs[REG_IARG_BASE + 3]);
}

