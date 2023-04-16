// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_op_3_64.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_op_3_64__Syms.h"
#include "Vks_adder_op_3_64_ks_adder_3.h"

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u0__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u0__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*5:0*/ __PVT__ppp;
    CData/*5:0*/ __PVT__g_png_ppg;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)(vlSymsp->TOP.a) ^ (IData)(vlSymsp->TOP.b)));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 1U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 1U))) 
                                        & ((IData)(vlSymsp->TOP.a) 
                                           ^ (IData)(vlSymsp->TOP.b))) 
                                       & (IData)(vlSymsp->TOP.cin)) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 1U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 1U))) 
                                             & (IData)(vlSymsp->TOP.b)) 
                                            & (IData)(vlSymsp->TOP.a))))));
    __PVT__g_png_ppg = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                            >> 2U)) 
                                   & (IData)((vlSymsp->TOP.a 
                                              >> 2U))) 
                                  | ((((IData)((vlSymsp->TOP.b 
                                                >> 2U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 2U))) 
                                      & (IData)((vlSymsp->TOP.b 
                                                 >> 1U))) 
                                     & (IData)((vlSymsp->TOP.a 
                                                >> 1U)))) 
                                 | (((((IData)((vlSymsp->TOP.b 
                                                >> 2U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 2U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 1U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 1U)))) 
                                     & (IData)(vlSymsp->TOP.b)) 
                                    & (IData)(vlSymsp->TOP.a))));
    __PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                      >> 2U)) ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 2U))) 
                            & ((IData)((vlSymsp->TOP.b 
                                        >> 1U)) ^ (IData)(
                                                          (vlSymsp->TOP.a 
                                                           >> 1U)))) 
                           & ((IData)(vlSymsp->TOP.b) 
                              ^ (IData)(vlSymsp->TOP.a))));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (IData)(vlSymsp->TOP.cin)) 
                                      | ((IData)(vlSymsp->TOP.b) 
                                         & (IData)(vlSymsp->TOP.a)))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (IData)(vlSymsp->TOP.cin)))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(__PVT__g_png_ppg))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 3U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 2U))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                                >> 5U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(__PVT__g_png_ppg) 
                                                 >> 5U))));
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
                              ^ (0xffffff80U & ((((IData)(__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u1__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u1__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*5:0*/ __PVT__ppp;
    CData/*5:0*/ __PVT__g_png_ppg;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a >> 8U)) 
                         ^ (IData)((vlSymsp->TOP.b 
                                    >> 8U))));
    __PVT__g_png_ppg = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                            >> 0xaU)) 
                                   & (IData)((vlSymsp->TOP.a 
                                              >> 0xaU))) 
                                  | ((((IData)((vlSymsp->TOP.b 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0xaU))) 
                                      & (IData)((vlSymsp->TOP.b 
                                                 >> 9U))) 
                                     & (IData)((vlSymsp->TOP.a 
                                                >> 9U)))) 
                                 | (((((IData)((vlSymsp->TOP.b 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0xaU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 9U)))) 
                                     & (IData)((vlSymsp->TOP.b 
                                                >> 8U))) 
                                    & (IData)((vlSymsp->TOP.a 
                                               >> 8U)))));
    __PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                      >> 0xaU)) ^ (IData)(
                                                          (vlSymsp->TOP.a 
                                                           >> 0xaU))) 
                            & ((IData)((vlSymsp->TOP.b 
                                        >> 9U)) ^ (IData)(
                                                          (vlSymsp->TOP.a 
                                                           >> 9U)))) 
                           & ((IData)((vlSymsp->TOP.b 
                                       >> 8U)) ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 8U)))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 9U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 8U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 8U)))) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u0.__PVT__AO_8__DOT__aoi))) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 9U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 9U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 8U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 8U)))))));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u0.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 8U))))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u0.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(__PVT__g_png_ppg))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 3U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 2U))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                                >> 5U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(__PVT__g_png_ppg) 
                                                 >> 5U))));
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
                              ^ (0xffffff80U & ((((IData)(__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u2__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u2__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*5:0*/ __PVT__ppp;
    CData/*5:0*/ __PVT__g_png_ppg;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a >> 0x10U)) 
                         ^ (IData)((vlSymsp->TOP.b 
                                    >> 0x10U))));
    __PVT__g_png_ppg = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                            >> 0x12U)) 
                                   & (IData)((vlSymsp->TOP.a 
                                              >> 0x12U))) 
                                  | ((((IData)((vlSymsp->TOP.b 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x12U))) 
                                      & (IData)((vlSymsp->TOP.b 
                                                 >> 0x11U))) 
                                     & (IData)((vlSymsp->TOP.a 
                                                >> 0x11U)))) 
                                 | (((((IData)((vlSymsp->TOP.b 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x12U))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x11U)))) 
                                     & (IData)((vlSymsp->TOP.b 
                                                >> 0x10U))) 
                                    & (IData)((vlSymsp->TOP.a 
                                               >> 0x10U)))));
    __PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                      >> 0x12U)) ^ (IData)(
                                                           (vlSymsp->TOP.a 
                                                            >> 0x12U))) 
                            & ((IData)((vlSymsp->TOP.b 
                                        >> 0x11U)) 
                               ^ (IData)((vlSymsp->TOP.a 
                                          >> 0x11U)))) 
                           & ((IData)((vlSymsp->TOP.b 
                                       >> 0x10U)) ^ (IData)(
                                                            (vlSymsp->TOP.a 
                                                             >> 0x10U)))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x11U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x10U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x10U)))) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u1.__PVT__AO_8__DOT__aoi))) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x11U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x11U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x10U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x10U)))))));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u1.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x10U))))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u1.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(__PVT__g_png_ppg))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 3U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 2U))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                                >> 5U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(__PVT__g_png_ppg) 
                                                 >> 5U))));
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
                              ^ (0xffffff80U & ((((IData)(__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u3__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u3__0\n"); );
    // Init
    CData/*7:0*/ __PVT__p;
    CData/*5:0*/ __PVT__ppp;
    CData/*5:0*/ __PVT__g_png_ppg;
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a >> 0x18U)) 
                         ^ (IData)((vlSymsp->TOP.b 
                                    >> 0x18U))));
    __PVT__g_png_ppg = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                            >> 0x1aU)) 
                                   & (IData)((vlSymsp->TOP.a 
                                              >> 0x1aU))) 
                                  | ((((IData)((vlSymsp->TOP.b 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x1aU))) 
                                      & (IData)((vlSymsp->TOP.b 
                                                 >> 0x19U))) 
                                     & (IData)((vlSymsp->TOP.a 
                                                >> 0x19U)))) 
                                 | (((((IData)((vlSymsp->TOP.b 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x1aU))) 
                                      & ((IData)((vlSymsp->TOP.b 
                                                  >> 0x19U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x19U)))) 
                                     & (IData)((vlSymsp->TOP.b 
                                                >> 0x18U))) 
                                    & (IData)((vlSymsp->TOP.a 
                                               >> 0x18U)))));
    __PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                      >> 0x1aU)) ^ (IData)(
                                                           (vlSymsp->TOP.a 
                                                            >> 0x1aU))) 
                            & ((IData)((vlSymsp->TOP.b 
                                        >> 0x19U)) 
                               ^ (IData)((vlSymsp->TOP.a 
                                          >> 0x19U)))) 
                           & ((IData)((vlSymsp->TOP.b 
                                       >> 0x18U)) ^ (IData)(
                                                            (vlSymsp->TOP.a 
                                                             >> 0x18U)))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 0x19U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x19U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x18U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x18U)))) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u2.__PVT__AO_8__DOT__aoi))) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x19U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x19U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x18U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x18U)))))));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u2.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x18U))))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u2.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(__PVT__g_png_ppg))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 3U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(__PVT__g_png_ppg) 
                                         >> 2U))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(__PVT__ppp) 
                                                >> 5U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(__PVT__g_png_ppg) 
                                                 >> 5U))));
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
                              ^ (0xffffff80U & ((((IData)(__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__0\n"); );
    // Body
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x20U))));
    vlSelf->__PVT__g_png_ppg = (0x3fU & ((((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x22U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x22U))) 
                                          | ((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x22U))) 
                                              & (IData)(
                                                        (vlSymsp->TOP.b 
                                                         >> 0x21U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x21U)))) 
                                         | (((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x22U))) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.b 
                                                          >> 0x21U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.a 
                                                            >> 0x21U)))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x20U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x20U)))));
    vlSelf->__PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                              >> 0x22U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x22U))) 
                                    & ((IData)((vlSymsp->TOP.b 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x21U)))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x20U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x20U)))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__1(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u3.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x20U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 0x21U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x21U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x20U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x20U)))) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u3.__PVT__AO_8__DOT__aoi))) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x21U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x21U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x20U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x20U)))))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u3.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__g_png_ppg))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 2U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
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
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                                >> 5U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                 >> 5U))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__0\n"); );
    // Body
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x28U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x28U))));
    vlSelf->__PVT__g_png_ppg = (0x3fU & ((((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x2aU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x2aU))) 
                                          | ((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x2aU))) 
                                              & (IData)(
                                                        (vlSymsp->TOP.b 
                                                         >> 0x29U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x29U)))) 
                                         | (((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x2aU)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x2aU))) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.b 
                                                          >> 0x29U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.a 
                                                            >> 0x29U)))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x28U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x28U)))));
    vlSelf->__PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                              >> 0x2aU)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x2aU))) 
                                    & ((IData)((vlSymsp->TOP.b 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x29U)))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x28U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x28U)))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__1(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u4.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x28U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 0x29U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x29U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x28U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x28U)))) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u4.__PVT__AO_8__DOT__aoi))) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x29U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x29U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x28U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x28U)))))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u4.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__g_png_ppg))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 2U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
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
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                                >> 5U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                 >> 5U))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__0\n"); );
    // Body
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x30U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x30U))));
    vlSelf->__PVT__g_png_ppg = (0x3fU & ((((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x32U)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x32U))) 
                                          | ((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x32U))) 
                                              & (IData)(
                                                        (vlSymsp->TOP.b 
                                                         >> 0x31U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x31U)))) 
                                         | (((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x32U))) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.b 
                                                          >> 0x31U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.a 
                                                            >> 0x31U)))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x30U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x30U)))));
    vlSelf->__PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                              >> 0x32U)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x32U))) 
                                    & ((IData)((vlSymsp->TOP.b 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x31U)))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x30U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x30U)))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__1(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    CData/*0:0*/ __PVT__AO_6__DOT__aoi;
    // Body
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u5.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x30U))))));
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 0x31U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x31U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x30U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x30U)))) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u5.__PVT__AO_8__DOT__aoi))) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x31U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x31U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x30U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x30U)))))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u5.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__g_png_ppg))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 2U))));
    __PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 3U) & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
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
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
    vlSelf->__PVT__AO_8__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                                >> 5U) 
                                               & (~ (IData)(__PVT__AO_6__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                 >> 5U))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__0(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__0\n"); );
    // Body
    vlSelf->__PVT__g_png_ppg = (0x3fU & ((((IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x3aU)) 
                                           & (IData)(
                                                     (vlSymsp->TOP.a 
                                                      >> 0x3aU))) 
                                          | ((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x3aU))) 
                                              & (IData)(
                                                        (vlSymsp->TOP.b 
                                                         >> 0x39U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.a 
                                                        >> 0x39U)))) 
                                         | (((((IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x3aU)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.a 
                                                          >> 0x3aU))) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.b 
                                                          >> 0x39U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.a 
                                                            >> 0x39U)))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x38U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x38U)))));
    vlSelf->__PVT__ppp = (0x3fU & ((((IData)((vlSymsp->TOP.b 
                                              >> 0x3aU)) 
                                     ^ (IData)((vlSymsp->TOP.a 
                                                >> 0x3aU))) 
                                    & ((IData)((vlSymsp->TOP.b 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSymsp->TOP.a 
                                                  >> 0x39U)))) 
                                   & ((IData)((vlSymsp->TOP.b 
                                               >> 0x38U)) 
                                      ^ (IData)((vlSymsp->TOP.a 
                                                 >> 0x38U)))));
    vlSelf->__PVT__p = (0xffU & ((IData)((vlSymsp->TOP.a 
                                          >> 0x38U)) 
                                 ^ (IData)((vlSymsp->TOP.b 
                                            >> 0x38U))));
}

