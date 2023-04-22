// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_new_test.h for the primary calling header

#include "verilated.h"

#include "Vks_new_test___024root.h"

VL_INLINE_OPT void Vks_new_test___024root___ico_sequent__TOP__0(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ks_new_test__DOT__u8__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x38U)) 
                                             & (IData)(
                                                       (vlSelf->b 
                                                        >> 0x38U))));
    vlSelf->ks_new_test__DOT__u8__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->b 
                                                        >> 0x38U))));
    vlSelf->ks_new_test__DOT__u1__DOT__g = (0xffU & 
                                            ((IData)(vlSelf->a) 
                                             & (IData)(vlSelf->b)));
    vlSelf->ks_new_test__DOT__u2__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 8U)) 
                                             & (IData)(
                                                       (vlSelf->b 
                                                        >> 8U))));
    vlSelf->ks_new_test__DOT__u3__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x10U)) 
                                             & (IData)(
                                                       (vlSelf->b 
                                                        >> 0x10U))));
    vlSelf->ks_new_test__DOT__u4__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x18U)) 
                                             & (IData)(
                                                       (vlSelf->b 
                                                        >> 0x18U))));
    vlSelf->ks_new_test__DOT__u5__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x20U)) 
                                             & (IData)(
                                                       (vlSelf->b 
                                                        >> 0x20U))));
    vlSelf->ks_new_test__DOT__u6__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x28U)) 
                                             & (IData)(
                                                       (vlSelf->b 
                                                        >> 0x28U))));
    vlSelf->ks_new_test__DOT__u7__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x30U)) 
                                             & (IData)(
                                                       (vlSelf->b 
                                                        >> 0x30U))));
    vlSelf->ks_new_test__DOT__u1__DOT__p = (0xffU & 
                                            ((IData)(vlSelf->a) 
                                             ^ (IData)(vlSelf->b)));
    vlSelf->ks_new_test__DOT__u2__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 8U)) 
                                             ^ (IData)(
                                                       (vlSelf->b 
                                                        >> 8U))));
    vlSelf->ks_new_test__DOT__u3__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x10U)) 
                                             ^ (IData)(
                                                       (vlSelf->b 
                                                        >> 0x10U))));
    vlSelf->ks_new_test__DOT__u4__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x18U)) 
                                             ^ (IData)(
                                                       (vlSelf->b 
                                                        >> 0x18U))));
    vlSelf->ks_new_test__DOT__u5__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x20U)) 
                                             ^ (IData)(
                                                       (vlSelf->b 
                                                        >> 0x20U))));
    vlSelf->ks_new_test__DOT__u6__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->b 
                                                        >> 0x28U))));
    vlSelf->ks_new_test__DOT__u7__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlSelf->a 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->b 
                                                        >> 0x30U))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__0(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hc8721df1__0;
    // Body
    __Vtemp_hc8721df1__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->cin) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                  & (IData)(vlSelf->cin))))))))));
    vlSelf->ks_new_test__DOT__u1__DOT__c = __Vtemp_hc8721df1__0;
    vlSelf->ks_new_test__DOT__c1 = (1U & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                           >> 7U) | 
                                          (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                            >> 7U) 
                                           & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__g) 
                                               >> 6U) 
                                              | (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__p) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                                    >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__1(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__1\n"); );
    // Body
    vlSelf->ks_new_test__DOT__c2 = (1U & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                           >> 7U) | 
                                          (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                            >> 7U) 
                                           & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                               >> 6U) 
                                              | (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                                    >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__2(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->ks_new_test__DOT__c3 = (1U & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                           >> 7U) | 
                                          (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                            >> 7U) 
                                           & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                               >> 6U) 
                                              | (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                                    >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__3(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__3\n"); );
    // Body
    vlSelf->ks_new_test__DOT__c4 = (1U & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                           >> 7U) | 
                                          (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                            >> 7U) 
                                           & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                               >> 6U) 
                                              | (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                                    >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__4(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__4\n"); );
    // Body
    vlSelf->ks_new_test__DOT__c5 = (1U & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                           >> 7U) | 
                                          (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                            >> 7U) 
                                           & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                               >> 6U) 
                                              | (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                                    >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__5(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__5\n"); );
    // Body
    vlSelf->ks_new_test__DOT__c6 = (1U & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                           >> 7U) | 
                                          (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                            >> 7U) 
                                           & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                               >> 6U) 
                                              | (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                                    >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__6(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__6\n"); );
    // Body
    vlSelf->ks_new_test__DOT__c7 = (1U & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                           >> 7U) | 
                                          (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                            >> 7U) 
                                           & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                               >> 6U) 
                                              | (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                                    >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__7(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__7\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h0a1ec106__0;
    // Body
    __Vtemp_h0a1ec106__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->ks_new_test__DOT__c1) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                  & (IData)(vlSelf->ks_new_test__DOT__c1))))))))));
    vlSelf->ks_new_test__DOT__u2__DOT__c = __Vtemp_h0a1ec106__0;
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__8(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__8\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h45a14fdb__0;
    // Body
    __Vtemp_h45a14fdb__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->ks_new_test__DOT__c2) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                  & (IData)(vlSelf->ks_new_test__DOT__c2))))))))));
    vlSelf->ks_new_test__DOT__u3__DOT__c = __Vtemp_h45a14fdb__0;
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__9(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__9\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hb9976ba3__0;
    // Body
    __Vtemp_hb9976ba3__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->ks_new_test__DOT__c3) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                  & (IData)(vlSelf->ks_new_test__DOT__c3))))))))));
    vlSelf->ks_new_test__DOT__u4__DOT__c = __Vtemp_hb9976ba3__0;
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__10(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__10\n"); );
    // Init
    CData/*31:0*/ __Vtemp_haec8c0b2__0;
    // Body
    __Vtemp_haec8c0b2__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->ks_new_test__DOT__c4) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__p) 
                                                  & (IData)(vlSelf->ks_new_test__DOT__c4))))))))));
    vlSelf->ks_new_test__DOT__u5__DOT__c = __Vtemp_haec8c0b2__0;
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__11(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__11\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h510db8a4__0;
    // Body
    __Vtemp_h510db8a4__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->ks_new_test__DOT__c5) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__p) 
                                                  & (IData)(vlSelf->ks_new_test__DOT__c5))))))))));
    vlSelf->ks_new_test__DOT__u6__DOT__c = __Vtemp_h510db8a4__0;
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__12(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__12\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h196fb8a4__0;
    // Body
    __Vtemp_h196fb8a4__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->ks_new_test__DOT__c6) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__p) 
                                                  & (IData)(vlSelf->ks_new_test__DOT__c6))))))))));
    vlSelf->ks_new_test__DOT__u7__DOT__c = __Vtemp_h196fb8a4__0;
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__13(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__13\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h240b7027__0;
    // Body
    __Vtemp_h240b7027__0 = ((0x40U & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                       | ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                          & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                             << 1U))) 
                                      | (((IData)((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                                          << 6U) & 
                                         ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                          << 2U)))) 
                            | ((0x20U & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                          | ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                             & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                << 1U))) 
                                         | (((IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                                             << 5U) 
                                            & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                               << 2U)))) 
                               | ((0x10U & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                                                << 4U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                                  << 2U)))) 
                                  | ((8U & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                             | ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                   << 1U))) 
                                            | (((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                                                << 3U) 
                                               & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                                  << 2U)))) 
                                     | ((4U & ((0xfffffffcU 
                                                & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                         << 1U)))) 
                                               | (((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__c)) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                   | ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                         << 1U))) 
                                                  | (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                         << 1U)) 
                                                     & ((IData)(vlSelf->ks_new_test__DOT__c7) 
                                                        << 1U)))) 
                                           | (1U & 
                                              ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                               | ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                  & (IData)(vlSelf->ks_new_test__DOT__c7))))))))));
    vlSelf->ks_new_test__DOT__u8__DOT__c = __Vtemp_h240b7027__0;
    vlSelf->cout = (1U & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                           >> 7U) | (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                      >> 7U) & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__g) 
                                                 >> 6U) 
                                                | (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__p) 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                                      >> 5U))))));
}

