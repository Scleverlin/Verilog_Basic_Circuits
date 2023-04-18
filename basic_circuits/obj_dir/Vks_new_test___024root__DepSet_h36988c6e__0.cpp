// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_new_test.h for the primary calling header

#include "verilated.h"

#include "Vks_new_test___024root.h"

VL_INLINE_OPT void Vks_new_test___024root___combo__TOP__0(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___combo__TOP__0\n"); );
    // Init
    CData/*0:0*/ ks_new_64_bit__DOT__c1;
    CData/*0:0*/ ks_new_64_bit__DOT__c2;
    CData/*0:0*/ ks_new_64_bit__DOT__c3;
    CData/*0:0*/ ks_new_64_bit__DOT__c4;
    CData/*0:0*/ ks_new_64_bit__DOT__c5;
    CData/*0:0*/ ks_new_64_bit__DOT__c6;
    CData/*0:0*/ ks_new_64_bit__DOT__c7;
    CData/*7:0*/ ks_new_64_bit__DOT__u1__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u1__DOT__p;
    CData/*7:0*/ ks_new_64_bit__DOT__u2__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u2__DOT__p;
    CData/*7:0*/ ks_new_64_bit__DOT__u3__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u3__DOT__p;
    CData/*7:0*/ ks_new_64_bit__DOT__u4__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u4__DOT__p;
    CData/*7:0*/ ks_new_64_bit__DOT__u5__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u5__DOT__p;
    CData/*7:0*/ ks_new_64_bit__DOT__u6__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u6__DOT__p;
    CData/*7:0*/ ks_new_64_bit__DOT__u7__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u7__DOT__p;
    CData/*7:0*/ ks_new_64_bit__DOT__u8__DOT__g;
    CData/*7:0*/ ks_new_64_bit__DOT__u8__DOT__p;
    // Body
    ks_new_64_bit__DOT__u8__DOT__g = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x38U)) 
                                               & (IData)(
                                                         (vlSelf->b 
                                                          >> 0x38U))));
    ks_new_64_bit__DOT__u8__DOT__p = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x38U)) 
                                               ^ (IData)(
                                                         (vlSelf->b 
                                                          >> 0x38U))));
    ks_new_64_bit__DOT__u7__DOT__g = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x30U)) 
                                               & (IData)(
                                                         (vlSelf->b 
                                                          >> 0x30U))));
    ks_new_64_bit__DOT__u7__DOT__p = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->b 
                                                          >> 0x30U))));
    ks_new_64_bit__DOT__u6__DOT__g = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x28U)) 
                                               & (IData)(
                                                         (vlSelf->b 
                                                          >> 0x28U))));
    ks_new_64_bit__DOT__u6__DOT__p = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x28U)) 
                                               ^ (IData)(
                                                         (vlSelf->b 
                                                          >> 0x28U))));
    ks_new_64_bit__DOT__u5__DOT__g = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x20U)) 
                                               & (IData)(
                                                         (vlSelf->b 
                                                          >> 0x20U))));
    ks_new_64_bit__DOT__u5__DOT__p = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->b 
                                                          >> 0x20U))));
    ks_new_64_bit__DOT__u4__DOT__g = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->b 
                                                          >> 0x18U))));
    ks_new_64_bit__DOT__u4__DOT__p = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x18U)) 
                                               ^ (IData)(
                                                         (vlSelf->b 
                                                          >> 0x18U))));
    ks_new_64_bit__DOT__u3__DOT__g = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x10U)) 
                                               & (IData)(
                                                         (vlSelf->b 
                                                          >> 0x10U))));
    ks_new_64_bit__DOT__u3__DOT__p = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->b 
                                                          >> 0x10U))));
    ks_new_64_bit__DOT__u2__DOT__g = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 8U)) 
                                               & (IData)(
                                                         (vlSelf->b 
                                                          >> 8U))));
    ks_new_64_bit__DOT__u2__DOT__p = (0xffU & ((IData)(
                                                       (vlSelf->a 
                                                        >> 8U)) 
                                               ^ (IData)(
                                                         (vlSelf->b 
                                                          >> 8U))));
    ks_new_64_bit__DOT__u1__DOT__g = (0xffU & ((IData)(vlSelf->a) 
                                               & (IData)(vlSelf->b)));
    ks_new_64_bit__DOT__u1__DOT__p = (0xffU & ((IData)(vlSelf->a) 
                                               ^ (IData)(vlSelf->b)));
    vlSelf->ks_new_64_bit__DOT__u1__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                       & (IData)(vlSelf->cin)))));
    vlSelf->ks_new_64_bit__DOT__u1__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(vlSelf->cin) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u1__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u1__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u1__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u1__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u1__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u1__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u1__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u1__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u1__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u1__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c) 
                                                          << 2U)))));
    vlSelf->sum = ((0xffffffffffffff00ULL & vlSelf->sum) 
                   | (IData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c) 
                                                 << 1U) 
                                                ^ (0xfffffffeU 
                                                   & (IData)(ks_new_64_bit__DOT__u1__DOT__p)))) 
                                      | (1U & ((IData)(vlSelf->cin) 
                                               ^ (IData)(ks_new_64_bit__DOT__u1__DOT__p)))))));
    ks_new_64_bit__DOT__c1 = (1U & ((((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                      >> 7U) | (((IData)(ks_new_64_bit__DOT__u1__DOT__p) 
                                                 >> 7U) 
                                                & ((IData)(ks_new_64_bit__DOT__u1__DOT__g) 
                                                   >> 6U))) 
                                    | ((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(ks_new_64_bit__DOT__u1__DOT__p)))) 
                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u1__DOT__c) 
                                          >> 5U))));
    vlSelf->ks_new_64_bit__DOT__u2__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                       & (IData)(ks_new_64_bit__DOT__c1)))));
    vlSelf->ks_new_64_bit__DOT__u2__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(ks_new_64_bit__DOT__c1) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u2__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u2__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u2__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u2__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u2__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u2__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u2__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u2__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u2__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u2__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c) 
                                                          << 2U)))));
    vlSelf->sum = ((0xffffffffffff00ffULL & vlSelf->sum) 
                   | ((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(ks_new_64_bit__DOT__u2__DOT__p)))) 
                                       | (1U & ((IData)(ks_new_64_bit__DOT__c1) 
                                                ^ (IData)(ks_new_64_bit__DOT__u2__DOT__p)))))) 
                      << 8U));
    ks_new_64_bit__DOT__c2 = (1U & ((((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                      >> 7U) | (((IData)(ks_new_64_bit__DOT__u2__DOT__p) 
                                                 >> 7U) 
                                                & ((IData)(ks_new_64_bit__DOT__u2__DOT__g) 
                                                   >> 6U))) 
                                    | ((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(ks_new_64_bit__DOT__u2__DOT__p)))) 
                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u2__DOT__c) 
                                          >> 5U))));
    vlSelf->ks_new_64_bit__DOT__u3__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                       & (IData)(ks_new_64_bit__DOT__c2)))));
    vlSelf->ks_new_64_bit__DOT__u3__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(ks_new_64_bit__DOT__c2) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u3__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u3__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u3__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u3__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u3__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u3__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u3__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u3__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u3__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u3__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c) 
                                                          << 2U)))));
    vlSelf->sum = ((0xffffffffff00ffffULL & vlSelf->sum) 
                   | ((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(ks_new_64_bit__DOT__u3__DOT__p)))) 
                                       | (1U & ((IData)(ks_new_64_bit__DOT__c2) 
                                                ^ (IData)(ks_new_64_bit__DOT__u3__DOT__p)))))) 
                      << 0x10U));
    ks_new_64_bit__DOT__c3 = (1U & ((((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                      >> 7U) | (((IData)(ks_new_64_bit__DOT__u3__DOT__p) 
                                                 >> 7U) 
                                                & ((IData)(ks_new_64_bit__DOT__u3__DOT__g) 
                                                   >> 6U))) 
                                    | ((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(ks_new_64_bit__DOT__u3__DOT__p)))) 
                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u3__DOT__c) 
                                          >> 5U))));
    vlSelf->ks_new_64_bit__DOT__u4__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                       & (IData)(ks_new_64_bit__DOT__c3)))));
    vlSelf->ks_new_64_bit__DOT__u4__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(ks_new_64_bit__DOT__c3) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u4__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u4__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u4__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u4__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u4__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u4__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u4__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u4__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u4__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u4__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c) 
                                                          << 2U)))));
    vlSelf->sum = ((0xffffffff00ffffffULL & vlSelf->sum) 
                   | ((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(ks_new_64_bit__DOT__u4__DOT__p)))) 
                                       | (1U & ((IData)(ks_new_64_bit__DOT__c3) 
                                                ^ (IData)(ks_new_64_bit__DOT__u4__DOT__p)))))) 
                      << 0x18U));
    ks_new_64_bit__DOT__c4 = (1U & ((((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                      >> 7U) | (((IData)(ks_new_64_bit__DOT__u4__DOT__p) 
                                                 >> 7U) 
                                                & ((IData)(ks_new_64_bit__DOT__u4__DOT__g) 
                                                   >> 6U))) 
                                    | ((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(ks_new_64_bit__DOT__u4__DOT__p)))) 
                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u4__DOT__c) 
                                          >> 5U))));
    vlSelf->ks_new_64_bit__DOT__u5__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                       & (IData)(ks_new_64_bit__DOT__c4)))));
    vlSelf->ks_new_64_bit__DOT__u5__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(ks_new_64_bit__DOT__c4) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u5__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u5__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u5__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u5__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u5__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u5__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u5__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u5__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u5__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u5__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c) 
                                                          << 2U)))));
    vlSelf->sum = ((0xffffff00ffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(ks_new_64_bit__DOT__u5__DOT__p)))) 
                                       | (1U & ((IData)(ks_new_64_bit__DOT__c4) 
                                                ^ (IData)(ks_new_64_bit__DOT__u5__DOT__p)))))) 
                      << 0x20U));
    ks_new_64_bit__DOT__c5 = (1U & ((((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                      >> 7U) | (((IData)(ks_new_64_bit__DOT__u5__DOT__p) 
                                                 >> 7U) 
                                                & ((IData)(ks_new_64_bit__DOT__u5__DOT__g) 
                                                   >> 6U))) 
                                    | ((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(ks_new_64_bit__DOT__u5__DOT__p)))) 
                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u5__DOT__c) 
                                          >> 5U))));
    vlSelf->ks_new_64_bit__DOT__u6__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                       & (IData)(ks_new_64_bit__DOT__c5)))));
    vlSelf->ks_new_64_bit__DOT__u6__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(ks_new_64_bit__DOT__c5) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u6__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u6__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u6__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u6__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u6__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u6__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u6__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u6__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u6__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u6__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c) 
                                                          << 2U)))));
    vlSelf->sum = ((0xffff00ffffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(ks_new_64_bit__DOT__u6__DOT__p)))) 
                                       | (1U & ((IData)(ks_new_64_bit__DOT__c5) 
                                                ^ (IData)(ks_new_64_bit__DOT__u6__DOT__p)))))) 
                      << 0x28U));
    ks_new_64_bit__DOT__c6 = (1U & ((((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                      >> 7U) | (((IData)(ks_new_64_bit__DOT__u6__DOT__p) 
                                                 >> 7U) 
                                                & ((IData)(ks_new_64_bit__DOT__u6__DOT__g) 
                                                   >> 6U))) 
                                    | ((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(ks_new_64_bit__DOT__u6__DOT__p)))) 
                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u6__DOT__c) 
                                          >> 5U))));
    vlSelf->ks_new_64_bit__DOT__u7__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                       & (IData)(ks_new_64_bit__DOT__c6)))));
    vlSelf->ks_new_64_bit__DOT__u7__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(ks_new_64_bit__DOT__c6) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u7__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u7__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u7__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u7__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u7__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u7__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u7__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u7__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u7__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u7__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c) 
                                                          << 2U)))));
    vlSelf->sum = ((0xff00ffffffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(ks_new_64_bit__DOT__u7__DOT__p)))) 
                                       | (1U & ((IData)(ks_new_64_bit__DOT__c6) 
                                                ^ (IData)(ks_new_64_bit__DOT__u7__DOT__p)))))) 
                      << 0x30U));
    ks_new_64_bit__DOT__c7 = (1U & ((((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                      >> 7U) | (((IData)(ks_new_64_bit__DOT__u7__DOT__p) 
                                                 >> 7U) 
                                                & ((IData)(ks_new_64_bit__DOT__u7__DOT__g) 
                                                   >> 6U))) 
                                    | ((IData)((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(ks_new_64_bit__DOT__u7__DOT__p)))) 
                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u7__DOT__c) 
                                          >> 5U))));
    vlSelf->ks_new_64_bit__DOT__u8__DOT__c = ((0x7eU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                              | (1U 
                                                 & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                    | ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                       & (IData)(ks_new_64_bit__DOT__c7)))));
    vlSelf->ks_new_64_bit__DOT__u8__DOT__c = ((0x7dU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                              | (2U 
                                                 & (((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                           << 1U)) 
                                                       & ((IData)(ks_new_64_bit__DOT__c7) 
                                                          << 1U)))));
    vlSelf->ks_new_64_bit__DOT__u8__DOT__c = ((0x7bU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                              | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                        | ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                           & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                              << 1U)))) 
                                                    | (((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(ks_new_64_bit__DOT__u8__DOT__p)))) 
                                                        & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                                       << 2U))));
    vlSelf->ks_new_64_bit__DOT__u8__DOT__c = ((0x77U 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                              | (8U 
                                                 & (((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(ks_new_64_bit__DOT__u8__DOT__p)))) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u8__DOT__c = ((0x6fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                              | (0x10U 
                                                 & (((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x18U 
                                                                 == 
                                                                 (0x18U 
                                                                  & (IData)(ks_new_64_bit__DOT__u8__DOT__p)))) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u8__DOT__c = ((0x5fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                              | (0x20U 
                                                 & (((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(ks_new_64_bit__DOT__u8__DOT__p)))) 
                                                        << 5U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c) 
                                                          << 2U)))));
    vlSelf->ks_new_64_bit__DOT__u8__DOT__c = ((0x3fU 
                                               & (IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c)) 
                                              | (0x40U 
                                                 & (((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                     | ((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                                        & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                           << 1U))) 
                                                    | (((IData)(
                                                                (0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & (IData)(ks_new_64_bit__DOT__u8__DOT__p)))) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c) 
                                                          << 2U)))));
    vlSelf->cout = (1U & ((((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                            >> 7U) | (((IData)(ks_new_64_bit__DOT__u8__DOT__p) 
                                       >> 7U) & ((IData)(ks_new_64_bit__DOT__u8__DOT__g) 
                                                 >> 6U))) 
                          | ((IData)((0xc0U == (0xc0U 
                                                & (IData)(ks_new_64_bit__DOT__u8__DOT__p)))) 
                             & ((IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c) 
                                >> 5U))));
    vlSelf->sum = ((0xffffffffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)(((0xfeU & (((IData)(vlSelf->ks_new_64_bit__DOT__u8__DOT__c) 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(ks_new_64_bit__DOT__u8__DOT__p)))) 
                                       | (1U & ((IData)(ks_new_64_bit__DOT__c7) 
                                                ^ (IData)(ks_new_64_bit__DOT__u8__DOT__p)))))) 
                      << 0x38U));
}

void Vks_new_test___024root___eval(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval\n"); );
    // Body
    Vks_new_test___024root___combo__TOP__0(vlSelf);
}

QData Vks_new_test___024root___change_request_1(Vks_new_test___024root* vlSelf);

VL_INLINE_OPT QData Vks_new_test___024root___change_request(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___change_request\n"); );
    // Body
    return (Vks_new_test___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vks_new_test___024root___change_request_1(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ks_new_64_bit__DOT__u1__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u1__DOT__c)
         | (vlSelf->ks_new_64_bit__DOT__u2__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u2__DOT__c)
         | (vlSelf->ks_new_64_bit__DOT__u3__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u3__DOT__c)
         | (vlSelf->ks_new_64_bit__DOT__u4__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u4__DOT__c)
         | (vlSelf->ks_new_64_bit__DOT__u5__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u5__DOT__c)
         | (vlSelf->ks_new_64_bit__DOT__u6__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u6__DOT__c)
         | (vlSelf->ks_new_64_bit__DOT__u7__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u7__DOT__c)
         | (vlSelf->ks_new_64_bit__DOT__u8__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u8__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u1__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u1__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u1.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u2__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u2__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u2.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u3__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u3__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u3.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u4__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u4__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u4.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u5__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u5__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u5.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u6__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u6__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u6.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u7__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u7__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u7.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ks_new_64_bit__DOT__u8__DOT__c ^ vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u8__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_64_bit.u8.c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u1__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u1__DOT__c;
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u2__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u2__DOT__c;
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u3__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u3__DOT__c;
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u4__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u4__DOT__c;
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u5__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u5__DOT__c;
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u6__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u6__DOT__c;
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u7__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u7__DOT__c;
    vlSelf->__Vchglast__TOP__ks_new_64_bit__DOT__u8__DOT__c 
        = vlSelf->ks_new_64_bit__DOT__u8__DOT__c;
    return __req;
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
