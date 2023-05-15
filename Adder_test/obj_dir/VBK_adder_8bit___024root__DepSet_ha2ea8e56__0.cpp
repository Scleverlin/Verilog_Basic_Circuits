// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK_adder_8bit.h for the primary calling header

#include "verilated.h"

#include "VBK_adder_8bit___024root.h"

VL_INLINE_OPT void VBK_adder_8bit___024root___ico_sequent__TOP__0(VBK_adder_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_adder_8bit___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ BK_adder_8bit__DOT__complex_gnpg;
    BK_adder_8bit__DOT__complex_gnpg = 0;
    CData/*0:0*/ BK_adder_8bit__DOT__tmp3;
    BK_adder_8bit__DOT__tmp3 = 0;
    CData/*0:0*/ BK_adder_8bit__DOT____VdfgTmp_hf583e290__0;
    BK_adder_8bit__DOT____VdfgTmp_hf583e290__0 = 0;
    CData/*0:0*/ BK_adder_8bit__DOT____VdfgTmp_he4db5a5d__0;
    BK_adder_8bit__DOT____VdfgTmp_he4db5a5d__0 = 0;
    CData/*0:0*/ BK_adder_8bit__DOT____VdfgTmp_h69dd0221__0;
    BK_adder_8bit__DOT____VdfgTmp_h69dd0221__0 = 0;
    CData/*0:0*/ BK_adder_8bit__DOT____VdfgTmp_h6600f75e__0;
    BK_adder_8bit__DOT____VdfgTmp_h6600f75e__0 = 0;
    CData/*0:0*/ BK_adder_8bit__DOT____VdfgTmp_h51a16d14__0;
    BK_adder_8bit__DOT____VdfgTmp_h51a16d14__0 = 0;
    CData/*7:0*/ __VdfgTmp_hecee864b__0;
    __VdfgTmp_hecee864b__0 = 0;
    CData/*7:0*/ __VdfgTmp_h37e6ab0d__0;
    __VdfgTmp_h37e6ab0d__0 = 0;
    // Body
    __VdfgTmp_hecee864b__0 = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
    __VdfgTmp_h37e6ab0d__0 = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    BK_adder_8bit__DOT____VdfgTmp_h69dd0221__0 = (IData)(
                                                         (0x60U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(__VdfgTmp_h37e6ab0d__0))));
    BK_adder_8bit__DOT____VdfgTmp_h6600f75e__0 = (IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(__VdfgTmp_h37e6ab0d__0))));
    BK_adder_8bit__DOT____VdfgTmp_h51a16d14__0 = (1U 
                                                  & (((IData)(__VdfgTmp_hecee864b__0) 
                                                      >> 4U) 
                                                     | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                         >> 4U) 
                                                        & ((IData)(__VdfgTmp_hecee864b__0) 
                                                           >> 3U))));
    BK_adder_8bit__DOT____VdfgTmp_he4db5a5d__0 = (1U 
                                                  & ((IData)(__VdfgTmp_hecee864b__0) 
                                                     | ((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                        & (IData)(vlSelf->cin))));
    BK_adder_8bit__DOT____VdfgTmp_hf583e290__0 = (1U 
                                                  & ((((IData)(__VdfgTmp_hecee864b__0) 
                                                       >> 2U) 
                                                      | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                          >> 2U) 
                                                         & ((IData)(__VdfgTmp_hecee864b__0) 
                                                            >> 1U))) 
                                                     | ((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(__VdfgTmp_h37e6ab0d__0)))) 
                                                        & (IData)(BK_adder_8bit__DOT____VdfgTmp_he4db5a5d__0))));
    BK_adder_8bit__DOT__tmp3 = ((IData)(BK_adder_8bit__DOT____VdfgTmp_h51a16d14__0) 
                                | ((IData)(BK_adder_8bit__DOT____VdfgTmp_h6600f75e__0) 
                                   & (IData)(BK_adder_8bit__DOT____VdfgTmp_hf583e290__0)));
    BK_adder_8bit__DOT__complex_gnpg = (1U & (((((IData)(__VdfgTmp_hecee864b__0) 
                                                 >> 6U) 
                                                | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                    >> 6U) 
                                                   & ((IData)(__VdfgTmp_hecee864b__0) 
                                                      >> 5U))) 
                                               | ((IData)(BK_adder_8bit__DOT____VdfgTmp_h69dd0221__0) 
                                                  & (IData)(BK_adder_8bit__DOT____VdfgTmp_h51a16d14__0))) 
                                              | ((IData)(BK_adder_8bit__DOT____VdfgTmp_hf583e290__0) 
                                                 & ((IData)(BK_adder_8bit__DOT____VdfgTmp_h69dd0221__0) 
                                                    & (IData)(BK_adder_8bit__DOT____VdfgTmp_h6600f75e__0)))));
    vlSelf->cout = (1U & (((IData)(__VdfgTmp_hecee864b__0) 
                           >> 7U) | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                      >> 7U) & (IData)(BK_adder_8bit__DOT__complex_gnpg))));
    vlSelf->sum = (((IData)((((IData)(__VdfgTmp_h37e6ab0d__0) 
                              >> 7U) ^ (IData)(BK_adder_8bit__DOT__complex_gnpg))) 
                    << 7U) | ((0x40U & ((0xffffffc0U 
                                         & (IData)(__VdfgTmp_h37e6ab0d__0)) 
                                        ^ (0xffffffc0U 
                                           & (((IData)(__VdfgTmp_hecee864b__0) 
                                               << 1U) 
                                              | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                  << 1U) 
                                                 & ((IData)(BK_adder_8bit__DOT__tmp3) 
                                                    << 6U)))))) 
                              | ((0x20U & ((0xffffffe0U 
                                            & (IData)(__VdfgTmp_h37e6ab0d__0)) 
                                           ^ ((IData)(BK_adder_8bit__DOT__tmp3) 
                                              << 5U))) 
                                 | ((0x10U & ((0xfffffff0U 
                                               & (IData)(__VdfgTmp_h37e6ab0d__0)) 
                                              ^ (0xfffffff0U 
                                                 & (((IData)(__VdfgTmp_hecee864b__0) 
                                                     << 1U) 
                                                    | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                        << 1U) 
                                                       & ((IData)(BK_adder_8bit__DOT____VdfgTmp_hf583e290__0) 
                                                          << 4U)))))) 
                                    | ((8U & ((0xfffffff8U 
                                               & (IData)(__VdfgTmp_h37e6ab0d__0)) 
                                              ^ ((IData)(BK_adder_8bit__DOT____VdfgTmp_hf583e290__0) 
                                                 << 3U))) 
                                       | ((4U & ((0xfffffffcU 
                                                  & (IData)(__VdfgTmp_h37e6ab0d__0)) 
                                                 ^ 
                                                 (0xfffffffcU 
                                                  & (((IData)(__VdfgTmp_hecee864b__0) 
                                                      << 1U) 
                                                     | (((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                         << 1U) 
                                                        & ((IData)(BK_adder_8bit__DOT____VdfgTmp_he4db5a5d__0) 
                                                           << 2U)))))) 
                                          | ((2U & 
                                              ((0xfffffffeU 
                                                & (IData)(__VdfgTmp_h37e6ab0d__0)) 
                                               ^ ((IData)(BK_adder_8bit__DOT____VdfgTmp_he4db5a5d__0) 
                                                  << 1U))) 
                                             | (1U 
                                                & ((IData)(__VdfgTmp_h37e6ab0d__0) 
                                                   ^ (IData)(vlSelf->cin))))))))));
}

