// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vks_adder_op_3_64.h for the primary calling header

#ifndef VERILATED_VKS_ADDER_OP_3_64_KS_ADDER_3_H_
#define VERILATED_VKS_ADDER_OP_3_64_KS_ADDER_3_H_  // guard

#include "verilated.h"

class Vks_adder_op_3_64__Syms;

class Vks_adder_op_3_64_ks_adder_3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*7:0*/ __PVT__p;
    CData/*5:0*/ __PVT__ppp;
    VL_OUT8(sum,7,0);
    CData/*5:0*/ __PVT__g_png_ppg;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    CData/*0:0*/ __PVT__AO_8__DOT__aoi;

    // INTERNAL VARIABLES
    Vks_adder_op_3_64__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vks_adder_op_3_64_ks_adder_3(Vks_adder_op_3_64__Syms* symsp, const char* name);
    ~Vks_adder_op_3_64_ks_adder_3();
    VL_UNCOPYABLE(Vks_adder_op_3_64_ks_adder_3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
