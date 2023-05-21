// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_new_AO_8bit.h for the primary calling header

#ifndef VERILATED_VCLA_NEW_AO_8BIT___024ROOT_H_
#define VERILATED_VCLA_NEW_AO_8BIT___024ROOT_H_  // guard

#include "verilated.h"

class VCLA_new_AO_8bit__Syms;

class VCLA_new_AO_8bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,8,1);
    VL_IN8(b,8,1);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,8,1);
    VL_OUT8(cout,0,0);
    CData/*7:0*/ CLA_new_AO_8bit__DOT__gnpg;
    CData/*7:0*/ CLA_new_AO_8bit__DOT__pp;
    CData/*7:0*/ CLA_new_AO_8bit__DOT__p;
    CData/*7:0*/ CLA_new_AO_8bit__DOT__u0__DOT__g;
    CData/*7:0*/ __Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__pp;
    CData/*7:0*/ __Vtrigrprev__TOP__CLA_new_AO_8bit__DOT__gnpg;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<3> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCLA_new_AO_8bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_new_AO_8bit___024root(VCLA_new_AO_8bit__Syms* symsp, const char* v__name);
    ~VCLA_new_AO_8bit___024root();
    VL_UNCOPYABLE(VCLA_new_AO_8bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
