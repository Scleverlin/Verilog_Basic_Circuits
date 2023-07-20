// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_32.h for the primary calling header

#include "verilated.h"

#include "Vmultiplier_32___024root.h"

VL_ATTR_COLD void Vmultiplier_32___024root___eval_static(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmultiplier_32___024root___eval_initial(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vmultiplier_32___024root___eval_final(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmultiplier_32___024root___eval_triggers__stl(Vmultiplier_32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__stl(Vmultiplier_32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___eval_stl(Vmultiplier_32___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier_32___024root___eval_settle(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmultiplier_32___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier_32___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("multiplier_32.v", 7, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmultiplier_32___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__stl(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__ico(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__act(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__nba(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmultiplier_32___024root___ctor_var_reset(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->out = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_0____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_0____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_1____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_1____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_2____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_2____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_3____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_3____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_4____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_4____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_5____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_5____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_6____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_6____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_7____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_7____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_8____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_8____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_9____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_9____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_10____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_10____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_11____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_11____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_12____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_12____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_13____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_13____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_14____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_14____pinNumber1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_15____pinNumber2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_15____pinNumber1 = VL_RAND_RESET_Q(64);
}
