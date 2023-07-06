// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLA_INDEX_4_32__SYMS_H_
#define VERILATED_VCLA_INDEX_4_32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCLA_index_4_32.h"

// INCLUDE MODULE CLASSES
#include "VCLA_index_4_32___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCLA_index_4_32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCLA_index_4_32* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCLA_index_4_32___024root      TOP;

    // CONSTRUCTORS
    VCLA_index_4_32__Syms(VerilatedContext* contextp, const char* namep, VCLA_index_4_32* modelp);
    ~VCLA_index_4_32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
