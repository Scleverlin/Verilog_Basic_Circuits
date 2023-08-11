// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK0_KS6_64__02dbit.h for the primary calling header

#include "verilated.h"

#include "VBK0_KS6_64__02dbit__Syms.h"
#include "VBK0_KS6_64__02dbit__Syms.h"
#include "VBK0_KS6_64__02dbit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBK0_KS6_64__02dbit___024root___dump_triggers__ico(VBK0_KS6_64__02dbit___024root* vlSelf);
#endif  // VL_DEBUG

void VBK0_KS6_64__02dbit___024root___eval_triggers__ico(VBK0_KS6_64__02dbit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK0_KS6_64__02dbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK0_KS6_64__02dbit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBK0_KS6_64__02dbit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBK0_KS6_64__02dbit___024root___dump_triggers__act(VBK0_KS6_64__02dbit___024root* vlSelf);
#endif  // VL_DEBUG

void VBK0_KS6_64__02dbit___024root___eval_triggers__act(VBK0_KS6_64__02dbit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK0_KS6_64__02dbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK0_KS6_64__02dbit___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBK0_KS6_64__02dbit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
