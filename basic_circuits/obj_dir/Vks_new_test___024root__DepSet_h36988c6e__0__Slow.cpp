// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_new_test.h for the primary calling header

#include "verilated.h"

#include "Vks_new_test___024root.h"

VL_ATTR_COLD void Vks_new_test___024root___eval_initial(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_initial\n"); );
}

void Vks_new_test___024root___combo__TOP__0(Vks_new_test___024root* vlSelf);

VL_ATTR_COLD void Vks_new_test___024root___eval_settle(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_settle\n"); );
    // Body
    Vks_new_test___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vks_new_test___024root___final(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___final\n"); );
}

VL_ATTR_COLD void Vks_new_test___024root___ctor_var_reset(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__u1__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u2__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u3__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u4__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u5__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u6__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u7__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u8__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u1__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u2__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u3__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u4__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u5__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u6__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u7__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__ks_new_test__DOT__u8__DOT__c = VL_RAND_RESET_I(7);
}
