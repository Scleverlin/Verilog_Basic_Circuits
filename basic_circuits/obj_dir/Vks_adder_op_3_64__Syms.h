// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKS_ADDER_OP_3_64__SYMS_H_
#define VERILATED_VKS_ADDER_OP_3_64__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vks_adder_op_3_64.h"

// INCLUDE MODULE CLASSES
#include "Vks_adder_op_3_64___024root.h"
#include "Vks_adder_op_3_64_ks_adder_3.h"

// SYMS CLASS (contains all model state)
class Vks_adder_op_3_64__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vks_adder_op_3_64* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vks_adder_op_3_64___024root    TOP;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u0;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u1;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u2;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u3;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u4;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u5;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u6;
    Vks_adder_op_3_64_ks_adder_3   TOP__ks_adder_op_3_64__DOT__u7;

    // CONSTRUCTORS
    Vks_adder_op_3_64__Syms(VerilatedContext* contextp, const char* namep, Vks_adder_op_3_64* modelp);
    ~Vks_adder_op_3_64__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
