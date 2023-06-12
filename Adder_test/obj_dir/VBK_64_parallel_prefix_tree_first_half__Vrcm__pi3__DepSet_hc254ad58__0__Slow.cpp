// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK_64.h for the primary calling header

#include "verilated.h"

#include "VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3.h"

VL_ATTR_COLD void VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ctor_var_reset(VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ctor_var_reset\n"); );
    // Body
    vlSelf->q = VL_RAND_RESET_Q(64);
    vlSelf->r = VL_RAND_RESET_Q(64);
}
