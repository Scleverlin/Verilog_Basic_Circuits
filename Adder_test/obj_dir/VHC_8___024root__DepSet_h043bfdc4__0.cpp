// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHC_8.h for the primary calling header

#include "verilated.h"

#include "VHC_8___024root.h"

VL_INLINE_OPT void VHC_8___024root___ico_sequent__TOP__0(VHC_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_8___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ HC_8__DOT____VdfgTmp_hedeb8924__0;
    HC_8__DOT____VdfgTmp_hedeb8924__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_h6ac2a968__0;
    HC_8__DOT____VdfgTmp_h6ac2a968__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_hf583e290__0;
    HC_8__DOT____VdfgTmp_hf583e290__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_he4db5a5d__0;
    HC_8__DOT____VdfgTmp_he4db5a5d__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_h298e4177__0;
    HC_8__DOT____VdfgTmp_h298e4177__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_h74194960__0;
    HC_8__DOT____VdfgTmp_h74194960__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_h51a16d14__0;
    HC_8__DOT____VdfgTmp_h51a16d14__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_h6600f75e__0;
    HC_8__DOT____VdfgTmp_h6600f75e__0 = 0;
    CData/*0:0*/ HC_8__DOT____VdfgTmp_h69dd0221__0;
    HC_8__DOT____VdfgTmp_h69dd0221__0 = 0;
    CData/*7:0*/ __VdfgTmp_hecee864b__0;
    __VdfgTmp_hecee864b__0 = 0;
    CData/*7:0*/ __VdfgTmp_h37e6ab0d__0;
    __VdfgTmp_h37e6ab0d__0 = 0;
    // Body
    __VdfgTmp_hecee864b__0 = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
    __VdfgTmp_h37e6ab0d__0 = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    HC_8__DOT____VdfgTmp_h69dd0221__0 = (IData)((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(__VdfgTmp_h37e6ab0d__0))));
    HC_8__DOT____VdfgTmp_h6600f75e__0 = (IData)((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(__VdfgTmp_h37e6ab0d__0))));
    HC_8__DOT____VdfgTmp_h51a16d14__0 = (1U & (((IData)(__VdfgTmp_hecee864b__0) 
                                                >> 4U) 
                                               | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                   >> 4U) 
                                                  & ((IData)(__VdfgTmp_hecee864b__0) 
                                                     >> 3U))));
    HC_8__DOT____VdfgTmp_h74194960__0 = (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(__VdfgTmp_h37e6ab0d__0))));
    HC_8__DOT____VdfgTmp_h298e4177__0 = (1U & (((IData)(__VdfgTmp_hecee864b__0) 
                                                >> 2U) 
                                               | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                   >> 2U) 
                                                  & ((IData)(__VdfgTmp_hecee864b__0) 
                                                     >> 1U))));
    HC_8__DOT____VdfgTmp_he4db5a5d__0 = (1U & ((IData)(__VdfgTmp_hecee864b__0) 
                                               | ((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                  & (IData)(vlSelf->cin))));
    HC_8__DOT____VdfgTmp_h6ac2a968__0 = (((IData)(HC_8__DOT____VdfgTmp_h51a16d14__0) 
                                          | ((IData)(HC_8__DOT____VdfgTmp_h6600f75e__0) 
                                             & (IData)(HC_8__DOT____VdfgTmp_h298e4177__0))) 
                                         | (((IData)(HC_8__DOT____VdfgTmp_h6600f75e__0) 
                                             & (IData)(HC_8__DOT____VdfgTmp_h74194960__0)) 
                                            & (IData)(HC_8__DOT____VdfgTmp_he4db5a5d__0)));
    HC_8__DOT____VdfgTmp_hf583e290__0 = ((IData)(HC_8__DOT____VdfgTmp_h298e4177__0) 
                                         | ((IData)(HC_8__DOT____VdfgTmp_h74194960__0) 
                                            & (IData)(HC_8__DOT____VdfgTmp_he4db5a5d__0)));
    vlSelf->HC_8__DOT__c2n_1 = ((8U & (IData)(vlSelf->HC_8__DOT__c2n_1)) 
                                | ((4U & (((IData)(__VdfgTmp_hecee864b__0) 
                                           >> 3U) | 
                                          (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                            >> 3U) 
                                           & ((IData)(HC_8__DOT____VdfgTmp_h6ac2a968__0) 
                                              << 2U)))) 
                                   | ((2U & (((IData)(__VdfgTmp_hecee864b__0) 
                                              >> 2U) 
                                             | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                 >> 2U) 
                                                & ((IData)(HC_8__DOT____VdfgTmp_hf583e290__0) 
                                                   << 1U)))) 
                                      | (1U & (((IData)(__VdfgTmp_hecee864b__0) 
                                                >> 1U) 
                                               | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                   >> 1U) 
                                                  & (IData)(HC_8__DOT____VdfgTmp_he4db5a5d__0)))))));
    HC_8__DOT____VdfgTmp_hedeb8924__0 = (1U & (((((IData)(__VdfgTmp_hecee864b__0) 
                                                  >> 6U) 
                                                 | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                     >> 6U) 
                                                    & ((IData)(__VdfgTmp_hecee864b__0) 
                                                       >> 5U))) 
                                                | ((IData)(HC_8__DOT____VdfgTmp_h69dd0221__0) 
                                                   & (IData)(HC_8__DOT____VdfgTmp_h51a16d14__0))) 
                                               | (((IData)(HC_8__DOT____VdfgTmp_h69dd0221__0) 
                                                   & (IData)(HC_8__DOT____VdfgTmp_h6600f75e__0)) 
                                                  & (IData)(HC_8__DOT____VdfgTmp_hf583e290__0))));
    vlSelf->cout = (1U & (((IData)(__VdfgTmp_hecee864b__0) 
                           >> 7U) | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                      >> 7U) & (IData)(HC_8__DOT____VdfgTmp_hedeb8924__0))));
    vlSelf->sum = ((((IData)(HC_8__DOT____VdfgTmp_hedeb8924__0) 
                     ^ ((IData)(__VdfgTmp_h37e6ab0d__0) 
                        >> 7U)) << 7U) | ((0x40U & 
                                           ((0xffffffc0U 
                                             & ((IData)(vlSelf->HC_8__DOT__c2n_1) 
                                                << 4U)) 
                                            ^ (0xffffffc0U 
                                               & (IData)(__VdfgTmp_h37e6ab0d__0)))) 
                                          | ((0x20U 
                                              & (((IData)(HC_8__DOT____VdfgTmp_h6ac2a968__0) 
                                                  << 5U) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (IData)(__VdfgTmp_h37e6ab0d__0)))) 
                                             | ((0x10U 
                                                 & ((0xfffffff0U 
                                                     & ((IData)(vlSelf->HC_8__DOT__c2n_1) 
                                                        << 3U)) 
                                                    ^ 
                                                    (0xfffffff0U 
                                                     & (IData)(__VdfgTmp_h37e6ab0d__0)))) 
                                                | ((8U 
                                                    & (((IData)(HC_8__DOT____VdfgTmp_hf583e290__0) 
                                                        << 3U) 
                                                       ^ 
                                                       (0xfffffff8U 
                                                        & (IData)(__VdfgTmp_h37e6ab0d__0)))) 
                                                   | ((4U 
                                                       & (((IData)(vlSelf->HC_8__DOT__c2n_1) 
                                                           << 2U) 
                                                          ^ 
                                                          (0xfffffffcU 
                                                           & (IData)(__VdfgTmp_h37e6ab0d__0)))) 
                                                      | ((2U 
                                                          & (((IData)(HC_8__DOT____VdfgTmp_he4db5a5d__0) 
                                                              << 1U) 
                                                             ^ 
                                                             (0xfffffffeU 
                                                              & (IData)(__VdfgTmp_h37e6ab0d__0)))) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->cin) 
                                                               ^ (IData)(__VdfgTmp_h37e6ab0d__0))))))))));
}

void VHC_8___024root___eval_ico(VHC_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_8___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VHC_8___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VHC_8___024root___eval_act(VHC_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_8___024root___eval_act\n"); );
}

void VHC_8___024root___eval_nba(VHC_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_8___024root___eval_nba\n"); );
}

void VHC_8___024root___eval_triggers__ico(VHC_8___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_8___024root___dump_triggers__ico(VHC_8___024root* vlSelf);
#endif  // VL_DEBUG
void VHC_8___024root___eval_triggers__act(VHC_8___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_8___024root___dump_triggers__act(VHC_8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VHC_8___024root___dump_triggers__nba(VHC_8___024root* vlSelf);
#endif  // VL_DEBUG

void VHC_8___024root___eval(VHC_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_8___024root___eval\n"); );
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
        VHC_8___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VHC_8___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("HC_8.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VHC_8___024root___eval_ico(vlSelf);
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
            VHC_8___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VHC_8___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("HC_8.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VHC_8___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VHC_8___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("HC_8.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VHC_8___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VHC_8___024root___eval_debug_assertions(VHC_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHC_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHC_8___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
