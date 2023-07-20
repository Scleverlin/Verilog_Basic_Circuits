// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_32.h for the primary calling header

#include "verilated.h"

#include "Vmultiplier_32_HC_64.h"

VL_ATTR_COLD void Vmultiplier_32_HC_64___ctor_var_reset(Vmultiplier_32_HC_64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmultiplier_32_HC_64___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
}
