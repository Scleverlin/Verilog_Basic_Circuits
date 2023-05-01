// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V3.h for the primary calling header

#include "verilated.h"

#include "VCLA_V3_CLA_v3_8_bit.h"

VL_ATTR_COLD void VCLA_V3_CLA_v3_8_bit___ctor_var_reset(VCLA_V3_CLA_v3_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V3_CLA_v3_8_bit___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(8);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p = VL_RAND_RESET_I(8);
    vlSelf->__PVT__norpp = VL_RAND_RESET_I(7);
    vlSelf->__PVT__c0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__g = VL_RAND_RESET_I(8);
}
