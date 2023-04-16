// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKS_OP_64_V2__SYMS_H_
#define VERILATED_VKS_OP_64_V2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vks_op_64_v2.h"

// INCLUDE MODULE CLASSES
#include "Vks_op_64_v2___024root.h"

// SYMS CLASS (contains all model state)
class Vks_op_64_v2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vks_op_64_v2* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vks_op_64_v2___024root         TOP;

    // CONSTRUCTORS
    Vks_op_64_v2__Syms(VerilatedContext* contextp, const char* namep, Vks_op_64_v2* modelp);
    ~Vks_op_64_v2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
