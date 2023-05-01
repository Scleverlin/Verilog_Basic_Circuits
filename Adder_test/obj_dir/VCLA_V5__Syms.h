// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLA_V5__SYMS_H_
#define VERILATED_VCLA_V5__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCLA_V5.h"

// INCLUDE MODULE CLASSES
#include "VCLA_V5___024root.h"
#include "VCLA_V5_CLA_v5_8_bit.h"

// SYMS CLASS (contains all model state)
class VCLA_V5__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCLA_V5* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCLA_V5___024root              TOP;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u1;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u2;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u3;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u4;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u5;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u6;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u7;
    VCLA_V5_CLA_v5_8_bit           TOP__CLA_v5_64__DOT__u8;

    // CONSTRUCTORS
    VCLA_V5__Syms(VerilatedContext* contextp, const char* namep, VCLA_V5* modelp);
    ~VCLA_V5__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
