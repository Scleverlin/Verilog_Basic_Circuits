// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCS_INDEX4_MOD_V2__SYMS_H_
#define VERILATED_VCS_INDEX4_MOD_V2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCS_index4_mod_v2.h"

// INCLUDE MODULE CLASSES
#include "VCS_index4_mod_v2___024root.h"

// SYMS CLASS (contains all model state)
class VCS_index4_mod_v2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCS_index4_mod_v2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCS_index4_mod_v2___024root    TOP;

    // CONSTRUCTORS
    VCS_index4_mod_v2__Syms(VerilatedContext* contextp, const char* namep, VCS_index4_mod_v2* modelp);
    ~VCS_index4_mod_v2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
