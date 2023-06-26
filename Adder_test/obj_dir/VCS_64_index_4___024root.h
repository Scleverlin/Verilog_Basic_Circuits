// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCS_64_index_4.h for the primary calling header

#ifndef VERILATED_VCS_64_INDEX_4___024ROOT_H_
#define VERILATED_VCS_64_INDEX_4___024ROOT_H_  // guard

#include "verilated.h"


class VCS_64_index_4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCS_64_index_4___024root final : public VerilatedModule {
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
    VCS_64_index_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCS_64_index_4___024root(VCS_64_index_4__Syms* symsp, const char* v__name);
    ~VCS_64_index_4___024root();
    VL_UNCOPYABLE(VCS_64_index_4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
