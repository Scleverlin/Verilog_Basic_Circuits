// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCS_64_INDEX_4__SYMS_H_
#define VERILATED_VCS_64_INDEX_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCS_64_index_4.h"

// INCLUDE MODULE CLASSES
#include "VCS_64_index_4___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCS_64_index_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCS_64_index_4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCS_64_index_4___024root       TOP;

    // CONSTRUCTORS
    VCS_64_index_4__Syms(VerilatedContext* contextp, const char* namep, VCS_64_index_4* modelp);
    ~VCS_64_index_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
