// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCS_index4_mod_v3.h for the primary calling header

#include "verilated.h"

#include "VCS_index4_mod_v3__Syms.h"
#include "VCS_index4_mod_v3___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_index4_mod_v3___024root___dump_triggers__ico(VCS_index4_mod_v3___024root* vlSelf);
#endif  // VL_DEBUG

void VCS_index4_mod_v3___024root___eval_triggers__ico(VCS_index4_mod_v3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_index4_mod_v3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_index4_mod_v3___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCS_index4_mod_v3___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_index4_mod_v3___024root___dump_triggers__act(VCS_index4_mod_v3___024root* vlSelf);
#endif  // VL_DEBUG

void VCS_index4_mod_v3___024root___eval_triggers__act(VCS_index4_mod_v3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_index4_mod_v3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_index4_mod_v3___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCS_index4_mod_v3___024root___dump_triggers__act(vlSelf);
    }
#endif
}