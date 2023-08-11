// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHC_64_BK1_KS5.h for the primary calling header

#ifndef VERILATED_VHC_64_BK1_KS5___024ROOT_H_
#define VERILATED_VHC_64_BK1_KS5___024ROOT_H_  // guard

#include "verilated.h"


class VHC_64_BK1_KS5__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHC_64_BK1_KS5___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(a,64,1);
    VL_IN64(b,64,1);
    VL_OUT64(sum,64,1);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VHC_64_BK1_KS5__Syms* const vlSymsp;

    // CONSTRUCTORS
    VHC_64_BK1_KS5___024root(VHC_64_BK1_KS5__Syms* symsp, const char* v__name);
    ~VHC_64_BK1_KS5___024root();
    VL_UNCOPYABLE(VHC_64_BK1_KS5___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
