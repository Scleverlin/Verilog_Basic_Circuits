// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKS_OP_64_BIT__SYMS_H_
#define VERILATED_VKS_OP_64_BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vks_op_64_bit.h"

// INCLUDE MODULE CLASSES
#include "Vks_op_64_bit___024root.h"
#include "Vks_op_64_bit_ks_adder_2.h"

// SYMS CLASS (contains all model state)
class Vks_op_64_bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vks_op_64_bit* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vks_op_64_bit___024root        TOP;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u1;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u2;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u3;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u4;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u5;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u6;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u7;
    Vks_op_64_bit_ks_adder_2       TOP__ks_op_64_bit__DOT__u8;

    // CONSTRUCTORS
    Vks_op_64_bit__Syms(VerilatedContext* contextp, const char* namep, Vks_op_64_bit* modelp);
    ~Vks_op_64_bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