VL_INLINE_OPT void Vks_new_test___024root___ico_comb__TOP__14(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ico_comb__TOP__14\n"); );
    // Body
    vlSelf->sum = (((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                                << 1U) 
                                               ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                                     | (1U & ((IData)(vlSelf->ks_new_test__DOT__c7) 
                                              ^ (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))))) 
                    << 0x38U) | (((QData)((IData)((
                                                   (0xfeU 
                                                    & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                                        << 1U) 
                                                       ^ 
                                                       (0xfffffffeU 
                                                        & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ks_new_test__DOT__c6) 
                                                         ^ (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                ((0xfeU 
                                                                  & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                                                      << 1U) 
                                                                     ^ 
                                                                     (0xfffffffeU 
                                                                      & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->ks_new_test__DOT__c5) 
                                                                       ^ (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((0xfeU 
                                                                     & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                                                         << 1U) 
                                                                        ^ 
                                                                        (0xfffffffeU 
                                                                         & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                                                                    | (1U 
                                                                       & ((IData)(vlSelf->ks_new_test__DOT__c4) 
                                                                          ^ (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((0xfe000000U 
                                                                       & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                                                           << 0x19U) 
                                                                          ^ 
                                                                          (0xfe000000U 
                                                                           & ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__p) 
                                                                              << 0x18U)))) 
                                                                      | (0x1000000U 
                                                                         & (((IData)(vlSelf->ks_new_test__DOT__c3) 
                                                                             ^ (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)) 
                                                                            << 0x18U))) 
                                                                     | (((0xfe0000U 
                                                                          & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                                                              << 0x11U) 
                                                                             ^ 
                                                                             (0xfffe0000U 
                                                                              & ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__p) 
                                                                                << 0x10U)))) 
                                                                         | (0x10000U 
                                                                            & (((IData)(vlSelf->ks_new_test__DOT__c2) 
                                                                                ^ (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)) 
                                                                               << 0x10U))) 
                                                                        | (((0xfe00U 
                                                                             & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                                                                << 9U) 
                                                                                ^ 
                                                                                (0xfffffe00U 
                                                                                & ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__p) 
                                                                                << 8U)))) 
                                                                            | (0x100U 
                                                                               & (((IData)(vlSelf->ks_new_test__DOT__c1) 
                                                                                ^ (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)) 
                                                                                << 8U))) 
                                                                           | ((0xfeU 
                                                                               & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                                                                << 1U) 
                                                                                ^ 
                                                                                (0xfffffffeU 
                                                                                & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                                                                              | (1U 
                                                                                & ((IData)(vlSelf->cin) 
                                                                                ^ (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))))))))))));
}

