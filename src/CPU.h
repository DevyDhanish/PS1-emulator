#ifndef CPU_H
#define CPU_H

#include <stdint.h>

struct MIPS_CPU
{
    uint32_t pc;                // program counter
};

typedef struct MIPS_CPU cpu;

#endif /* cpu */