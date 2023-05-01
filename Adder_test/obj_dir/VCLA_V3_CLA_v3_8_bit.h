// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_V3.h for the primary calling header

#ifndef VERILATED_VCLA_V3_CLA_V3_8_BIT_H_
#define VERILATED_VCLA_V3_CLA_V3_8_BIT_H_  // guard

#include "verilated.h"

class VCLA_V3__Syms;

class VCLA_V3_CLA_v3_8_bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,7,0);
    VL_OUT8(cout,0,0);
    CData/*7:0*/ __PVT__p;
    CData/*6:0*/ __PVT__norpp;
    CData/*0:0*/ __PVT__c0;
    CData/*0:0*/ __PVT__c1;
    CData/*0:0*/ __PVT__c2;
    CData/*0:0*/ __PVT__c3;
    CData/*0:0*/ __PVT__c4;
    CData/*0:0*/ __PVT__c5;
    CData/*7:0*/ __PVT__u1__DOT__g;

    // INTERNAL VARIABLES
    VCLA_V3__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_V3_CLA_v3_8_bit(VCLA_V3__Syms* symsp, const char* v__name);
    ~VCLA_V3_CLA_v3_8_bit();
    VL_UNCOPYABLE(VCLA_V3_CLA_v3_8_bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
