// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_AO_64.h for the primary calling header

#include "verilated.h"

#include "VCLA_AO_64___024root.h"

VL_ATTR_COLD void VCLA_AO_64___024root___eval_initial(VCLA_AO_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_AO_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_AO_64___024root___eval_initial\n"); );
}

void VCLA_AO_64___024root___combo__TOP__0(VCLA_AO_64___024root* vlSelf);

VL_ATTR_COLD void VCLA_AO_64___024root___eval_settle(VCLA_AO_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_AO_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_AO_64___024root___eval_settle\n"); );
    // Body
    VCLA_AO_64___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VCLA_AO_64___024root___final(VCLA_AO_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_AO_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_AO_64___024root___final\n"); );
}

VL_ATTR_COLD void VCLA_AO_64___024root___ctor_var_reset(VCLA_AO_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_AO_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_AO_64___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->CLA_AO_64__DOT__c = VL_RAND_RESET_Q(63);
    vlSelf->__Vchglast__TOP__CLA_AO_64__DOT__c = VL_RAND_RESET_Q(63);
}