void Vks_new_test___024root___eval_ico(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vks_new_test___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(8U))) {
        Vks_new_test___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U))) {
        Vks_new_test___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U))) {
        Vks_new_test___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U))) {
        Vks_new_test___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U))) {
        Vks_new_test___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U))) {
        Vks_new_test___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U))) {
        Vks_new_test___024root___ico_comb__TOP__6(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(8U))) {
        Vks_new_test___024root___ico_comb__TOP__7(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U)) 
         | vlSelf->__VicoTriggered.at(7U))) {
        Vks_new_test___024root___ico_comb__TOP__8(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
         | vlSelf->__VicoTriggered.at(6U))) {
        Vks_new_test___024root___ico_comb__TOP__9(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U)) 
         | vlSelf->__VicoTriggered.at(5U))) {
        Vks_new_test___024root___ico_comb__TOP__10(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
         | vlSelf->__VicoTriggered.at(4U))) {
        Vks_new_test___024root___ico_comb__TOP__11(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U)) 
         | vlSelf->__VicoTriggered.at(3U))) {
        Vks_new_test___024root___ico_comb__TOP__12(vlSelf);
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
         | vlSelf->__VicoTriggered.at(2U))) {
        Vks_new_test___024root___ico_comb__TOP__13(vlSelf);
    }
    if (((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
               | vlSelf->__VicoTriggered.at(2U)) | vlSelf->__VicoTriggered.at(3U)) 
             | vlSelf->__VicoTriggered.at(4U)) | vlSelf->__VicoTriggered.at(5U)) 
           | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(8U))) {
        Vks_new_test___024root___ico_comb__TOP__14(vlSelf);
    }
}

void Vks_new_test___024root___eval_act(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(7U)) {
        Vks_new_test___024root___ico_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        Vks_new_test___024root___ico_comb__TOP__1(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        Vks_new_test___024root___ico_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        Vks_new_test___024root___ico_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        Vks_new_test___024root___ico_comb__TOP__4(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        Vks_new_test___024root___ico_comb__TOP__5(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        Vks_new_test___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(7U))) {
        Vks_new_test___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(5U) | vlSelf->__VactTriggered.at(6U))) {
        Vks_new_test___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(5U))) {
        Vks_new_test___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(3U) | vlSelf->__VactTriggered.at(4U))) {
        Vks_new_test___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U))) {
        Vks_new_test___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(1U) | vlSelf->__VactTriggered.at(2U))) {
        Vks_new_test___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U))) {
        Vks_new_test___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
              | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U)) 
            | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
          | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U))) {
        Vks_new_test___024root___ico_comb__TOP__14(vlSelf);
    }
}

void Vks_new_test___024root___eval_nba(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_nba\n"); );
}

void Vks_new_test___024root___eval_triggers__ico(Vks_new_test___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__ico(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vks_new_test___024root___eval_triggers__act(Vks_new_test___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__act(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__nba(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vks_new_test___024root___eval(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<8> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vks_new_test___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vks_new_test___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("ks_new_test.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vks_new_test___024root___eval_ico(vlSelf);
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
            Vks_new_test___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vks_new_test___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ks_new_test.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vks_new_test___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vks_new_test___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ks_new_test.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vks_new_test___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vks_new_test___024root___eval_debug_assertions(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
