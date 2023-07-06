// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_index_4_32.h for the primary calling header

#ifndef VERILATED_VCLA_INDEX_4_32___024ROOT_H_
#define VERILATED_VCLA_INDEX_4_32___024ROOT_H_  // guard

#include "verilated.h"


class VCLA_index_4_32__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCLA_index_4_32___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ CLA_index_4_32__DOT__c;
    CData/*7:0*/ CLA_index_4_32__DOT__shi__DOT__u0__DOT__gnpg_level4;
    CData/*7:0*/ CLA_index_4_32__DOT__shi__DOT__u0__DOT__pp_level4;
    CData/*3:0*/ CLA_index_4_32__DOT__shi__DOT__u0__DOT__gnpg_level5;
    CData/*3:0*/ CLA_index_4_32__DOT__shi__DOT__u0__DOT__pp_level5;
    CData/*7:0*/ CLA_index_4_32__DOT__shi1__DOT__u0__DOT__gnpg_level4;
    CData/*7:0*/ CLA_index_4_32__DOT__shi1__DOT__u0__DOT__pp_level4;
    CData/*3:0*/ CLA_index_4_32__DOT__shi1__DOT__u0__DOT__gnpg_level5;
    CData/*3:0*/ CLA_index_4_32__DOT__shi1__DOT__u0__DOT__pp_level5;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ CLA_index_4_32__DOT__shi__DOT__u0__DOT__gnpg_level1;
    SData/*15:0*/ CLA_index_4_32__DOT__shi__DOT__u0__DOT__pp_level1;
    SData/*15:0*/ CLA_index_4_32__DOT__shi1__DOT__u0__DOT__gnpg_level1;
    SData/*15:0*/ CLA_index_4_32__DOT__shi1__DOT__u0__DOT__pp_level1;
    IData/*31:0*/ CLA_index_4_32__DOT____Vcellout__shi____pinNumber4;
    IData/*31:0*/ CLA_index_4_32__DOT__shi__DOT__p;
    IData/*31:0*/ CLA_index_4_32__DOT__shi__DOT__gnpg;
    IData/*31:0*/ CLA_index_4_32__DOT__shi__DOT__pp;
    IData/*31:0*/ CLA_index_4_32__DOT__shi__DOT__u0__DOT__g;
    IData/*31:0*/ CLA_index_4_32__DOT__shi1__DOT__p;
    IData/*31:0*/ CLA_index_4_32__DOT__shi1__DOT__gnpg;
    IData/*31:0*/ CLA_index_4_32__DOT__shi1__DOT__pp;
    IData/*31:0*/ CLA_index_4_32__DOT__shi1__DOT__u0__DOT__g;
    IData/*31:0*/ __Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__gnpg__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__pp__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__pp__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);
    VlTriggerVec<5> __VstlTriggered;
    VlTriggerVec<5> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCLA_index_4_32__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_index_4_32___024root(VCLA_index_4_32__Syms* symsp, const char* v__name);
    ~VCLA_index_4_32___024root();
    VL_UNCOPYABLE(VCLA_index_4_32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
