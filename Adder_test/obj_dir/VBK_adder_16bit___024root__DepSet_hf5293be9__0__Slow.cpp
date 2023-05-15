// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK_adder_16bit.h for the primary calling header

#include "verilated.h"

#include "VBK_adder_16bit__Syms.h"
#include "VBK_adder_16bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_adder_16bit___024root___dump_triggers__stl(VBK_adder_16bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VBK_adder_16bit___024root___eval_triggers__stl(VBK_adder_16bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_adder_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_adder_16bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBK_adder_16bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
