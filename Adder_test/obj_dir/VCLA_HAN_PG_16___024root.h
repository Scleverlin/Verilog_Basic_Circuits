// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_HAN_PG_16.h for the primary calling header

#ifndef VERILATED_VCLA_HAN_PG_16___024ROOT_H_
#define VERILATED_VCLA_HAN_PG_16___024ROOT_H_  // guard

#include "verilated.h"

class VCLA_HAN_PG_16__Syms;

class VCLA_HAN_PG_16___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*7:0*/ CLA_HAN_PG_16__DOT__u0__DOT__gnpg_level3;
    CData/*7:0*/ CLA_HAN_PG_16__DOT__u0__DOT__pp_level3;
    CData/*3:0*/ CLA_HAN_PG_16__DOT__u0__DOT__gnpg_level4;
    CData/*3:0*/ CLA_HAN_PG_16__DOT__u0__DOT__pp_level4;
    CData/*0:0*/ CLA_HAN_PG_16__DOT__u0__DOT____VdfgTmp_h0bb00120__0;
    CData/*0:0*/ CLA_HAN_PG_16__DOT__u0__DOT____VdfgTmp_hb348ffad__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN16(a,16,1);
    VL_IN16(b,16,1);
    VL_OUT16(sum,16,1);
    SData/*15:0*/ CLA_HAN_PG_16__DOT__p;
    SData/*15:0*/ CLA_HAN_PG_16__DOT__gnpg;
    SData/*15:0*/ CLA_HAN_PG_16__DOT__pp;
    SData/*15:0*/ CLA_HAN_PG_16__DOT__u0__DOT__g;
    SData/*15:0*/ __Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__pp;
    SData/*15:0*/ __Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__gnpg;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<3> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCLA_HAN_PG_16__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_HAN_PG_16___024root(VCLA_HAN_PG_16__Syms* symsp, const char* v__name);
    ~VCLA_HAN_PG_16___024root();
    VL_UNCOPYABLE(VCLA_HAN_PG_16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
