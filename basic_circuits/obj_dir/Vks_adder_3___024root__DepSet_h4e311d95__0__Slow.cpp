// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_3.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_3___024root.h"

VL_ATTR_COLD void Vks_adder_3___024root___eval_initial(Vks_adder_3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_3___024root___eval_initial\n"); );
}

void Vks_adder_3___024root___combo__TOP__0(Vks_adder_3___024root* vlSelf);

VL_ATTR_COLD void Vks_adder_3___024root___eval_settle(Vks_adder_3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_3___024root___eval_settle\n"); );
    // Body
    Vks_adder_3___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vks_adder_3___024root___final(Vks_adder_3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_3___024root___final\n"); );
}

VL_ATTR_COLD void Vks_adder_3___024root___ctor_var_reset(Vks_adder_3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_adder_3___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(8);
}
