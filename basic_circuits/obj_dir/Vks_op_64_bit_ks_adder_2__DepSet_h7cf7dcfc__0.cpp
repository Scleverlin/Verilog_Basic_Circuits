// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_op_64_bit.h for the primary calling header

#include "verilated.h"

#include "Vks_op_64_bit__Syms.h"
#include "Vks_op_64_bit_ks_adder_2.h"

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u1__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u1__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)(vlSymsp->TOP.b) ^ (IData)(vlSymsp->TOP.a)));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 1U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 1U))) 
                                  & ((IData)(vlSymsp->TOP.b) 
                                     ^ (IData)(vlSymsp->TOP.a)))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 2U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 2U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 1U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 1U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 3U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 3U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 2U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 2U)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 4U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 4U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 3U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 3U)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 5U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 5U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 4U)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 6U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 6U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 5U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 5U)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 7U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 7U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 6U)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 1U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 1U))) 
                                       & ((IData)(vlSymsp->TOP.b) 
                                          & (IData)(vlSymsp->TOP.a))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 1U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 2U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 2U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 1U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 1U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 2U)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 3U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 3U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 2U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 2U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 3U)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 4U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 3U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 3U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 4U)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 5U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 5U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 4U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 4U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 5U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 5U)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 6U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 6U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 5U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 5U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 6U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 6U)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 7U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 7U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 6U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 6U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 7U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 7U)))) 
                                         << 6U)));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (IData)(vlSymsp->TOP.cin)) 
                                      | ((IData)(vlSymsp->TOP.b) 
                                         & (IData)(vlSymsp->TOP.a)))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (IData)(vlSymsp->TOP.cin)) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (IData)(vlSymsp->TOP.cin)))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 4U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 4U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 6U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 6U))));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u2__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u2__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)((vlSymsp->TOP.b >> 8U)) 
                         ^ (IData)((vlSymsp->TOP.a 
                                    >> 8U))));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 9U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 9U))) 
                                  & ((IData)((vlSymsp->TOP.b 
                                              >> 8U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 8U))))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0xaU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0xaU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 9U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 9U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0xbU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0xbU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0xaU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0xaU)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0xcU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0xcU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0xbU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0xbU)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0xdU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0xcU)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0xeU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0xdU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0xdU)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0xfU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0xeU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0xeU)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 9U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 9U))) 
                                       & ((IData)((vlSymsp->TOP.b 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 8U)))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 9U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0xaU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0xaU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 9U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 9U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0xaU)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0xbU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0xbU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0xaU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0xbU)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0xcU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0xbU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0xcU)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0xdU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0xdU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0xcU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0xcU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0xdU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0xdU)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0xeU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0xeU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0xdU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0xdU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0xeU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0xeU)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0xfU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0xfU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0xeU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0xeU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0xfU)))) 
                                         << 6U)));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u1.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 8U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u1.__PVT__AO_8__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u1.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 4U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 4U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 6U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 6U))));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u3__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u3__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)((vlSymsp->TOP.b >> 0x10U)) 
                         ^ (IData)((vlSymsp->TOP.a 
                                    >> 0x10U))));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 0x11U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 0x11U))) 
                                  & ((IData)((vlSymsp->TOP.b 
                                              >> 0x10U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x10U))))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x12U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x12U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x11U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x11U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x13U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x13U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x12U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x12U)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x14U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x14U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x13U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x13U)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x15U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x14U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x14U)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x16U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x15U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x15U)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x17U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x16U)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 0x11U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 0x11U))) 
                                       & ((IData)((vlSymsp->TOP.b 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x10U)))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x11U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x12U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x12U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x11U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x12U)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x13U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x13U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x12U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x13U)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x14U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x14U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x13U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x14U)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x15U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x15U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x14U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x14U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x15U)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x16U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x16U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x15U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x15U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x16U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x16U)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x17U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x17U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x16U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x16U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x17U)))) 
                                         << 6U)));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u2.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x10U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u2.__PVT__AO_8__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u2.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 4U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 4U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 6U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 6U))));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u4__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u4__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)((vlSymsp->TOP.b >> 0x18U)) 
                         ^ (IData)((vlSymsp->TOP.a 
                                    >> 0x18U))));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 0x19U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 0x19U))) 
                                  & ((IData)((vlSymsp->TOP.b 
                                              >> 0x18U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x18U))))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x1aU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x1aU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x19U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x19U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x1bU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x1bU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x1aU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x1aU)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x1cU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x1cU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x1bU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x1bU)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x1dU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x1cU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x1cU)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x1eU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x1dU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x1dU)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x1fU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x1eU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x1eU)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 0x19U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 0x19U))) 
                                       & ((IData)((vlSymsp->TOP.b 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x18U)))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x19U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x1aU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x1aU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x19U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x1aU)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x1bU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x1bU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x1aU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x1bU)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x1cU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x1cU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x1bU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x1cU)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x1dU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x1dU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x1cU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x1cU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x1dU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x1dU)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x1eU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x1eU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x1dU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x1dU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x1eU)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x1fU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x1fU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x1eU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x1eU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x1fU)))) 
                                         << 6U)));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u3.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x18U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u3.__PVT__AO_8__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u3.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 4U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 4U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 6U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 6U))));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__0\n"); );
    // Body
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.b 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.a 
                                            >> 0x20U))));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 0x21U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 0x21U))) 
                                  & ((IData)((vlSymsp->TOP.b 
                                              >> 0x20U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x20U))))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x22U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x22U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x21U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x21U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x23U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x23U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x22U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x22U)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x24U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x24U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x23U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x23U)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x25U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x24U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x24U)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x26U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x25U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x25U)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x27U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x26U)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 0x21U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 0x21U))) 
                                       & ((IData)((vlSymsp->TOP.b 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x20U)))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x21U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x22U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x22U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x22U)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x23U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x23U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x22U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x23U)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x24U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x24U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x23U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x23U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x24U)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x25U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x25U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x24U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x24U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x25U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x25U)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x26U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x26U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x25U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x25U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x26U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x26U)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x27U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x27U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x26U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x26U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x27U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x27U)))) 
                                         << 6U)));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__1(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u4.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x20U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u4.__PVT__AO_8__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u4.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 4U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 4U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(vlSelf->__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(vlSelf->__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 6U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 6U))));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__0\n"); );
    // Body
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.b 
                                          >> 0x28U)) 
                                 ^ (IData)((vlSymsp->TOP.a 
                                            >> 0x28U))));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 0x29U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 0x29U))) 
                                  & ((IData)((vlSymsp->TOP.b 
                                              >> 0x28U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x28U))))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x2aU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x2aU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x29U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x29U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x2bU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x2bU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x2aU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x2aU)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x2cU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x2cU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x2bU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x2bU)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x2dU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x2cU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x2cU)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x2eU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x2dU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x2dU)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x2fU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x2eU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x2eU)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 0x29U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 0x29U))) 
                                       & ((IData)((vlSymsp->TOP.b 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x28U)))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x29U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x2aU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x2aU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x29U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x2aU)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x2bU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x2bU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x2aU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x2bU)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x2cU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x2cU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x2bU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x2cU)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x2dU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x2dU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x2cU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x2cU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x2dU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x2dU)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x2eU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x2eU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x2dU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x2dU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x2eU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x2eU)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x2fU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x2fU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x2eU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x2eU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x2fU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x2fU)))) 
                                         << 6U)));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__1(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u5.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x28U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u5.__PVT__AO_8__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u5.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 4U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 4U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(vlSelf->__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(vlSelf->__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 6U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 6U))));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__0\n"); );
    // Body
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.b 
                                          >> 0x30U)) 
                                 ^ (IData)((vlSymsp->TOP.a 
                                            >> 0x30U))));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 0x31U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 0x31U))) 
                                  & ((IData)((vlSymsp->TOP.b 
                                              >> 0x30U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x30U))))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x32U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x32U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x31U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x31U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x33U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x33U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x32U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x32U)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x34U)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x34U))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x33U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x33U)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x35U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x34U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x34U)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x36U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x35U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x35U)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x37U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x36U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x36U)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 0x31U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 0x31U))) 
                                       & ((IData)((vlSymsp->TOP.b 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x30U)))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x31U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x32U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x32U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x31U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x32U)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x33U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x33U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x32U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x33U)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x34U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x34U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x33U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x34U)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x35U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x35U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x34U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x34U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x35U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x35U)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x36U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x36U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x35U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x35U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x36U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x36U)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x37U)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x37U))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x36U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x36U)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x37U)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x37U)))) 
                                         << 6U)));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__1(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u6.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x30U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u6.__PVT__AO_8__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u6.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 4U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 4U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(vlSelf->__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(vlSelf->__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 6U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 6U))));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__0(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__0\n"); );
    // Body
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.b 
                                          >> 0x38U)) 
                                 ^ (IData)((vlSymsp->TOP.a 
                                            >> 0x38U))));
    vlSelf->__PVT__pp = ((0x7eU & (IData)(vlSelf->__PVT__pp)) 
                         | (1U & (((IData)((vlSymsp->TOP.b 
                                            >> 0x39U)) 
                                   ^ (IData)((vlSymsp->TOP.a 
                                              >> 0x39U))) 
                                  & ((IData)((vlSymsp->TOP.b 
                                              >> 0x38U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x38U))))));
    vlSelf->__PVT__pp = ((0x7dU & (IData)(vlSelf->__PVT__pp)) 
                         | (2U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x3aU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x3aU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x39U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x39U)))) 
                                  << 1U)));
    vlSelf->__PVT__pp = ((0x7bU & (IData)(vlSelf->__PVT__pp)) 
                         | (4U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x3bU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x3bU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x3aU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x3aU)))) 
                                  << 2U)));
    vlSelf->__PVT__pp = ((0x77U & (IData)(vlSelf->__PVT__pp)) 
                         | (8U & ((((IData)((vlSymsp->TOP.b 
                                             >> 0x3cU)) 
                                    ^ (IData)((vlSymsp->TOP.a 
                                               >> 0x3cU))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x3bU)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x3bU)))) 
                                  << 3U)));
    vlSelf->__PVT__pp = ((0x6fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x10U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x3dU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x3cU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x3cU)))) 
                                     << 4U)));
    vlSelf->__PVT__pp = ((0x5fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x20U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x3eU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x3dU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x3dU)))) 
                                     << 5U)));
    vlSelf->__PVT__pp = ((0x3fU & (IData)(vlSelf->__PVT__pp)) 
                         | (0x40U & ((((IData)((vlSymsp->TOP.b 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x3fU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x3eU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x3eU)))) 
                                     << 6U)));
    vlSelf->__PVT__gn_png = ((0x7eU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (1U & ((((IData)((vlSymsp->TOP.b 
                                                 >> 0x39U)) 
                                        ^ (IData)((vlSymsp->TOP.a 
                                                   >> 0x39U))) 
                                       & ((IData)((vlSymsp->TOP.b 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x38U)))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x39U))))));
    vlSelf->__PVT__gn_png = ((0x7dU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (2U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x3aU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x3aU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x39U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x3aU)))) 
                                      << 1U)));
    vlSelf->__PVT__gn_png = ((0x7bU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (4U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x3bU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x3bU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x3aU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x3aU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x3bU)))) 
                                      << 2U)));
    vlSelf->__PVT__gn_png = ((0x77U & (IData)(vlSelf->__PVT__gn_png)) 
                             | (8U & (((((IData)((vlSymsp->TOP.b 
                                                  >> 0x3cU)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x3cU))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x3bU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x3bU)))) 
                                       | ((IData)((vlSymsp->TOP.b 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x3cU)))) 
                                      << 3U)));
    vlSelf->__PVT__gn_png = ((0x6fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x10U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x3dU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x3dU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x3cU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x3cU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x3dU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x3dU)))) 
                                         << 4U)));
    vlSelf->__PVT__gn_png = ((0x5fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x20U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x3eU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x3eU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x3dU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x3dU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x3eU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x3eU)))) 
                                         << 5U)));
    vlSelf->__PVT__gn_png = ((0x3fU & (IData)(vlSelf->__PVT__gn_png)) 
                             | (0x40U & (((((IData)(
                                                    (vlSymsp->TOP.b 
                                                     >> 0x3fU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x3fU))) 
                                           & ((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x3eU)) 
                                              & (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x3eU)))) 
                                          | ((IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x3fU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x3fU)))) 
                                         << 6U)));
}

VL_INLINE_OPT void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__1(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    // Body
    __PVT__AO_2__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__pp) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u7.__PVT__AO_8__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__gn_png))));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u7.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x38U))))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 2U))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u7.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 1U))));
    vlSelf->__PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                                >> 4U) 
                                               & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__gn_png) 
                                                 >> 4U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__pp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__gn_png) 
                                         >> 3U))));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(vlSelf->__PVT__p)) 
                              ^ ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(vlSelf->__PVT__p)) 
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__pp) 
                                                  << 2U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__gn_png) 
                                                   << 2U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(vlSelf->__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
}
