// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdff.h for the primary calling header

#ifndef VERILATED_VDFF___024ROOT_H_
#define VERILATED_VDFF___024ROOT_H_  // guard

#include "verilated.h"


class Vdff__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdff___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(data,0,0);
    VL_OUT8(q,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdff__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdff___024root(Vdff__Syms* symsp, const char* v__name);
    ~Vdff___024root();
    VL_UNCOPYABLE(Vdff___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