VL_INLINE_OPT void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__1(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__1\n"); );
    // Init
    CData/*0:0*/ __PVT__AO_1__DOT__aoi;
    CData/*0:0*/ __PVT__AO_2__DOT__aoi;
    CData/*0:0*/ __PVT__AO_3__DOT__aoi;
    CData/*0:0*/ __PVT__AO_4__DOT__aoi;
    CData/*0:0*/ __PVT__AO_5__DOT__aoi;
    // Body
    __PVT__AO_2__DOT__aoi = (1U & (~ (((((IData)((vlSymsp->TOP.a 
                                                  >> 0x39U)) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.b 
                                                    >> 0x39U))) 
                                        & ((IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x38U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.b 
                                                      >> 0x38U)))) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u6.__PVT__AO_8__DOT__aoi))) 
                                      | (((IData)((vlSymsp->TOP.b 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP.a 
                                                     >> 0x39U))) 
                                         | ((((IData)(
                                                      (vlSymsp->TOP.b 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP.a 
                                                         >> 0x39U))) 
                                             & (IData)(
                                                       (vlSymsp->TOP.b 
                                                        >> 0x38U))) 
                                            & (IData)(
                                                      (vlSymsp->TOP.a 
                                                       >> 0x38U)))))));
    __PVT__AO_1__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__p) 
                                       & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u6.__PVT__AO_8__DOT__aoi))) 
                                      | ((IData)((vlSymsp->TOP.b 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSymsp->TOP.a 
                                                    >> 0x38U))))));
    __PVT__AO_4__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 1U) & (~ (IData)(__PVT__AO_2__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 1U))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(vlSelf->__PVT__p) 
                                                ^ (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u6.__PVT__AO_8__DOT__aoi))))));
    __PVT__AO_3__DOT__aoi = (1U & (~ (((IData)(vlSelf->__PVT__ppp) 
                                       & (~ (IData)(__PVT__AO_1__DOT__aoi))) 
                                      | (IData)(vlSelf->__PVT__g_png_ppg))));
    vlSelf->__PVT__AO_6__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                                >> 3U) 
                                               & (~ (IData)(__PVT__AO_4__DOT__aoi))) 
                                              | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                 >> 3U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__p)) 
                           ^ ((~ (IData)(__PVT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(vlSelf->__PVT__p)) 
                                                ^ (
                                                   (~ (IData)(__PVT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    __PVT__AO_5__DOT__aoi = (1U & (~ ((((IData)(vlSelf->__PVT__ppp) 
                                        >> 2U) & (~ (IData)(__PVT__AO_3__DOT__aoi))) 
                                      | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                         >> 2U))));
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
                              ^ (0xffffff80U & ((((IData)(vlSelf->__PVT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(__PVT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->__PVT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(vlSelf->__PVT__p)) 
                                ^ ((~ (IData)(vlSelf->__PVT__AO_6__DOT__aoi)) 
                                   << 6U)))));
}
