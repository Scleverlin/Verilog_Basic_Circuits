// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCS_Index_4_mod.h for the primary calling header

#ifndef VERILATED_VCS_INDEX_4_MOD___024ROOT_H_
#define VERILATED_VCS_INDEX_4_MOD___024ROOT_H_  // guard

#include "verilated.h"

class VCS_Index_4_mod__Syms;

class VCS_Index_4_mod___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_he4db5a5d__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ CS_Index_4_mod__DOT__gnpg_level2;
    SData/*15:0*/ CS_Index_4_mod__DOT__pp_level2;
    SData/*15:0*/ CS_Index_4_mod__DOT__c4n;
    SData/*15:0*/ __Vtrigrprev__TOP__CS_Index_4_mod__DOT__c4n;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(a,64,1);
    VL_IN64(b,64,1);
    VL_OUT64(sum,64,1);
    QData/*63:0*/ __VdfgTmp_hece3181c__0;
    QData/*63:0*/ __VdfgTmp_h37e33924__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCS_Index_4_mod__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCS_Index_4_mod___024root(VCS_Index_4_mod__Syms* symsp, const char* v__name);
    ~VCS_Index_4_mod___024root();
    VL_UNCOPYABLE(VCS_Index_4_mod___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
