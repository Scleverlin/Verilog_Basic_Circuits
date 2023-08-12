// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHYBRID_64_BK4_SA2__SYMS_H_
#define VERILATED_VHYBRID_64_BK4_SA2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VHybrid_64_BK4_SA2.h"

// INCLUDE MODULE CLASSES
#include "VHybrid_64_BK4_SA2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VHybrid_64_BK4_SA2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VHybrid_64_BK4_SA2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VHybrid_64_BK4_SA2___024root   TOP;

    // CONSTRUCTORS
    VHybrid_64_BK4_SA2__Syms(VerilatedContext* contextp, const char* namep, VHybrid_64_BK4_SA2* modelp);
    ~VHybrid_64_BK4_SA2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
