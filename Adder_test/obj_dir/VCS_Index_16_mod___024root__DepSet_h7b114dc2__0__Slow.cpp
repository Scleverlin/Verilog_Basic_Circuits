// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCS_Index_16_mod.h for the primary calling header

#include "verilated.h"

#include "VCS_Index_16_mod___024root.h"

VL_ATTR_COLD void VCS_Index_16_mod___024root___eval_static(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCS_Index_16_mod___024root___eval_initial(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__CS_Index_16_mod__DOT__c16n 
        = vlSelf->CS_Index_16_mod__DOT__c16n;
}

VL_ATTR_COLD void VCS_Index_16_mod___024root___eval_final(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCS_Index_16_mod___024root___eval_triggers__stl(VCS_Index_16_mod___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__stl(VCS_Index_16_mod___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___eval_stl(VCS_Index_16_mod___024root* vlSelf);

VL_ATTR_COLD void VCS_Index_16_mod___024root___eval_settle(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCS_Index_16_mod___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCS_Index_16_mod___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/Adder_test/CS_Index_16_mod.v", 6, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCS_Index_16_mod___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__stl(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] CS_Index_16_mod.c16n)\n");
    }
}
#endif  // VL_DEBUG

void VCS_Index_16_mod___024root___ico_sequent__TOP__0(VCS_Index_16_mod___024root* vlSelf);
void VCS_Index_16_mod___024root___ico_comb__TOP__0(VCS_Index_16_mod___024root* vlSelf);

VL_ATTR_COLD void VCS_Index_16_mod___024root___eval_stl(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCS_Index_16_mod___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        VCS_Index_16_mod___024root___ico_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__ico(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] CS_Index_16_mod.c16n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__act(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] CS_Index_16_mod.c16n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__nba(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] CS_Index_16_mod.c16n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCS_Index_16_mod___024root___ctor_var_reset(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->CS_Index_16_mod__DOT__gnpg_level4 = VL_RAND_RESET_I(4);
    vlSelf->CS_Index_16_mod__DOT__pp_level4 = VL_RAND_RESET_I(4);
    vlSelf->CS_Index_16_mod__DOT__c16n = VL_RAND_RESET_I(4);
    vlSelf->CS_Index_16_mod__DOT__tmp1 = VL_RAND_RESET_I(1);
    vlSelf->CS_Index_16_mod__DOT__c9 = VL_RAND_RESET_I(1);
    vlSelf->CS_Index_16_mod__DOT__pptmp3 = VL_RAND_RESET_I(4);
    vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15 = VL_RAND_RESET_I(8);
    vlSelf->CS_Index_16_mod__DOT__tmp_c25 = VL_RAND_RESET_I(1);
    vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31 = VL_RAND_RESET_I(8);
    vlSelf->CS_Index_16_mod__DOT__tmp_c41 = VL_RAND_RESET_I(1);
    vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47 = VL_RAND_RESET_I(8);
    vlSelf->CS_Index_16_mod__DOT__tmp_c57 = VL_RAND_RESET_I(1);
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a87c33e__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd5223a50__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9964639d__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a3751aa__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5ea534e9__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc1e92429__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h89004fc3__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7cf0a135__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a668320__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1a682327__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h55594d28__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb15d2439__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05dbcede__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c6c34cd__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h36efe51d__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hdce5900a__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h415b4c29__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h21660944__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h47971b0c__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3bc29c1b__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28004d75__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_ha53ae65e__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7d649ec6__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3c770eb7__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h177172a1__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5e515a86__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h68264b72__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c0ec1e0__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c9e5d1e__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3e897879__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hedeb8924__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hf583e290__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_he4db5a5d__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fc40f81__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd3fa7237__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb740abc5__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2847b83b__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h4579e8ef__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hba52ce08__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hbc47ca86__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h95b74486__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9418fdc7__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h15e8b2af__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h92a0f93a__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h17c75439__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h79fa199e__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05df2736__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h369eafe8__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h60ef5f1a__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7e0931b2__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h38d153ed__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h01bd46dc__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h72ebac23__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7be44af5__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28cbb8e2__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb8536ff5__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd0fdd63f__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb66ac527__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9c4ed94d__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0e2a7037__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc4b635b0__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0c7b4651__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h232807b7__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h78d4d452__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd24c3501__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h761a3d38__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2f97e8f7__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h295e9c41__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fae920a__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_haf7aa43f__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h8529f84a__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc8dbd7a1__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc2fb61b4__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1bf5e584__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h676bd0a5__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h264b8873__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2e1d1409__0 = 0;
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc340dd58__0 = 0;
    vlSelf->__VdfgTmp_h84dbe7ba__0 = 0;
    vlSelf->__VdfgTmp_hfbe8729c__0 = 0;
    vlSelf->__VdfgTmp_hece3181c__0 = 0;
    vlSelf->__VdfgTmp_h37e33924__0 = 0;
    vlSelf->__Vtrigrprev__TOP__CS_Index_16_mod__DOT__c16n = VL_RAND_RESET_I(4);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
}
