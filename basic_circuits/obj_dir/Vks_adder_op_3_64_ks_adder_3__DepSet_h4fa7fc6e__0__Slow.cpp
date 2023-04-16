// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_adder_op_3_64.h for the primary calling header

#include "verilated.h"

#include "Vks_adder_op_3_64_ks_adder_3.h"

VL_ATTR_COLD void Vks_adder_op_3_64_ks_adder_3___ctor_var_reset(Vks_adder_op_3_64_ks_adder_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_adder_op_3_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vks_adder_op_3_64_ks_adder_3___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ppp = VL_RAND_RESET_I(6);
    vlSelf->sum = VL_RAND_RESET_I(8);
    vlSelf->__PVT__g_png_ppg = VL_RAND_RESET_I(6);
    vlSelf->__PVT__AO_6__DOT__aoi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__AO_8__DOT__aoi = VL_RAND_RESET_I(1);
}
