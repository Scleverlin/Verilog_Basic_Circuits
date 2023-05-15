// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBK_ADDER_16BIT__SYMS_H_
#define VERILATED_VBK_ADDER_16BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBK_adder_16bit.h"

// INCLUDE MODULE CLASSES
#include "VBK_adder_16bit___024root.h"

// SYMS CLASS (contains all model state)
class VBK_adder_16bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBK_adder_16bit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBK_adder_16bit___024root      TOP;

    // CONSTRUCTORS
    VBK_adder_16bit__Syms(VerilatedContext* contextp, const char* namep, VBK_adder_16bit* modelp);
    ~VBK_adder_16bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
