// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_32.h for the primary calling header

#include "verilated.h"

#include "Vmultiplier_32___024root.h"

VL_INLINE_OPT void Vmultiplier_32___024root___ico_sequent__TOP__0(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_0____pinNumber1 
        = ((1U & vlSelf->a) ? (QData)((IData)(vlSelf->b))
            : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_0____pinNumber2 
        = ((2U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                               << 1U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_1____pinNumber1 
        = ((4U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                               << 2U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_1____pinNumber2 
        = ((8U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                               << 3U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_2____pinNumber1 
        = ((0x10U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                  << 4U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_2____pinNumber2 
        = ((0x20U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                  << 5U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_3____pinNumber1 
        = ((0x40U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                  << 6U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_3____pinNumber2 
        = ((0x80U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                  << 7U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_4____pinNumber1 
        = ((0x100U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                   << 8U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_4____pinNumber2 
        = ((0x200U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                   << 9U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_5____pinNumber1 
        = ((0x400U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                   << 0xaU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_5____pinNumber2 
        = ((0x800U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                   << 0xbU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_6____pinNumber1 
        = ((0x1000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                    << 0xcU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_6____pinNumber2 
        = ((0x2000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                    << 0xdU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_7____pinNumber1 
        = ((0x4000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                    << 0xeU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_7____pinNumber2 
        = ((0x8000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                    << 0xfU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_8____pinNumber1 
        = ((0x10000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                     << 0x10U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_8____pinNumber2 
        = ((0x20000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                     << 0x11U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_9____pinNumber1 
        = ((0x40000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                     << 0x12U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_9____pinNumber2 
        = ((0x80000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                     << 0x13U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_10____pinNumber1 
        = ((0x100000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                      << 0x14U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_10____pinNumber2 
        = ((0x200000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                      << 0x15U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_11____pinNumber1 
        = ((0x400000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                      << 0x16U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_11____pinNumber2 
        = ((0x800000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                      << 0x17U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_12____pinNumber1 
        = ((0x1000000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                       << 0x18U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_12____pinNumber2 
        = ((0x2000000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                       << 0x19U) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_13____pinNumber1 
        = ((0x4000000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                       << 0x1aU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_13____pinNumber2 
        = ((0x8000000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                       << 0x1bU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_14____pinNumber1 
        = ((0x10000000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                        << 0x1cU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_14____pinNumber2 
        = ((0x20000000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                        << 0x1dU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_15____pinNumber1 
        = ((0x40000000U & vlSelf->a) ? ((QData)((IData)(vlSelf->b)) 
                                        << 0x1eU) : 0ULL);
    vlSelf->multiplier_32__DOT____Vcellinp__hc_64_15____pinNumber2 
        = ((vlSelf->a >> 0x1fU) ? ((QData)((IData)(vlSelf->b)) 
                                   << 0x1fU) : 0ULL);
}

void Vmultiplier_32___024root___eval_act(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_act\n"); );
}

void Vmultiplier_32___024root___eval_nba(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_nba\n"); );
}

void Vmultiplier_32___024root___eval_triggers__ico(Vmultiplier_32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__ico(Vmultiplier_32___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultiplier_32___024root___eval_ico(Vmultiplier_32___024root* vlSelf);
void Vmultiplier_32___024root___eval_triggers__act(Vmultiplier_32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__act(Vmultiplier_32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__nba(Vmultiplier_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier_32___024root___eval(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmultiplier_32___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier_32___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("multiplier_32.v", 7, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmultiplier_32___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmultiplier_32___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmultiplier_32___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("multiplier_32.v", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmultiplier_32___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier_32___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("multiplier_32.v", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmultiplier_32___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmultiplier_32___024root___eval_debug_assertions(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
