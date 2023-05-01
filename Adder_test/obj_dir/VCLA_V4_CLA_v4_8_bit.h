// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_V4.h for the primary calling header

#ifndef VERILATED_VCLA_V4_CLA_V4_8_BIT_H_
#define VERILATED_VCLA_V4_CLA_V4_8_BIT_H_  // guard

#include "verilated.h"

class VCLA_V4__Syms;

class VCLA_V4_CLA_v4_8_bit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,7,0);
    VL_OUT8(cout,0,0);
    CData/*7:0*/ __PVT__p;
    CData/*0:0*/ __PVT__c0;
    CData/*0:0*/ __Vcellinp__for_c3____pinNumber2;
    CData/*0:0*/ __Vcellinp__for_c4____pinNumber2;
    CData/*0:0*/ __Vcellinp__for_c5____pinNumber2;
    CData/*0:0*/ __Vcellinp__for_c6____pinNumber2;
    CData/*0:0*/ __Vcellinp__for_cout____pinNumber2;
    CData/*7:0*/ __PVT__u1__DOT__g;

    // INTERNAL VARIABLES
    VCLA_V4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_V4_CLA_v4_8_bit(VCLA_V4__Syms* symsp, const char* v__name);
    ~VCLA_V4_CLA_v4_8_bit();
    VL_UNCOPYABLE(VCLA_V4_CLA_v4_8_bit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
