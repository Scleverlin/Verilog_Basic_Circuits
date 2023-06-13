// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VKS_16.h for the primary calling header

#ifndef VERILATED_VKS_16___024ROOT_H_
#define VERILATED_VKS_16___024ROOT_H_  // guard

#include "verilated.h"

class VKS_16__Syms;

class VKS_16___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ __VactContinue;
    VL_IN16(a,16,1);
    VL_IN16(b,16,1);
    VL_OUT16(sum,16,1);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VKS_16__Syms* const vlSymsp;

    // CONSTRUCTORS
    VKS_16___024root(VKS_16__Syms* symsp, const char* v__name);
    ~VKS_16___024root();
    VL_UNCOPYABLE(VKS_16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
