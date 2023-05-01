// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_V3.h for the primary calling header

#ifndef VERILATED_VCLA_V3___024ROOT_H_
#define VERILATED_VCLA_V3___024ROOT_H_  // guard

#include "verilated.h"

class VCLA_V3__Syms;
class VCLA_V3_CLA_v3_8_bit;


class VCLA_V3___024root final : public VerilatedModule {
  public:
    // CELLS
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u1;
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u2;
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u3;
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u4;
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u5;
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u6;
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u7;
    VCLA_V3_CLA_v3_8_bit* __PVT__CLA_V3_64__DOT__u8;

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCLA_V3__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_V3___024root(VCLA_V3__Syms* symsp, const char* v__name);
    ~VCLA_V3___024root();
    VL_UNCOPYABLE(VCLA_V3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
