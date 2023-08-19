// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHC_64_BK2_KS4.h for the primary calling header

#include "verilated.h"

#include "VHC_64_BK2_KS4___024root.h"

VL_ATTR_COLD void VHC_64_BK2_KS4___024root___eval_static(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___eval_static\n"); );
}

VL_ATTR_COLD void VHC_64_BK2_KS4___024root___eval_initial(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VHC_64_BK2_KS4___024root___eval_final(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___eval_final\n"); );
}

VL_ATTR_COLD void VHC_64_BK2_KS4___024root___eval_triggers__stl(VHC_64_BK2_KS4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK2_KS4___024root___dump_triggers__stl(VHC_64_BK2_KS4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VHC_64_BK2_KS4___024root___eval_stl(VHC_64_BK2_KS4___024root* vlSelf);

VL_ATTR_COLD void VHC_64_BK2_KS4___024root___eval_settle(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VHC_64_BK2_KS4___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VHC_64_BK2_KS4___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/research/adder_project/adder_gen/HC_64_BK2_KS4.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VHC_64_BK2_KS4___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK2_KS4___024root___dump_triggers__stl(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VHC_64_BK2_KS4___024root___ico_sequent__TOP__0(VHC_64_BK2_KS4___024root* vlSelf);

VL_ATTR_COLD void VHC_64_BK2_KS4___024root___eval_stl(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VHC_64_BK2_KS4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK2_KS4___024root___dump_triggers__ico(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK2_KS4___024root___dump_triggers__act(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK2_KS4___024root___dump_triggers__nba(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VHC_64_BK2_KS4___024root___ctor_var_reset(VHC_64_BK2_KS4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK2_KS4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK2_KS4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->HC_64_BK2_KS4_top__DOT__sum_w = VL_RAND_RESET_Q(64);
    vlSelf->HC_64_BK2_KS4_top__DOT__cin_r = VL_RAND_RESET_I(1);
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h2dadceac__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h055848fa__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h9eb8eb11__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h12ac3c62__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h1220379e__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h0cafcf59__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h54c9be2e__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_he7d9a11d__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_ha988a9e3__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h51b58c76__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h5996020a__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h51a16d14__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h6600f75e__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h61e10e23__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hba910b0f__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h177172a1__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h5e515a86__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_he1859c1a__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h72837780__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hd3fa7237__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hb740abc5__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h6293a59b__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hba52ce08__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hd0fdd63f__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hb66ac527__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h9418fdc7__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h15e8b2af__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h7e259763__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h79fa199e__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hc4b635b0__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h0c7b4651__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hcdc2ed9d__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h023e990b__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hb4ef687e__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h1415cb2a__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h1fcc151d__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h7f366d3a__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h6f1a410f__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_head7116f__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h7c5fe774__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h93a14d4f__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hecb49a16__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h2f503fc5__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h2079d32a__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hf38bb500__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h8ea7dc66__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_ha4c128de__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hcc409228__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_hfa10be1c__0 = 0;
    vlSelf->HC_64_BK2_KS4_top__DOT__u0__DOT____VdfgTmp_h47b3d7c4__0 = 0;
    vlSelf->__VdfgTmp_h37e33924__0 = 0;
    vlSelf->__VdfgTmp_hece3181c__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
