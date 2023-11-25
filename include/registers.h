#ifndef REGISTERS_H
#define REGISTERS_H

#include <stdint.h>

struct MIPS_REGISTERS
{
    // GENERAL REGISTERS
    uint32_t     zero;   // always contains 0, no matter what's written to it
    uint32_t     AT;     // assembler temporary
    uint32_t     v0;
    uint32_t     v1;
    uint32_t     a0;
    uint32_t     a1;
    uint32_t     a2;
    uint32_t     a3;
    uint32_t     t0;
    uint32_t     t1;
    uint32_t     t2;
    uint32_t     t3;
    uint32_t     t4;
    uint32_t     t5;
    uint32_t     t6;
    uint32_t     t7;
    uint32_t     s0;
    uint32_t     s1;
    uint32_t     s2;
    uint32_t     s3;
    uint32_t     s4;
    uint32_t     s5;
    uint32_t     s6;
    uint32_t     s7;
    uint32_t     t8;
    uint32_t     t9;
    uint32_t     k0;
    uint32_t     k1;
    uint32_t     gp;     // global pointer, constant for any given process
    uint32_t     sp;     // stack pointer, i think you know what this does.
    uint32_t     fp;     // used as a frame pointer but not always
    uint32_t     ra;     // return address of function

    // SPECIAL REGISTERS
    uint32_t     HI;
    uint32_t     LO;
    uint32_t     PC;    // program counter
};

typedef struct MIPS_REGISTERS registers;

void showRegs(const registers *regs);

#endif