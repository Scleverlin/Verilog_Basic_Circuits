// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmultiplier_32.h for the primary calling header

#ifndef VERILATED_VMULTIPLIER_32___024ROOT_H_
#define VERILATED_VMULTIPLIER_32___024ROOT_H_  // guard

#include "verilated.h"

class Vmultiplier_32__Syms;
class Vmultiplier_32_HC_64;


class Vmultiplier_32___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_0;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_1;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_2;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_3;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_4;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_5;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_6;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_7;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_8;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_9;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_10;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_11;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_12;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_13;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_14;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_15;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_16;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_17;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_18;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_19;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_20;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_21;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_22;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_23;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_24;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_25;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_26;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_27;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_28;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_29;
    Vmultiplier_32_HC_64* __PVT__multiplier_32__DOT__hc_64_30;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(out,63,0);
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_0____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_0____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_1____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_1____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_2____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_2____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_3____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_3____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_4____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_4____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_5____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_5____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_6____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_6____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_7____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_7____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_8____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_8____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_9____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_9____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_10____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_10____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_11____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_11____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_12____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_12____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_13____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_13____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_14____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_14____pinNumber1;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_15____pinNumber2;
    QData/*63:0*/ multiplier_32__DOT____Vcellinp__hc_64_15____pinNumber1;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmultiplier_32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmultiplier_32___024root(Vmultiplier_32__Syms* symsp, const char* v__name);
    ~Vmultiplier_32___024root();
    VL_UNCOPYABLE(Vmultiplier_32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
