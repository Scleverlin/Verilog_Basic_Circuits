// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBK0_KS6_64__02dbit.h for the primary calling header

#ifndef VERILATED_VBK0_KS6_64__02DBIT___024ROOT_H_
#define VERILATED_VBK0_KS6_64__02DBIT___024ROOT_H_  // guard

#include "verilated.h"


class VBK0_KS6_64__02dbit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBK0_KS6_64__02dbit___024root final : public VerilatedModule {
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
    VBK0_KS6_64__02dbit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBK0_KS6_64__02dbit___024root(VBK0_KS6_64__02dbit__Syms* symsp, const char* v__name);
    ~VBK0_KS6_64__02dbit___024root();
    VL_UNCOPYABLE(VBK0_KS6_64__02dbit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
