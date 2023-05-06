// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbooth_4_8_bit.h for the primary calling header

#ifndef VERILATED_VBOOTH_4_8_BIT___024ROOT_H_
#define VERILATED_VBOOTH_4_8_BIT___024ROOT_H_  // guard

#include "verilated.h"

class Vbooth_4_8_bit__Syms;

class Vbooth_4_8_bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    CData/*0:0*/ __VactContinue;
    VL_OUT16(c,15,0);
    SData/*15:0*/ booth_4_8_bit__DOT____Vcellout__p0____pinNumber3;
    SData/*15:0*/ booth_4_8_bit__DOT____Vcellout__p1____pinNumber3;
    SData/*15:0*/ booth_4_8_bit__DOT____Vcellout__p2____pinNumber3;
    SData/*15:0*/ booth_4_8_bit__DOT____Vcellout__p3____pinNumber3;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbooth_4_8_bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbooth_4_8_bit___024root(Vbooth_4_8_bit__Syms* symsp, const char* v__name);
    ~Vbooth_4_8_bit___024root();
    VL_UNCOPYABLE(Vbooth_4_8_bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
