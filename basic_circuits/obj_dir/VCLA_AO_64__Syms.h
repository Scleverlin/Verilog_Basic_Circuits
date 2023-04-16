// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLA_AO_64__SYMS_H_
#define VERILATED_VCLA_AO_64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCLA_AO_64.h"

// INCLUDE MODULE CLASSES
#include "VCLA_AO_64___024root.h"

// SYMS CLASS (contains all model state)
class VCLA_AO_64__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCLA_AO_64* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCLA_AO_64___024root           TOP;

    // CONSTRUCTORS
    VCLA_AO_64__Syms(VerilatedContext* contextp, const char* namep, VCLA_AO_64* modelp);
    ~VCLA_AO_64__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
