// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_HAN_PG_16.h for the primary calling header

#include "verilated.h"

#include "VCLA_HAN_PG_16___024root.h"

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_static(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_initial(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__pp 
        = vlSelf->CLA_HAN_PG_16__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__gnpg 
        = vlSelf->CLA_HAN_PG_16__DOT__gnpg;
}

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_final(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_triggers__stl(VCLA_HAN_PG_16___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_PG_16___024root___dump_triggers__stl(VCLA_HAN_PG_16___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_stl(VCLA_HAN_PG_16___024root* vlSelf);

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_settle(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCLA_HAN_PG_16___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCLA_HAN_PG_16___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("CLA_HAN_PG_16.v", 110, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCLA_HAN_PG_16___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_PG_16___024root___dump_triggers__stl(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] CLA_HAN_PG_16.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] CLA_HAN_PG_16.gnpg)\n");
    }
}
#endif  // VL_DEBUG

void VCLA_HAN_PG_16___024root___ico_sequent__TOP__0(VCLA_HAN_PG_16___024root* vlSelf);
void VCLA_HAN_PG_16___024root___ico_comb__TOP__0(VCLA_HAN_PG_16___024root* vlSelf);
void VCLA_HAN_PG_16___024root___ico_comb__TOP__1(VCLA_HAN_PG_16___024root* vlSelf);
void VCLA_HAN_PG_16___024root___ico_comb__TOP__2(VCLA_HAN_PG_16___024root* vlSelf);

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_stl(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCLA_HAN_PG_16___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        VCLA_HAN_PG_16___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        VCLA_HAN_PG_16___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
         | vlSelf->__VstlTriggered.at(2U))) {
        VCLA_HAN_PG_16___024root___ico_comb__TOP__2(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_PG_16___024root___dump_triggers__ico(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] CLA_HAN_PG_16.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] CLA_HAN_PG_16.gnpg)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_PG_16___024root___dump_triggers__act(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] CLA_HAN_PG_16.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] CLA_HAN_PG_16.gnpg)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_PG_16___024root___dump_triggers__nba(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] CLA_HAN_PG_16.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] CLA_HAN_PG_16.gnpg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___ctor_var_reset(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(16);
    vlSelf->b = VL_RAND_RESET_I(16);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(16);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_PG_16__DOT__p = VL_RAND_RESET_I(16);
    vlSelf->CLA_HAN_PG_16__DOT__gnpg = VL_RAND_RESET_I(16);
    vlSelf->CLA_HAN_PG_16__DOT__pp = VL_RAND_RESET_I(16);
    vlSelf->CLA_HAN_PG_16__DOT__u0__DOT__g = VL_RAND_RESET_I(16);
    vlSelf->CLA_HAN_PG_16__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_PG_16__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_PG_16__DOT__u0__DOT__gnpg_level4 = VL_RAND_RESET_I(4);
    vlSelf->CLA_HAN_PG_16__DOT__u0__DOT__pp_level4 = VL_RAND_RESET_I(4);
    vlSelf->CLA_HAN_PG_16__DOT__u0__DOT____VdfgTmp_h0bb00120__0 = 0;
    vlSelf->CLA_HAN_PG_16__DOT__u0__DOT____VdfgTmp_hb348ffad__0 = 0;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__pp = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__gnpg = VL_RAND_RESET_I(16);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
}
