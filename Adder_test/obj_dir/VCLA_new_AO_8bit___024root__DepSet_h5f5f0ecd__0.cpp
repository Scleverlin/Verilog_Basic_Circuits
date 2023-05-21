// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_new_AO_8bit.h for the primary calling header

#include "verilated.h"

#include "VCLA_new_AO_8bit___024root.h"

VL_INLINE_OPT void VCLA_new_AO_8bit___024root___ico_sequent__TOP__0(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g = ((IData)(vlSelf->a) 
                                                & (IData)(vlSelf->b));
    vlSelf->CLA_new_AO_8bit__DOT__p = ((IData)(vlSelf->a) 
                                       ^ (IData)(vlSelf->b));
}

VL_INLINE_OPT void VCLA_new_AO_8bit___024root___ico_comb__TOP__0(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h2b6bd5bc__0;
    // Body
    __Vtemp_h2b6bd5bc__0 = (((IData)((((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                       >> 7U) & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                 >> 6U))) 
                             << 7U) | ((0x40U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                                 & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                    << 1U))) 
                                       | ((0x20U & 
                                           ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                            & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                               << 1U))) 
                                          | ((0x10U 
                                              & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                                 & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                    << 1U))) 
                                             | ((8U 
                                                 & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                                    & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                       << 1U))) 
                                                | ((4U 
                                                    & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                                       & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                          << 1U))) 
                                                   | (((IData)(
                                                               (3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->CLA_new_AO_8bit__DOT__p)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(vlSelf->CLA_new_AO_8bit__DOT__p)))))))));
    vlSelf->CLA_new_AO_8bit__DOT__pp = __Vtemp_h2b6bd5bc__0;
}

VL_INLINE_OPT void VCLA_new_AO_8bit___024root___ico_comb__TOP__1(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___ico_comb__TOP__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hb05d6bc1__0;
    // Body
    __Vtemp_hb05d6bc1__0 = ((0x80U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                      | ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                         & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                            << 1U)))) 
                            | ((0x40U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                         | ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                            & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                               << 1U)))) 
                               | ((0x20U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                            | ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                               & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                  << 1U)))) 
                                  | ((0x10U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                               | ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                                  & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                     << 1U)))) 
                                     | ((8U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                               | ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                                  & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                     << 1U)))) 
                                        | ((4U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                                  | ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                                                     & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                        << 1U)))) 
                                           | ((2U & 
                                               ((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                                | (((IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g) 
                                                    << 1U) 
                                                   & (IData)(vlSelf->CLA_new_AO_8bit__DOT__p)))) 
                                              | (1U 
                                                 & (IData)(vlSelf->CLA_new_AO_8bit__DOT__u0__DOT__g)))))))));
    vlSelf->CLA_new_AO_8bit__DOT__gnpg = __Vtemp_hb05d6bc1__0;
}

VL_INLINE_OPT void VCLA_new_AO_8bit___024root___ico_comb__TOP__2(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->cout = (1U & (((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                           >> 7U) | (((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                      >> 7U) & (IData)(vlSelf->cin))));
    vlSelf->sum = ((0xfeU & ((0xfffffffeU & (IData)(vlSelf->CLA_new_AO_8bit__DOT__p)) 
                             ^ ((0x80U & (((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                           << 1U) | 
                                          (((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                            << 1U) 
                                           & ((IData)(vlSelf->cin) 
                                              << 7U)))) 
                                | ((0x40U & (((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                              << 1U) 
                                             | (((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->cin) 
                                                   << 6U)))) 
                                   | ((0x20U & (((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                 << 1U) 
                                                | (((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->cin) 
                                                      << 5U)))) 
                                      | ((0x10U & (
                                                   ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                       << 1U) 
                                                      & ((IData)(vlSelf->cin) 
                                                         << 4U)))) 
                                         | ((8U & (
                                                   ((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                       << 1U) 
                                                      & ((IData)(vlSelf->cin) 
                                                         << 3U)))) 
                                            | (6U & 
                                               (((IData)(vlSelf->CLA_new_AO_8bit__DOT__gnpg) 
                                                 | ((IData)(vlSelf->CLA_new_AO_8bit__DOT__pp) 
                                                    & (- (IData)((IData)(vlSelf->cin))))) 
                                                << 1U))))))))) 
                   | (1U & ((IData)(vlSelf->CLA_new_AO_8bit__DOT__p) 
                            ^ (IData)(vlSelf->cin))));
}

void VCLA_new_AO_8bit___024root___eval_ico(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCLA_new_AO_8bit___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VCLA_new_AO_8bit___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U))) {
        VCLA_new_AO_8bit___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
         | vlSelf->__VicoTriggered.at(2U))) {
        VCLA_new_AO_8bit___024root___ico_comb__TOP__2(vlSelf);
    }
}

void VCLA_new_AO_8bit___024root___eval_act(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VCLA_new_AO_8bit___024root___ico_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VCLA_new_AO_8bit___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U))) {
        VCLA_new_AO_8bit___024root___ico_comb__TOP__2(vlSelf);
    }
}

void VCLA_new_AO_8bit___024root___eval_nba(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___eval_nba\n"); );
}

void VCLA_new_AO_8bit___024root___eval_triggers__ico(VCLA_new_AO_8bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_new_AO_8bit___024root___dump_triggers__ico(VCLA_new_AO_8bit___024root* vlSelf);
#endif  // VL_DEBUG
void VCLA_new_AO_8bit___024root___eval_triggers__act(VCLA_new_AO_8bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_new_AO_8bit___024root___dump_triggers__act(VCLA_new_AO_8bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_new_AO_8bit___024root___dump_triggers__nba(VCLA_new_AO_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_new_AO_8bit___024root___eval(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCLA_new_AO_8bit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCLA_new_AO_8bit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("CLA_new_AO_8bit.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCLA_new_AO_8bit___024root___eval_ico(vlSelf);
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
            VCLA_new_AO_8bit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCLA_new_AO_8bit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("CLA_new_AO_8bit.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCLA_new_AO_8bit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCLA_new_AO_8bit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("CLA_new_AO_8bit.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCLA_new_AO_8bit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCLA_new_AO_8bit___024root___eval_debug_assertions(VCLA_new_AO_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_new_AO_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_new_AO_8bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
