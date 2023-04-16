// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_op_3_64.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_op_3_64__Syms.h"
#include "Vks_adder_op_3_64___024root.h"

VL_INLINE_OPT void Vks_adder_op_3_64___024root___combo__TOP__0(Vks_adder_op_3_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_op_3_64___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->sum = ((0xffffffff00000000ULL & vlSelf->sum) 
                   | (IData)((IData)((((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u3.sum) 
                                       << 0x18U) | 
                                      (((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u2.sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u1.sum) 
                                         << 8U) | (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u0.sum)))))));
}

VL_INLINE_OPT void Vks_adder_op_3_64___024root___combo__TOP__1(Vks_adder_op_3_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_op_3_64___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->sum = ((0xff000000ffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)((((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u6.sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u5.sum) 
                                         << 8U) | (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u4.sum))))) 
                      << 0x20U));
}

VL_INLINE_OPT void Vks_adder_op_3_64___024root___combo__TOP__2(Vks_adder_op_3_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_op_3_64___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->cout = (1U & ((((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u7.__PVT__ppp) 
                            >> 5U) & (~ (IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u7.__PVT__AO_6__DOT__aoi))) 
                          | ((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u7.__PVT__g_png_ppg) 
                             >> 5U)));
    vlSelf->sum = ((0xffffffffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)(vlSymsp->TOP__ks_adder_op_3_64__DOT__u7.sum)) 
                      << 0x38U));
}

void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u0__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u1__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u2__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u3__0(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__1(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__1(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__1(Vks_adder_op_3_64_ks_adder_3* vlSelf);
void Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__1(Vks_adder_op_3_64_ks_adder_3* vlSelf);

void Vks_adder_op_3_64___024root___eval(Vks_adder_op_3_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_op_3_64___024root___eval\n"); );
    // Body
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u7));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u4));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u5));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u6));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u0__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u0));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u1__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u1));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u2__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u2));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u3__0((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u3));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u4__1((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u4));
    Vks_adder_op_3_64___024root___combo__TOP__0(vlSelf);
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u5__1((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u5));
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u6__1((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u6));
    Vks_adder_op_3_64___024root___combo__TOP__1(vlSelf);
    Vks_adder_op_3_64_ks_adder_3___combo__TOP__ks_adder_op_3_64__DOT__u7__1((&vlSymsp->TOP__ks_adder_op_3_64__DOT__u7));
    Vks_adder_op_3_64___024root___combo__TOP__2(vlSelf);
}
