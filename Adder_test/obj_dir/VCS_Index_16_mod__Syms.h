// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCS_INDEX_16_MOD__SYMS_H_
#define VERILATED_VCS_INDEX_16_MOD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCS_Index_16_mod.h"

// INCLUDE MODULE CLASSES
#include "VCS_Index_16_mod___024root.h"

// SYMS CLASS (contains all model state)
class VCS_Index_16_mod__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCS_Index_16_mod* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCS_Index_16_mod___024root     TOP;

    // CONSTRUCTORS
    VCS_Index_16_mod__Syms(VerilatedContext* contextp, const char* namep, VCS_Index_16_mod* modelp);
    ~VCS_Index_16_mod__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
