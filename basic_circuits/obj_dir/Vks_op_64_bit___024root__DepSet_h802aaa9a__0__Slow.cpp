// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_op_64_bit.h for the primary calling header

#include "verilated.h"

#include "Vks_op_64_bit___024root.h"

VL_ATTR_COLD void Vks_op_64_bit___024root___eval_initial(Vks_op_64_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_op_64_bit___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vks_op_64_bit___024root___final(Vks_op_64_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_op_64_bit___024root___final\n"); );
}

VL_ATTR_COLD void Vks_op_64_bit___024root___ctor_var_reset(Vks_op_64_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_op_64_bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
}
