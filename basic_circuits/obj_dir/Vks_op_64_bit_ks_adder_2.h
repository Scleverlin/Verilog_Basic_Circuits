// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vks_op_64_bit.h for the primary calling header

#ifndef VERILATED_VKS_OP_64_BIT_KS_ADDER_2_H_
#define VERILATED_VKS_OP_64_BIT_KS_ADDER_2_H_  // guard

#include "verilated.h"

class Vks_op_64_bit__Syms;

class Vks_op_64_bit_ks_adder_2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*7:0*/ __PVT__p;
    CData/*6:0*/ __PVT__pp;
    VL_OUT8(sum,7,0);
    CData/*6:0*/ __PVT__gn_png;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    CData/*0:0*/ __PVT__AO_8__DOT__aoi;

    // INTERNAL VARIABLES
    Vks_op_64_bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vks_op_64_bit_ks_adder_2(Vks_op_64_bit__Syms* symsp, const char* name);
    ~Vks_op_64_bit_ks_adder_2();
    VL_UNCOPYABLE(Vks_op_64_bit_ks_adder_2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
