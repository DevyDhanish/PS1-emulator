#include "../include/registers.h"

void showRegs(registers *regs)
{
    printf("zero : %u, at : %u, v0 : %u, v1 : %u\n", regs->zero, regs->AT, regs->v0, regs->v1);
    printf("a0 : %u, a1 : %u, a2 : %u, a3 : %u\n", regs->a0, regs->a1, regs->a2, regs->a3);
    printf("t0 : %u, t1 : %u, t2 : %u, t3 : %u\n", regs->t0, regs->t1, regs->t2, regs->t3);
    printf("t4 : %u, t5 : %u, t6 : %u, t7 : %u\n", regs->t4, regs->t5, regs->t6, regs->t7);
    printf("s0 : %u, s1 : %u, s3 : %u, s4 : %u,\n", regs->s0, regs->s1, regs->s2, regs->s3);
    printf("s5: %u, s6 : %u, s7: %u, t8 : %u\n", regs->s5, regs->s6, regs->s7, regs->t8);
    printf("t9 : %u, k0 : %u, k1 : %u, gp : %u\n", regs->t9, regs->k0, regs->k1, regs->gp);
    printf("sp : %u, fp : %u, ra : %u\n", regs->sp, regs->fp, regs->ra);
}