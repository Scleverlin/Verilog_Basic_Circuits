// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKS_16__SYMS_H_
#define VERILATED_VKS_16__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VKS_16.h"

// INCLUDE MODULE CLASSES
#include "VKS_16___024root.h"

// SYMS CLASS (contains all model state)
class VKS_16__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VKS_16* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VKS_16___024root               TOP;

    // CONSTRUCTORS
    VKS_16__Syms(VerilatedContext* contextp, const char* namep, VKS_16* modelp);
    ~VKS_16__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
