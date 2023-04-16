// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_op_64_bit.h for the primary calling header

#include "verilated.h"

#include "Vks_op_64_bit_ks_adder_2.h"

VL_ATTR_COLD void Vks_op_64_bit_ks_adder_2___ctor_var_reset(Vks_op_64_bit_ks_adder_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_op_64_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_op_64_bit_ks_adder_2___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pp = VL_RAND_RESET_I(7);
    vlSelf->sum = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gn_png = VL_RAND_RESET_I(7);
    vlSelf->__PVT__AO_6__DOT__aoi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__AO_8__DOT__aoi = VL_RAND_RESET_I(1);
}
