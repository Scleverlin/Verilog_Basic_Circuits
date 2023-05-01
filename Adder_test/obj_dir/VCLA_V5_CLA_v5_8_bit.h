// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_V5.h for the primary calling header

#ifndef VERILATED_VCLA_V5_CLA_V5_8_BIT_H_
#define VERILATED_VCLA_V5_CLA_V5_8_BIT_H_  // guard

#include "verilated.h"

class VCLA_V5__Syms;

class VCLA_V5_CLA_v5_8_bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,7,0);
    VL_OUT8(cout,0,0);
    CData/*7:0*/ __PVT__p;
    CData/*0:0*/ __PVT__c1;
    CData/*0:0*/ __PVT__c2;
    CData/*0:0*/ __PVT__c5;
    CData/*7:0*/ __PVT__u1__DOT__g;
    CData/*0:0*/ __VdfgTmp_heb99427f__0;
    CData/*0:0*/ __VdfgTmp_hb58ed366__0;
    CData/*0:0*/ __VdfgTmp_h17856908__0;
    CData/*1:0*/ __VdfgTmp_h10dccfe8__0;

    // INTERNAL VARIABLES
    VCLA_V5__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_V5_CLA_v5_8_bit(VCLA_V5__Syms* symsp, const char* v__name);
    ~VCLA_V5_CLA_v5_8_bit();
    VL_UNCOPYABLE(VCLA_V5_CLA_v5_8_bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
