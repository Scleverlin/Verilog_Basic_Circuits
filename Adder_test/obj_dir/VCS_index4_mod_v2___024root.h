// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCS_index4_mod_v2.h for the primary calling header

#ifndef VERILATED_VCS_INDEX4_MOD_V2___024ROOT_H_
#define VERILATED_VCS_INDEX4_MOD_V2___024ROOT_H_  // guard

#include "verilated.h"

class VCS_index4_mod_v2__Syms;

class VCS_index4_mod_v2___024root final : public VerilatedModule {
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
    VCS_index4_mod_v2__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCS_index4_mod_v2___024root(VCS_index4_mod_v2__Syms* symsp, const char* v__name);
    ~VCS_index4_mod_v2___024root();
    VL_UNCOPYABLE(VCS_index4_mod_v2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
