// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_index_4_32.h for the primary calling header

#include "verilated.h"

#include "VCLA_index_4_32__Syms.h"
#include "VCLA_index_4_32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__stl(VCLA_index_4_32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCLA_index_4_32___024root___eval_triggers__stl(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = (vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg 
                                      != vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi__DOT__gnpg);
    vlSelf->__VstlTriggered.at(2U) = (vlSelf->CLA_index_4_32__DOT__shi__DOT__pp 
                                      != vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi__DOT__pp);
    vlSelf->__VstlTriggered.at(3U) = (vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg 
                                      != vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg);
    vlSelf->__VstlTriggered.at(4U) = (vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp 
                                      != vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi1__DOT__pp);
    vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi__DOT__gnpg 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi__DOT__pp 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_index_4_32__DOT__shi1__DOT__pp 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
        vlSelf->__VstlTriggered.at(3U) = 1U;
        vlSelf->__VstlTriggered.at(4U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_index_4_32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
