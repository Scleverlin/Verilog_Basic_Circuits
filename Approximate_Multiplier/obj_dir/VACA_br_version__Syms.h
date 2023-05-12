// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VACA_BR_VERSION__SYMS_H_
#define VERILATED_VACA_BR_VERSION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VACA_br_version.h"

// INCLUDE MODULE CLASSES
#include "VACA_br_version___024root.h"

// SYMS CLASS (contains all model state)
class VACA_br_version__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VACA_br_version* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VACA_br_version___024root      TOP;

    // CONSTRUCTORS
    VACA_br_version__Syms(VerilatedContext* contextp, const char* namep, VACA_br_version* modelp);
    ~VACA_br_version__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
