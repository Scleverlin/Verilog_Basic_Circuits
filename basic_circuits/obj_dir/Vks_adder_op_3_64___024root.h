// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vks_adder_op_3_64.h for the primary calling header

#ifndef VERILATED_VKS_ADDER_OP_3_64___024ROOT_H_
#define VERILATED_VKS_ADDER_OP_3_64___024ROOT_H_  // guard

#include "verilated.h"

class Vks_adder_op_3_64__Syms;
class Vks_adder_op_3_64_ks_adder_3;


class Vks_adder_op_3_64___024root final : public VerilatedModule {
  public:
    // CELLS
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u0;
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u1;
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u2;
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u3;
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u4;
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u5;
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u6;
    Vks_adder_op_3_64_ks_adder_3* __PVT__ks_adder_op_3_64__DOT__u7;

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);

    // INTERNAL VARIABLES
    Vks_adder_op_3_64__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vks_adder_op_3_64___024root(Vks_adder_op_3_64__Syms* symsp, const char* name);
    ~Vks_adder_op_3_64___024root();
    VL_UNCOPYABLE(Vks_adder_op_3_64___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
