// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLA_V4__SYMS_H_
#define VERILATED_VCLA_V4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCLA_V4.h"

// INCLUDE MODULE CLASSES
#include "VCLA_V4___024root.h"
#include "VCLA_V4_CLA_v4_8_bit.h"

// SYMS CLASS (contains all model state)
class VCLA_V4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCLA_V4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCLA_V4___024root              TOP;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u1;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u2;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u3;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u4;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u5;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u6;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u7;
    VCLA_V4_CLA_v4_8_bit           TOP__CLA_V4_64__DOT__u8;

    // CONSTRUCTORS
    VCLA_V4__Syms(VerilatedContext* contextp, const char* namep, VCLA_V4* modelp);
    ~VCLA_V4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
