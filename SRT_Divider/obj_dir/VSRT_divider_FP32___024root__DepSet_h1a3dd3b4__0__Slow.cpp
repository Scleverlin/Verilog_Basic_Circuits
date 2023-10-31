// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSRT_divider_FP32.h for the primary calling header

#include "verilated.h"

#include "VSRT_divider_FP32__Syms.h"
#include "VSRT_divider_FP32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__stl(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_triggers__stl(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSRT_divider_FP32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
