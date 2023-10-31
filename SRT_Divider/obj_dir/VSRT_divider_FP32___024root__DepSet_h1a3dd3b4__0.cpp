// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSRT_divider_FP32.h for the primary calling header

#include "verilated.h"

#include "VSRT_divider_FP32__Syms.h"
#include "VSRT_divider_FP32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__ico(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG

void VSRT_divider_FP32___024root___eval_triggers__ico(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSRT_divider_FP32___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__act(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG

void VSRT_divider_FP32___024root___eval_triggers__act(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->rst)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSRT_divider_FP32___024root___dump_triggers__act(vlSelf);
    }
#endif
}
