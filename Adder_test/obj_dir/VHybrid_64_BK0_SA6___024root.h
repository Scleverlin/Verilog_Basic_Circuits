// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHybrid_64_BK0_SA6.h for the primary calling header

#ifndef VERILATED_VHYBRID_64_BK0_SA6___024ROOT_H_
#define VERILATED_VHYBRID_64_BK0_SA6___024ROOT_H_  // guard

#include "verilated.h"


class VHybrid_64_BK0_SA6__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHybrid_64_BK0_SA6___024root final : public VerilatedModule {
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
    VHybrid_64_BK0_SA6__Syms* const vlSymsp;

    // CONSTRUCTORS
    VHybrid_64_BK0_SA6___024root(VHybrid_64_BK0_SA6__Syms* symsp, const char* v__name);
    ~VHybrid_64_BK0_SA6___024root();
    VL_UNCOPYABLE(VHybrid_64_BK0_SA6___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
