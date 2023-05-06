// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbooth_4_8_bit.h for the primary calling header

#include "verilated.h"

#include "Vbooth_4_8_bit__Syms.h"
#include "Vbooth_4_8_bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__stl(Vbooth_4_8_bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_triggers__stl(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbooth_4_8_bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
