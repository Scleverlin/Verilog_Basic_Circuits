// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCS_Index_16_mod.h for the primary calling header

#ifndef VERILATED_VCS_INDEX_16_MOD___024ROOT_H_
#define VERILATED_VCS_INDEX_16_MOD___024ROOT_H_  // guard

#include "verilated.h"

class VCS_Index_16_mod__Syms;

class VCS_Index_16_mod___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        VL_OUT8(cout,0,0);
        CData/*3:0*/ CS_Index_16_mod__DOT__gnpg_level4;
        CData/*3:0*/ CS_Index_16_mod__DOT__pp_level4;
        CData/*3:0*/ CS_Index_16_mod__DOT__c16n;
        CData/*0:0*/ CS_Index_16_mod__DOT__tmp1;
        CData/*0:0*/ CS_Index_16_mod__DOT__c9;
        CData/*3:0*/ CS_Index_16_mod__DOT__pptmp3;
        CData/*7:0*/ CS_Index_16_mod__DOT__pptmp_from_c15;
        CData/*0:0*/ CS_Index_16_mod__DOT__tmp_c25;
        CData/*7:0*/ CS_Index_16_mod__DOT__pptmp_from_c31;
        CData/*0:0*/ CS_Index_16_mod__DOT__tmp_c41;
        CData/*7:0*/ CS_Index_16_mod__DOT__pptmp_from_c47;
        CData/*0:0*/ CS_Index_16_mod__DOT__tmp_c57;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7a87c33e__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hd5223a50__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h9964639d__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7a3751aa__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h5ea534e9__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hc1e92429__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h89004fc3__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7cf0a135__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7a668320__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h1a682327__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h55594d28__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hb15d2439__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h05dbcede__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6c6c34cd__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h36efe51d__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hdce5900a__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h415b4c29__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h21660944__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h47971b0c__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h3bc29c1b__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h28004d75__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_ha53ae65e__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7d649ec6__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h3c770eb7__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h177172a1__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h5e515a86__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h68264b72__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6c0ec1e0__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6c9e5d1e__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h3e897879__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hedeb8924__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hf583e290__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_he4db5a5d__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h2fc40f81__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hd3fa7237__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hb740abc5__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h2847b83b__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h4579e8ef__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hba52ce08__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hbc47ca86__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h95b74486__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h9418fdc7__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h15e8b2af__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h92a0f93a__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h17c75439__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h79fa199e__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h05df2736__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h369eafe8__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h60ef5f1a__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7e0931b2__0;
    };
    struct {
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h38d153ed__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h01bd46dc__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h72ebac23__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7be44af5__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h28cbb8e2__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hb8536ff5__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hd0fdd63f__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hb66ac527__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h9c4ed94d__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h0e2a7037__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hc4b635b0__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h0c7b4651__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h232807b7__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h78d4d452__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hd24c3501__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h761a3d38__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h2f97e8f7__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h295e9c41__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h2fae920a__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_haf7aa43f__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h8529f84a__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hc8dbd7a1__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hc2fb61b4__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h1bf5e584__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h676bd0a5__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h264b8873__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h2e1d1409__0;
        CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hc340dd58__0;
        CData/*0:0*/ __VdfgTmp_h84dbe7ba__0;
        CData/*0:0*/ __VdfgTmp_hfbe8729c__0;
        CData/*3:0*/ __Vtrigrprev__TOP__CS_Index_16_mod__DOT__c16n;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(a,64,1);
        VL_IN64(b,64,1);
        VL_OUT64(sum,64,1);
        QData/*63:0*/ __VdfgTmp_hece3181c__0;
        QData/*63:0*/ __VdfgTmp_h37e33924__0;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCS_Index_16_mod__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCS_Index_16_mod___024root(VCS_Index_16_mod__Syms* symsp, const char* v__name);
    ~VCS_Index_16_mod___024root();
    VL_UNCOPYABLE(VCS_Index_16_mod___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
