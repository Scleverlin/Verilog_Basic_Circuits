// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLA_NEW_AO_8BIT__SYMS_H_
#define VERILATED_VCLA_NEW_AO_8BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCLA_new_AO_8bit.h"

// INCLUDE MODULE CLASSES
#include "VCLA_new_AO_8bit___024root.h"

// SYMS CLASS (contains all model state)
class VCLA_new_AO_8bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCLA_new_AO_8bit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCLA_new_AO_8bit___024root     TOP;

    // CONSTRUCTORS
    VCLA_new_AO_8bit__Syms(VerilatedContext* contextp, const char* namep, VCLA_new_AO_8bit* modelp);
    ~VCLA_new_AO_8bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
