// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBK0_KS6_64__02DBIT__SYMS_H_
#define VERILATED_VBK0_KS6_64__02DBIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBK0_KS6_64__02dbit.h"

// INCLUDE MODULE CLASSES
#include "VBK0_KS6_64__02dbit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VBK0_KS6_64__02dbit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBK0_KS6_64__02dbit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBK0_KS6_64__02dbit___024root  TOP;

    // CONSTRUCTORS
    VBK0_KS6_64__02dbit__Syms(VerilatedContext* contextp, const char* namep, VBK0_KS6_64__02dbit* modelp);
    ~VBK0_KS6_64__02dbit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
