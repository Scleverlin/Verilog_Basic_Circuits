// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLA_HAN_32BIT_BLOCK_64BIT__SYMS_H_
#define VERILATED_VCLA_HAN_32BIT_BLOCK_64BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCLA_HAN_32bit_block_64bit.h"

// INCLUDE MODULE CLASSES
#include "VCLA_HAN_32bit_block_64bit___024root.h"

// SYMS CLASS (contains all model state)
class VCLA_HAN_32bit_block_64bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCLA_HAN_32bit_block_64bit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCLA_HAN_32bit_block_64bit___024root TOP;

    // CONSTRUCTORS
    VCLA_HAN_32bit_block_64bit__Syms(VerilatedContext* contextp, const char* namep, VCLA_HAN_32bit_block_64bit* modelp);
    ~VCLA_HAN_32bit_block_64bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
