// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vks_op_64_bit.h for the primary calling header

#ifndef VERILATED_VKS_OP_64_BIT___024ROOT_H_
#define VERILATED_VKS_OP_64_BIT___024ROOT_H_  // guard

#include "verilated.h"

class Vks_op_64_bit__Syms;
class Vks_op_64_bit_ks_adder_2;


class Vks_op_64_bit___024root final : public VerilatedModule {
  public:
    // CELLS
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u1;
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u2;
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u3;
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u4;
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u5;
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u6;
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u7;
    Vks_op_64_bit_ks_adder_2* __PVT__ks_op_64_bit__DOT__u8;

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);

    // INTERNAL VARIABLES
    Vks_op_64_bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vks_op_64_bit___024root(Vks_op_64_bit__Syms* symsp, const char* name);
    ~Vks_op_64_bit___024root();
    VL_UNCOPYABLE(Vks_op_64_bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
