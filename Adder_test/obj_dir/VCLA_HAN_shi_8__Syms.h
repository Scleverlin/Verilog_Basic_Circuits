// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLA_HAN_SHI_8__SYMS_H_
#define VERILATED_VCLA_HAN_SHI_8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCLA_HAN_shi_8.h"

// INCLUDE MODULE CLASSES
#include "VCLA_HAN_shi_8___024root.h"

// SYMS CLASS (contains all model state)
class VCLA_HAN_shi_8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCLA_HAN_shi_8* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCLA_HAN_shi_8___024root       TOP;

    // CONSTRUCTORS
    VCLA_HAN_shi_8__Syms(VerilatedContext* contextp, const char* namep, VCLA_HAN_shi_8* modelp);
    ~VCLA_HAN_shi_8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
