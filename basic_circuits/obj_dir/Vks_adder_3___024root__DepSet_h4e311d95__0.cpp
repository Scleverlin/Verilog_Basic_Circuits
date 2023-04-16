// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_3.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_3___024root.h"

VL_INLINE_OPT void Vks_adder_3___024root___combo__TOP__0(Vks_adder_3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_3___024root___combo__TOP__0\n"); );
    // Init
    CData/*7:0*/ ks_adder_3__DOT__p;
    CData/*5:0*/ ks_adder_3__DOT__ppp;
    CData/*5:0*/ ks_adder_3__DOT__g_png_ppg;
    CData/*0:0*/ ks_adder_3__DOT__AO_1__DOT__aoi;
    CData/*0:0*/ ks_adder_3__DOT__AO_2__DOT__aoi;
    CData/*0:0*/ ks_adder_3__DOT__AO_3__DOT__aoi;
    CData/*0:0*/ ks_adder_3__DOT__AO_4__DOT__aoi;
    CData/*0:0*/ ks_adder_3__DOT__AO_5__DOT__aoi;
    CData/*0:0*/ ks_adder_3__DOT__AO_6__DOT__aoi;
    // Body
    ks_adder_3__DOT__AO_2__DOT__aoi = (1U & (~ ((((
                                                   ((IData)(vlSelf->a) 
                                                    ^ (IData)(vlSelf->b)) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->a) 
                                                     ^ (IData)(vlSelf->b))) 
                                                 & (IData)(vlSelf->cin)) 
                                                | ((((IData)(vlSelf->b) 
                                                     & (IData)(vlSelf->a)) 
                                                    >> 1U) 
                                                   | (((((IData)(vlSelf->b) 
                                                         ^ (IData)(vlSelf->a)) 
                                                        >> 1U) 
                                                       & (IData)(vlSelf->b)) 
                                                      & (IData)(vlSelf->a))))));
    ks_adder_3__DOT__p = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    ks_adder_3__DOT__g_png_ppg = (0x3fU & (((((IData)(vlSelf->b) 
                                              & (IData)(vlSelf->a)) 
                                             >> 2U) 
                                            | (((((IData)(vlSelf->b) 
                                                  ^ (IData)(vlSelf->a)) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->a) 
                                                  >> 1U))) 
                                           | ((((((IData)(vlSelf->b) 
                                                  ^ (IData)(vlSelf->a)) 
                                                 >> 2U) 
                                                & (((IData)(vlSelf->b) 
                                                    ^ (IData)(vlSelf->a)) 
                                                   >> 1U)) 
                                               & (IData)(vlSelf->b)) 
                                              & (IData)(vlSelf->a))));
    ks_adder_3__DOT__ppp = (0x3fU & (((((IData)(vlSelf->b) 
                                        ^ (IData)(vlSelf->a)) 
                                       >> 2U) & (((IData)(vlSelf->b) 
                                                  ^ (IData)(vlSelf->a)) 
                                                 >> 1U)) 
                                     & ((IData)(vlSelf->b) 
                                        ^ (IData)(vlSelf->a))));
    ks_adder_3__DOT__AO_1__DOT__aoi = (1U & (~ (((IData)(ks_adder_3__DOT__p) 
                                                 & (IData)(vlSelf->cin)) 
                                                | ((IData)(vlSelf->b) 
                                                   & (IData)(vlSelf->a)))));
    ks_adder_3__DOT__AO_4__DOT__aoi = (1U & (~ ((((IData)(ks_adder_3__DOT__ppp) 
                                                  >> 1U) 
                                                 & (~ (IData)(ks_adder_3__DOT__AO_2__DOT__aoi))) 
                                                | ((IData)(ks_adder_3__DOT__g_png_ppg) 
                                                   >> 1U))));
    vlSelf->sum = ((0xfcU & (IData)(vlSelf->sum)) | 
                   ((2U & ((0xfffffffeU & (IData)(ks_adder_3__DOT__p)) 
                           ^ ((~ (IData)(ks_adder_3__DOT__AO_1__DOT__aoi)) 
                              << 1U))) | (1U & ((IData)(ks_adder_3__DOT__p) 
                                                ^ (IData)(vlSelf->cin)))));
    ks_adder_3__DOT__AO_3__DOT__aoi = (1U & (~ (((IData)(ks_adder_3__DOT__ppp) 
                                                 & (~ (IData)(ks_adder_3__DOT__AO_1__DOT__aoi))) 
                                                | (IData)(ks_adder_3__DOT__g_png_ppg))));
    ks_adder_3__DOT__AO_6__DOT__aoi = (1U & (~ ((((IData)(ks_adder_3__DOT__ppp) 
                                                  >> 3U) 
                                                 & (~ (IData)(ks_adder_3__DOT__AO_4__DOT__aoi))) 
                                                | ((IData)(ks_adder_3__DOT__g_png_ppg) 
                                                   >> 3U))));
    vlSelf->sum = ((0xf3U & (IData)(vlSelf->sum)) | 
                   ((8U & ((0xfffffff8U & (IData)(ks_adder_3__DOT__p)) 
                           ^ ((~ (IData)(ks_adder_3__DOT__AO_3__DOT__aoi)) 
                              << 3U))) | (4U & ((0xfffffffcU 
                                                 & (IData)(ks_adder_3__DOT__p)) 
                                                ^ (
                                                   (~ (IData)(ks_adder_3__DOT__AO_2__DOT__aoi)) 
                                                   << 2U)))));
    ks_adder_3__DOT__AO_5__DOT__aoi = (1U & (~ ((((IData)(ks_adder_3__DOT__ppp) 
                                                  >> 2U) 
                                                 & (~ (IData)(ks_adder_3__DOT__AO_3__DOT__aoi))) 
                                                | ((IData)(ks_adder_3__DOT__g_png_ppg) 
                                                   >> 2U))));
    vlSelf->cout = (1U & ((((IData)(ks_adder_3__DOT__ppp) 
                            >> 5U) & (~ (IData)(ks_adder_3__DOT__AO_6__DOT__aoi))) 
                          | ((IData)(ks_adder_3__DOT__g_png_ppg) 
                             >> 5U)));
    vlSelf->sum = ((0xcfU & (IData)(vlSelf->sum)) | 
                   ((0x20U & ((0xffffffe0U & (IData)(ks_adder_3__DOT__p)) 
                              ^ ((~ (IData)(ks_adder_3__DOT__AO_5__DOT__aoi)) 
                                 << 5U))) | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (IData)(ks_adder_3__DOT__p)) 
                                                ^ (
                                                   (~ (IData)(ks_adder_3__DOT__AO_4__DOT__aoi)) 
                                                   << 4U)))));
    vlSelf->sum = ((0x3fU & (IData)(vlSelf->sum)) | 
                   ((0x80U & ((0xffffff80U & (IData)(ks_adder_3__DOT__p)) 
                              ^ (0xffffff80U & ((((IData)(ks_adder_3__DOT__ppp) 
                                                  << 3U) 
                                                 & ((~ (IData)(ks_adder_3__DOT__AO_5__DOT__aoi)) 
                                                    << 7U)) 
                                                | ((IData)(ks_adder_3__DOT__g_png_ppg) 
                                                   << 3U))))) 
                    | (0x40U & ((0xffffffc0U & (IData)(ks_adder_3__DOT__p)) 
                                ^ ((~ (IData)(ks_adder_3__DOT__AO_6__DOT__aoi)) 
                                   << 6U)))));
}

void Vks_adder_3___024root___eval(Vks_adder_3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_3___024root___eval\n"); );
    // Body
    Vks_adder_3___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vks_adder_3___024root___eval_debug_assertions(Vks_adder_3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_3___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
