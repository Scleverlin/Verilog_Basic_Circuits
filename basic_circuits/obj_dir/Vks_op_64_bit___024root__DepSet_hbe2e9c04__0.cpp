// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_op_64_bit.h for the primary calling header

#include "verilated.h"

#include "Vks_op_64_bit__Syms.h"
#include "Vks_op_64_bit___024root.h"

VL_INLINE_OPT void Vks_op_64_bit___024root___combo__TOP__0(Vks_op_64_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_op_64_bit___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->sum = ((0xffffffff00000000ULL & vlSelf->sum) 
                   | (IData)((IData)((((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u4.sum) 
                                       << 0x18U) | 
                                      (((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u3.sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u2.sum) 
                                         << 8U) | (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u1.sum)))))));
}

VL_INLINE_OPT void Vks_op_64_bit___024root___combo__TOP__1(Vks_op_64_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_op_64_bit___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->sum = ((0xff000000ffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)((((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u7.sum) 
                                        << 0x10U) | 
                                       (((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u6.sum) 
                                         << 8U) | (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u5.sum))))) 
                      << 0x20U));
}

VL_INLINE_OPT void Vks_op_64_bit___024root___combo__TOP__2(Vks_op_64_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_op_64_bit___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->cout = (1U & ((((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u8.__PVT__pp) 
                            >> 6U) & (~ (IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u8.__PVT__AO_6__DOT__aoi))) 
                          | ((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u8.__PVT__gn_png) 
                             >> 6U)));
    vlSelf->sum = ((0xffffffffffffffULL & vlSelf->sum) 
                   | ((QData)((IData)(vlSymsp->TOP__ks_op_64_bit__DOT__u8.sum)) 
                      << 0x38U));
}

void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u1__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u2__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u3__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u4__0(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__1(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__1(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__1(Vks_op_64_bit_ks_adder_2* vlSelf);
void Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__1(Vks_op_64_bit_ks_adder_2* vlSelf);

void Vks_op_64_bit___024root___eval(Vks_op_64_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_op_64_bit___024root___eval\n"); );
    // Body
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u8));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u5));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u6));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u7));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u1__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u1));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u2__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u2));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u3__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u3));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u4__0((&vlSymsp->TOP__ks_op_64_bit__DOT__u4));
    Vks_op_64_bit___024root___combo__TOP__0(vlSelf);
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u5__1((&vlSymsp->TOP__ks_op_64_bit__DOT__u5));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u6__1((&vlSymsp->TOP__ks_op_64_bit__DOT__u6));
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u7__1((&vlSymsp->TOP__ks_op_64_bit__DOT__u7));
    Vks_op_64_bit___024root___combo__TOP__1(vlSelf);
    Vks_op_64_bit_ks_adder_2___combo__TOP__ks_op_64_bit__DOT__u8__1((&vlSymsp->TOP__ks_op_64_bit__DOT__u8));
    Vks_op_64_bit___024root___combo__TOP__2(vlSelf);
}
