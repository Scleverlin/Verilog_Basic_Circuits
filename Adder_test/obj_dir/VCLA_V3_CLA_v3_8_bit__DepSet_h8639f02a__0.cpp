// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V3.h for the primary calling header

#include "verilated.h"

#include "VCLA_V3_CLA_v3_8_bit.h"
#include "VCLA_V3__Syms.h"

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u1__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)(vlSymsp->TOP.a) 
                                          & (IData)(vlSymsp->TOP.b)));
    vlSelf->__PVT__p = (0xffU & ((IData)(vlSymsp->TOP.a) 
                                 ^ (IData)(vlSymsp->TOP.b)));
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP.cin)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP.cin))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c5) 
                                 & ((IData)(vlSelf->__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSelf->__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                      >> 7U))))));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)((vlSymsp->TOP.a 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 8U))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 8U)) ^ (IData)(
                                                            (vlSymsp->TOP.b 
                                                             >> 8U))));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__1(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u2__1\n"); );
    // Body
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.cout)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u1.cout))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c5) 
                                 & ((IData)(vlSelf->__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSelf->__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                      >> 7U))))));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)((vlSymsp->TOP.a 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x10U))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x10U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x10U))));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__1(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u3__1\n"); );
    // Body
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.cout)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u2.cout))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c5) 
                                 & ((IData)(vlSelf->__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSelf->__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                      >> 7U))))));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)((vlSymsp->TOP.a 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x18U))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x18U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x18U))));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__1(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u4__1\n"); );
    // Body
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.cout)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u3.cout))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c5) 
                                 & ((IData)(vlSelf->__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSelf->__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                      >> 7U))))));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)((vlSymsp->TOP.a 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x20U))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x20U))));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__1(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u5__1\n"); );
    // Body
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.cout)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u4.cout))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c5) 
                                 & ((IData)(vlSelf->__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSelf->__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                      >> 7U))))));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)((vlSymsp->TOP.a 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x28U))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x28U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x28U))));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__1(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u6__1\n"); );
    // Body
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.cout)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u5.cout))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c5) 
                                 & ((IData)(vlSelf->__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSelf->__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                      >> 7U))))));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)((vlSymsp->TOP.a 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x30U))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x30U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x30U))));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__1(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u7__1\n"); );
    // Body
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.cout)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u6.cout))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
    vlSelf->cout = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c5) 
                                 & ((IData)(vlSelf->__PVT__norpp) 
                                    >> 6U))) & (~ (
                                                   (((IData)(vlSelf->__PVT__p) 
                                                     >> 7U) 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                      >> 7U))))));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__0(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__g = (0xffU & ((IData)((vlSymsp->TOP.a 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x38U))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x38U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x38U))));
    vlSelf->__PVT__norpp = (0x7fU & (((IData)(vlSelf->__PVT__p) 
                                      >> 1U) & (IData)(vlSelf->__PVT__p)));
}

VL_INLINE_OPT void VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__1(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ico_sequent__TOP__CLA_V3_64__DOT__u8__1\n"); );
    // Body
    vlSelf->__PVT__c0 = (1U & (((IData)(vlSelf->__PVT__p) 
                                & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.cout)) 
                               | (IData)(vlSelf->__PVT__u1__DOT__g)));
    vlSelf->__PVT__c1 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__norpp) 
                                      & (IData)(vlSymsp->TOP__CLA_V3_64__DOT__u7.cout))) 
                                  & (~ ((((IData)(vlSelf->__PVT__p) 
                                          >> 1U) & (IData)(vlSelf->__PVT__u1__DOT__g)) 
                                        | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                           >> 1U))))));
    vlSelf->__PVT__c2 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c0) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 1U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 2U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 1U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 2U))))));
    vlSelf->__PVT__c3 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c1) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 2U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 3U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 2U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 3U))))));
    vlSelf->__PVT__c4 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c2) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 3U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 4U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 3U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 4U))))));
    vlSelf->__PVT__c5 = (1U & (~ ((~ ((IData)(vlSelf->__PVT__c3) 
                                      & ((IData)(vlSelf->__PVT__norpp) 
                                         >> 4U))) & 
                                  (~ ((((IData)(vlSelf->__PVT__p) 
                                        >> 5U) & ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                                  >> 4U)) 
                                      | ((IData)(vlSelf->__PVT__u1__DOT__g) 
                                         >> 5U))))));
}