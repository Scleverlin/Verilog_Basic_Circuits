// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKS_NEW_TEST__SYMS_H_
#define VERILATED_VKS_NEW_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vks_new_test.h"

// INCLUDE MODULE CLASSES
#include "Vks_new_test___024root.h"

// SYMS CLASS (contains all model state)
class Vks_new_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vks_new_test* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vks_new_test___024root         TOP;

    // CONSTRUCTORS
    Vks_new_test__Syms(VerilatedContext* contextp, const char* namep, Vks_new_test* modelp);
    ~Vks_new_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
