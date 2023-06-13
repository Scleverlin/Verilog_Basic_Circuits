// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHC_8.h for the primary calling header

#ifndef VERILATED_VHC_8___024ROOT_H_
#define VERILATED_VHC_8___024ROOT_H_  // guard

#include "verilated.h"

class VHC_8__Syms;

class VHC_8___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,8,1);
    VL_IN8(b,8,1);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,8,1);
    VL_OUT8(cout,0,0);
    CData/*3:0*/ HC_8__DOT__c2n_1;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VHC_8__Syms* const vlSymsp;

    // CONSTRUCTORS
    VHC_8___024root(VHC_8__Syms* symsp, const char* v__name);
    ~VHC_8___024root();
    VL_UNCOPYABLE(VHC_8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