void VBK_adder_8bit___024root___eval_ico(VBK_adder_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_adder_8bit___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VBK_adder_8bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VBK_adder_8bit___024root___eval_act(VBK_adder_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_adder_8bit___024root___eval_act\n"); );
}

void VBK_adder_8bit___024root___eval_nba(VBK_adder_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_adder_8bit___024root___eval_nba\n"); );
}

void VBK_adder_8bit___024root___eval_triggers__ico(VBK_adder_8bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_adder_8bit___024root___dump_triggers__ico(VBK_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG
void VBK_adder_8bit___024root___eval_triggers__act(VBK_adder_8bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_adder_8bit___024root___dump_triggers__act(VBK_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_adder_8bit___024root___dump_triggers__nba(VBK_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void VBK_adder_8bit___024root___eval(VBK_adder_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_adder_8bit___024root___eval\n"); );
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
        VBK_adder_8bit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VBK_adder_8bit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("BK_adder_8bit.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VBK_adder_8bit___024root___eval_ico(vlSelf);
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
            VBK_adder_8bit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VBK_adder_8bit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("BK_adder_8bit.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VBK_adder_8bit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VBK_adder_8bit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("BK_adder_8bit.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VBK_adder_8bit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VBK_adder_8bit___024root___eval_debug_assertions(VBK_adder_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_adder_8bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
