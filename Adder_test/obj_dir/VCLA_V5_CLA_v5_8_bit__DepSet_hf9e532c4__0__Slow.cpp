// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_V5.h for the primary calling header

#include "verilated.h"

#include "VCLA_V5_CLA_v5_8_bit.h"

VL_ATTR_COLD void VCLA_V5_CLA_v5_8_bit___ctor_var_reset(VCLA_V5_CLA_v5_8_bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_V5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCLA_V5_CLA_v5_8_bit___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(8);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p = VL_RAND_RESET_I(8);
    vlSelf->__PVT__c1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->__VdfgTmp_heb99427f__0 = 0;
    vlSelf->__VdfgTmp_hb58ed366__0 = 0;
    vlSelf->__VdfgTmp_h17856908__0 = 0;
    vlSelf->__VdfgTmp_h10dccfe8__0 = 0;
}
