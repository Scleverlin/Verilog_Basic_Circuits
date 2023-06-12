// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK_64.h for the primary calling header

#include "verilated.h"

#include "VBK_64___024root.h"

VL_INLINE_OPT void VBK_64___024root___ico_sequent__TOP__0(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->B)));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 1U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 1U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 2U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 2U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 3U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 3U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 4U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 4U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 5U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 5U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 6U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 6U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 7U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 7U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__8__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 8U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 8U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__9__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 9U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 9U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__10__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0xaU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xaU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__11__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0xbU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xbU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__12__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0xcU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xcU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__13__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0xdU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xdU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__14__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0xeU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xeU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__15__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0xfU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xfU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__16__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x10U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x10U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__17__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x11U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x11U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__18__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x12U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x12U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__19__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x13U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x13U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__20__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x14U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x14U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__21__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x15U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x15U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__22__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x16U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x16U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__23__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x17U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x17U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__24__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x18U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x18U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__25__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x19U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x19U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__26__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x1aU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1aU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__27__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x1bU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1bU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__28__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x1cU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1cU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__29__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x1dU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1dU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__30__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x1eU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__31__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x1fU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1fU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__32__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x20U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x20U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__33__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x21U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x21U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__34__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x22U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x22U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__35__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x23U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x23U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__36__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x24U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x24U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__37__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x25U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x25U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__38__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x26U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x26U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__39__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x27U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x27U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__40__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x28U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x28U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__41__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x29U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x29U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__42__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x2aU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2aU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__43__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x2bU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2bU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__44__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x2cU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2cU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__45__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x2dU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2dU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__46__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x2eU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2eU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__47__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x2fU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2fU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__48__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x30U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x30U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__49__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x31U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x31U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__50__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x32U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x32U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__51__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x33U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x33U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__52__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x34U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x34U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__53__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x35U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x35U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__54__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x36U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x36U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__55__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x37U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x37U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__56__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x38U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x38U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__57__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x39U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x39U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__58__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x3aU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3aU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__59__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x3bU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3bU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__60__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x3cU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3cU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__61__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x3dU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3dU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__62__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x3eU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3eU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__63__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (IData)(((vlSelf->A ^ vlSelf->B) >> 0x3fU));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellinp__recursive_case__DOT__recursion_lsbh__q 
        = (((QData)((IData)(((2U & (((IData)((vlSelf->A 
                                              >> 0x1fU)) 
                                     & (IData)((vlSelf->B 
                                                >> 0x1fU))) 
                                    << 1U)) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__31__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
            << 0x3eU) | (((QData)((IData)(((2U & (((IData)(
                                                           (vlSelf->A 
                                                            >> 0x1eU)) 
                                                   & (IData)(
                                                             (vlSelf->B 
                                                              >> 0x1eU))) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__30__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                          << 0x3cU) | (((QData)((IData)(
                                                        ((2U 
                                                          & (((IData)(
                                                                      (vlSelf->A 
                                                                       >> 0x1dU)) 
                                                              & (IData)(
                                                                        (vlSelf->B 
                                                                         >> 0x1dU))) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__29__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(
                                                         ((2U 
                                                           & (((IData)(
                                                                       (vlSelf->A 
                                                                        >> 0x1cU)) 
                                                               & (IData)(
                                                                         (vlSelf->B 
                                                                          >> 0x1cU))) 
                                                              << 1U)) 
                                                          | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__28__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((2U 
                                                              & (((IData)(
                                                                          (vlSelf->A 
                                                                           >> 0x1bU)) 
                                                                  & (IData)(
                                                                            (vlSelf->B 
                                                                             >> 0x1bU))) 
                                                                 << 1U)) 
                                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__27__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               ((2U 
                                                                 & (((IData)(
                                                                             (vlSelf->A 
                                                                              >> 0x1aU)) 
                                                                     & (IData)(
                                                                               (vlSelf->B 
                                                                                >> 0x1aU))) 
                                                                    << 1U)) 
                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__26__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  ((2U 
                                                                    & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x19U)) 
                                                                        & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x19U))) 
                                                                       << 1U)) 
                                                                   | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__25__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     ((2U 
                                                                       & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x18U)) 
                                                                           & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x18U))) 
                                                                          << 1U)) 
                                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__24__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        ((2U 
                                                                          & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x17U)) 
                                                                              & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x17U))) 
                                                                             << 1U)) 
                                                                         | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__23__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                        << 0x2eU) 
                                                       | (((QData)((IData)(
                                                                           ((2U 
                                                                             & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x16U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x16U))) 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__22__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x15U))) 
                                                                                << 1U)) 
                                                                               | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__21__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x14U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__20__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x13U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x13U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__19__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x12U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x12U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__18__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                       << 0x24U) 
                                                                      | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x11U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x11U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__17__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                          << 0x22U) 
                                                                         | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x10U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x10U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__16__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                (((((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0xfU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0xfU))) 
                                                                                << 0x1fU) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__15__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1eU)) 
                                                                                | (((0x20000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0xeU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0xeU))) 
                                                                                << 0x1dU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__14__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1cU)) 
                                                                                | (((0x8000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0xdU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0xdU))) 
                                                                                << 0x1bU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__13__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1aU)) 
                                                                                | (((0x2000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0xcU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0xcU))) 
                                                                                << 0x19U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__12__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x18U)) 
                                                                                | (((0x800000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0xbU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0xbU))) 
                                                                                << 0x17U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__11__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x16U)) 
                                                                                | (((0x200000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0xaU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0xaU))) 
                                                                                << 0x15U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__10__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x14U)) 
                                                                                | (((0x80000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 9U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 9U))) 
                                                                                << 0x13U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__9__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x12U)) 
                                                                                | (((0x20000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 8U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 8U))) 
                                                                                << 0x11U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__8__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x10U)) 
                                                                                | (((0x8000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 7U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 7U))) 
                                                                                << 0xfU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xeU)) 
                                                                                | (((0x2000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 6U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 6U))) 
                                                                                << 0xdU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xcU)) 
                                                                                | (((0x800U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 5U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 5U))) 
                                                                                << 0xbU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xaU)) 
                                                                                | (((0x200U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 4U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 4U))) 
                                                                                << 9U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 8U)) 
                                                                                | (((0x80U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 3U))) 
                                                                                << 7U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 6U)) 
                                                                                | (((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 2U))) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 4U)) 
                                                                                | (((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 1U))) 
                                                                                << 3U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->A) 
                                                                                & (IData)(vlSelf->B)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))))))))))))))))))))))))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellinp__recursive_case__DOT__recursion_msbh__q 
        = (((QData)((IData)((((IData)(((vlSelf->A & vlSelf->B) 
                                       >> 0x3fU)) << 1U) 
                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__63__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
            << 0x3eU) | (((QData)((IData)(((2U & (((IData)(
                                                           (vlSelf->A 
                                                            >> 0x3eU)) 
                                                   & (IData)(
                                                             (vlSelf->B 
                                                              >> 0x3eU))) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__62__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                          << 0x3cU) | (((QData)((IData)(
                                                        ((2U 
                                                          & (((IData)(
                                                                      (vlSelf->A 
                                                                       >> 0x3dU)) 
                                                              & (IData)(
                                                                        (vlSelf->B 
                                                                         >> 0x3dU))) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__61__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(
                                                         ((2U 
                                                           & (((IData)(
                                                                       (vlSelf->A 
                                                                        >> 0x3cU)) 
                                                               & (IData)(
                                                                         (vlSelf->B 
                                                                          >> 0x3cU))) 
                                                              << 1U)) 
                                                          | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__60__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((2U 
                                                              & (((IData)(
                                                                          (vlSelf->A 
                                                                           >> 0x3bU)) 
                                                                  & (IData)(
                                                                            (vlSelf->B 
                                                                             >> 0x3bU))) 
                                                                 << 1U)) 
                                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__59__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               ((2U 
                                                                 & (((IData)(
                                                                             (vlSelf->A 
                                                                              >> 0x3aU)) 
                                                                     & (IData)(
                                                                               (vlSelf->B 
                                                                                >> 0x3aU))) 
                                                                    << 1U)) 
                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__58__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  ((2U 
                                                                    & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x39U)) 
                                                                        & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x39U))) 
                                                                       << 1U)) 
                                                                   | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__57__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     ((2U 
                                                                       & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x38U)) 
                                                                           & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x38U))) 
                                                                          << 1U)) 
                                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__56__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        ((2U 
                                                                          & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x37U)) 
                                                                              & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x37U))) 
                                                                             << 1U)) 
                                                                         | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__55__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                        << 0x2eU) 
                                                       | (((QData)((IData)(
                                                                           ((2U 
                                                                             & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x36U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x36U))) 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__54__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x35U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x35U))) 
                                                                                << 1U)) 
                                                                               | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__53__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x34U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x34U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__52__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x33U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x33U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__51__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x32U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x32U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__50__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                       << 0x24U) 
                                                                      | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x31U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x31U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__49__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                          << 0x22U) 
                                                                         | (((QData)((IData)(
                                                                                ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x30U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x30U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__48__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                (((((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x2fU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x2fU))) 
                                                                                << 0x1fU) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__47__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1eU)) 
                                                                                | (((0x20000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x2eU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x2eU))) 
                                                                                << 0x1dU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__46__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1cU)) 
                                                                                | (((0x8000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x2dU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x2dU))) 
                                                                                << 0x1bU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__45__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1aU)) 
                                                                                | (((0x2000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x2cU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x2cU))) 
                                                                                << 0x19U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__44__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x18U)) 
                                                                                | (((0x800000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x2bU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x2bU))) 
                                                                                << 0x17U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__43__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x16U)) 
                                                                                | (((0x200000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x2aU)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x2aU))) 
                                                                                << 0x15U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__42__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x14U)) 
                                                                                | (((0x80000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x29U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x29U))) 
                                                                                << 0x13U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__41__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x12U)) 
                                                                                | (((0x20000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x28U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x28U))) 
                                                                                << 0x11U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__40__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x10U)) 
                                                                                | (((0x8000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x27U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x27U))) 
                                                                                << 0xfU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__39__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xeU)) 
                                                                                | (((0x2000U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x26U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x26U))) 
                                                                                << 0xdU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__38__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xcU)) 
                                                                                | (((0x800U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x25U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x25U))) 
                                                                                << 0xbU)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__37__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xaU)) 
                                                                                | (((0x200U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x24U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x24U))) 
                                                                                << 9U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__36__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 8U)) 
                                                                                | (((0x80U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x23U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x23U))) 
                                                                                << 7U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__35__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 6U)) 
                                                                                | (((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x22U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x22U))) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__34__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 4U)) 
                                                                                | (((8U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x21U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x21U))) 
                                                                                << 3U)) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__33__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelf->A 
                                                                                >> 0x20U)) 
                                                                                & (IData)(
                                                                                (vlSelf->B 
                                                                                >> 0x20U))) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__32__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VBK_64___024root___act_sequent__TOP__0(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__61__KET____DOT__f__r 
        = ((2U & (((IData)((0x4800000U == (0x4800000U 
                                           & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]))) 
                   << 1U) | (0x3eU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                                      >> 0x1aU)))) 
           | (IData)((0x4400000U == (0x4400000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__57__KET____DOT__f__r 
        = ((2U & (((IData)((0x48000U == (0x48000U & 
                                         vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]))) 
                   << 1U) | (0x3ffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                                        >> 0x12U)))) 
           | (IData)((0x44000U == (0x44000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__53__KET____DOT__f__r 
        = ((2U & (((IData)((0x480U == (0x480U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]))) 
                   << 1U) | (0x3ffffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                                          >> 0xaU)))) 
           | (IData)((0x440U == (0x440U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__49__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                          >> 1U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                    >> 0x1eU))) | (0x3ffffffeU 
                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                                                      >> 2U)))) 
           | (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                     >> 2U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                               >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__45__KET____DOT__f__r 
        = ((2U & (((IData)((0x4800000U == (0x4800000U 
                                           & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]))) 
                   << 1U) | (0x3eU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                      >> 0x1aU)))) 
           | (IData)((0x4400000U == (0x4400000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__41__KET____DOT__f__r 
        = ((2U & (((IData)((0x48000U == (0x48000U & 
                                         vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]))) 
                   << 1U) | (0x3ffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                        >> 0x12U)))) 
           | (IData)((0x44000U == (0x44000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__37__KET____DOT__f__r 
        = ((2U & (((IData)((0x480U == (0x480U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]))) 
                   << 1U) | (0x3ffffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                          >> 0xaU)))) 
           | (IData)((0x440U == (0x440U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__33__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                          >> 1U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                    >> 0x1eU))) | (0x3ffffffeU 
                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                                      >> 2U)))) 
           | (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                     >> 2U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                               >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__29__KET____DOT__f__r 
        = ((2U & (((IData)((0x4800000U == (0x4800000U 
                                           & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]))) 
                   << 1U) | (0x3eU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                      >> 0x1aU)))) 
           | (IData)((0x4400000U == (0x4400000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__25__KET____DOT__f__r 
        = ((2U & (((IData)((0x48000U == (0x48000U & 
                                         vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]))) 
                   << 1U) | (0x3ffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                        >> 0x12U)))) 
           | (IData)((0x44000U == (0x44000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__21__KET____DOT__f__r 
        = ((2U & (((IData)((0x480U == (0x480U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]))) 
                   << 1U) | (0x3ffffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                          >> 0xaU)))) 
           | (IData)((0x440U == (0x440U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__17__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                          >> 1U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                                    >> 0x1eU))) | (0x3ffffffeU 
                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                                      >> 2U)))) 
           | (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                     >> 2U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                               >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__13__KET____DOT__f__r 
        = ((2U & (((IData)((0x4800000U == (0x4800000U 
                                           & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]))) 
                   << 1U) | (0x3eU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                                      >> 0x1aU)))) 
           | (IData)((0x4400000U == (0x4400000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__9__KET____DOT__f__r 
        = ((2U & (((IData)((0x48000U == (0x48000U & 
                                         vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]))) 
                   << 1U) | (0x3ffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                                        >> 0x12U)))) 
           | (IData)((0x44000U == (0x44000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__5__KET____DOT__f__r 
        = ((2U & (((IData)((0x480U == (0x480U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]))) 
                   << 1U) | (0x3ffffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                                          >> 0xaU)))) 
           | (IData)((0x440U == (0x440U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__59__KET____DOT__f__r 
        = ((2U & (((IData)((0x408000U == (0x408000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU]))) 
                   << 1U) | (0x3feU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
                                       >> 0x16U)))) 
           | (IData)((0x404000U == (0x404000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__51__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
                          >> 5U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                                    >> 0x1eU))) | (0x3fffffeU 
                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
                                                      >> 6U)))) 
           | (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
                     >> 6U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                               >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__43__KET____DOT__f__r 
        = ((2U & (((IData)((0x408000U == (0x408000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU]))) 
                   << 1U) | (0x3feU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                                       >> 0x16U)))) 
           | (IData)((0x404000U == (0x404000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__35__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                          >> 5U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                                    >> 0x1eU))) | (0x3fffffeU 
                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                                                      >> 6U)))) 
           | (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                     >> 6U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                               >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__27__KET____DOT__f__r 
        = ((2U & (((IData)((0x408000U == (0x408000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U]))) 
                   << 1U) | (0x3feU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                                       >> 0x16U)))) 
           | (IData)((0x404000U == (0x404000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__19__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                          >> 5U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
                                    >> 0x1eU))) | (0x3fffffeU 
                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                                                      >> 6U)))) 
           | (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                     >> 6U) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
                               >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__11__KET____DOT__f__r 
        = ((2U & (((IData)((0x408000U == (0x408000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U]))) 
                   << 1U) | (0x3feU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
                                       >> 0x16U)))) 
           | (IData)((0x404000U == (0x404000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U]))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__55__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                          >> 0xdU) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                      >> 0x1eU))) | 
                  (0x3fffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                               >> 0xeU)))) | (1U & 
                                              ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                >> 0xeU) 
                                               & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                  >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__39__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                          >> 0xdU) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                      >> 0x1eU))) | 
                  (0x3fffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                               >> 0xeU)))) | (1U & 
                                              ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                >> 0xeU) 
                                               & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                  >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__23__KET____DOT__f__r 
        = ((2U & ((2U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                          >> 0xdU) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
                                      >> 0x1eU))) | 
                  (0x3fffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                               >> 0xeU)))) | (1U & 
                                              ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                >> 0xeU) 
                                               & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
                                                  >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__0__KET____DOT__second_half_level_logic__BRA__47__KET____DOT__f__r 
        = ((2U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
                    >> 0x1dU) & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
                                 >> 0x1eU)) | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
                                               >> 0x1eU))) 
           | (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
                     & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U]) 
                    >> 0x1eU)));
}

