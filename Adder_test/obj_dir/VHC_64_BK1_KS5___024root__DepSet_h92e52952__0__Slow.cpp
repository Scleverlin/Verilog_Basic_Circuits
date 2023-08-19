// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHC_64_BK1_KS5.h for the primary calling header

#include "verilated.h"

#include "VHC_64_BK1_KS5___024root.h"

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_static(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___eval_static\n"); );
}

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_initial(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_final(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___eval_final\n"); );
}

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_triggers__stl(VHC_64_BK1_KS5___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK1_KS5___024root___dump_triggers__stl(VHC_64_BK1_KS5___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_stl(VHC_64_BK1_KS5___024root* vlSelf);

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_settle(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VHC_64_BK1_KS5___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VHC_64_BK1_KS5___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("HC_64_BK1_KS5.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VHC_64_BK1_KS5___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK1_KS5___024root___dump_triggers__stl(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VHC_64_BK1_KS5___024root___ico_sequent__TOP__0(VHC_64_BK1_KS5___024root* vlSelf);

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___eval_stl(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VHC_64_BK1_KS5___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_64_BK1_KS5___024root___dump_triggers__ico(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VHC_64_BK1_KS5___024root___dump_triggers__act(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VHC_64_BK1_KS5___024root___dump_triggers__nba(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VHC_64_BK1_KS5___024root___ctor_var_reset(VHC_64_BK1_KS5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_64_BK1_KS5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_64_BK1_KS5___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->HC_64_BK1_KS5_top__DOT__sum_w = VL_RAND_RESET_Q(64);
    vlSelf->HC_64_BK1_KS5_top__DOT__cin_r = VL_RAND_RESET_I(1);
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h1263dcfd__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h1726c003__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hd513a5a7__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hf81e6556__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hb81cfa28__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_ha27aeaa8__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hb20a062a__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h86540153__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h50422f27__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_he50650f8__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h65765ac3__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hc5dee627__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hbdb1a4f4__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h245820b6__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h6d7305b2__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h20421915__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h1b771e6e__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h1c7aba4c__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_ha98c1f6f__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hba138c97__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_ha956d994__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h81d4ef5d__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h298e4177__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h74194960__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hd714f642__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h2c7fe75a__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hcdc2ed9d__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h023e990b__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h75092490__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h4ce4f244__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_hb4ef687e__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h1415cb2a__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h20737028__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h091f2a6d__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h7f366d3a__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_ha919e1b0__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h6f1a410f__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h77c8b509__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h97088ba3__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_haf737eb5__0 = 0;
    vlSelf->HC_64_BK1_KS5_top__DOT__u0__DOT____VdfgTmp_h6020b20a__0 = 0;
    vlSelf->__VdfgTmp_h37e33924__0 = 0;
    vlSelf->__VdfgTmp_hece3181c__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
