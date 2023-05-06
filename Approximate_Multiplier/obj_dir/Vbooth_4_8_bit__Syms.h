// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBOOTH_4_8_BIT__SYMS_H_
#define VERILATED_VBOOTH_4_8_BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbooth_4_8_bit.h"

// INCLUDE MODULE CLASSES
#include "Vbooth_4_8_bit___024root.h"

// SYMS CLASS (contains all model state)
class Vbooth_4_8_bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbooth_4_8_bit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbooth_4_8_bit___024root       TOP;

    // CONSTRUCTORS
    Vbooth_4_8_bit__Syms(VerilatedContext* contextp, const char* namep, Vbooth_4_8_bit* modelp);
    ~Vbooth_4_8_bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
