// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_HAN_PG_16.h for the primary calling header

#include "verilated.h"

#include "VCLA_HAN_PG_16__Syms.h"
#include "VCLA_HAN_PG_16___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_PG_16___024root___dump_triggers__stl(VCLA_HAN_PG_16___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCLA_HAN_PG_16___024root___eval_triggers__stl(VCLA_HAN_PG_16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_PG_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_PG_16___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->CLA_HAN_PG_16__DOT__pp) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__pp));
    vlSelf->__VstlTriggered.at(2U) = ((IData)(vlSelf->CLA_HAN_PG_16__DOT__gnpg) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__gnpg));
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__pp 
        = vlSelf->CLA_HAN_PG_16__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_PG_16__DOT__gnpg 
        = vlSelf->CLA_HAN_PG_16__DOT__gnpg;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_HAN_PG_16___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