void VBK_64___024root___ico_comb__TOP__0(VBK_64___024root* vlSelf);

void VBK_64___024root___eval_act(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VBK_64___024root___act_sequent__TOP__0(vlSelf);
        VBK_64___024root___ico_comb__TOP__0(vlSelf);
    }
}

void VBK_64___024root___eval_nba(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_nba\n"); );
}

void VBK_64___024root___eval_triggers__ico(VBK_64___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_64___024root___dump_triggers__ico(VBK_64___024root* vlSelf);
#endif  // VL_DEBUG
void VBK_64___024root___eval_ico(VBK_64___024root* vlSelf);
void VBK_64___024root___eval_triggers__act(VBK_64___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_64___024root___dump_triggers__act(VBK_64___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_64___024root___dump_triggers__nba(VBK_64___024root* vlSelf);
#endif  // VL_DEBUG

void VBK_64___024root___eval(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VBK_64___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VBK_64___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("BK_64.v", 6, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VBK_64___024root___eval_ico(vlSelf);
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
            VBK_64___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VBK_64___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("BK_64.v", 6, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VBK_64___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VBK_64___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("BK_64.v", 6, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VBK_64___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VBK_64___024root___eval_debug_assertions(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->Cin & 0xfeU))) {
        Verilated::overWidthError("Cin");}
}
#endif  // VL_DEBUG
