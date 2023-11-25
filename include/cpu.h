#ifndef CPU_H
#define CPU_H

#include "registers.h"

struct MIPS_CPU
{
    registers regs;
};

// fetch
// decode
// execute

typedef MIPS_CPU cpu;

#endif