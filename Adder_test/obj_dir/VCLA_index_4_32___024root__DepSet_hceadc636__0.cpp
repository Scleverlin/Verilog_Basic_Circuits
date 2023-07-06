// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_index_4_32.h for the primary calling header

#include "verilated.h"

#include "VCLA_index_4_32__Syms.h"
#include "VCLA_index_4_32__Syms.h"
#include "VCLA_index_4_32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__ico(VCLA_index_4_32___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_index_4_32___024root___eval_triggers__ico(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
    vlSelf->__VicoTriggered.set(1U, (vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__gnpg__0));
    vlSelf->__VicoTriggered.set(2U, (vlSelf->CLA_index_4_32__DOT__shi__DOT__pp 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__pp__0));
    vlSelf->__VicoTriggered.set(3U, (vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg__0));
    vlSelf->__VicoTriggered.set(4U, (vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__pp__0));
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__gnpg__0 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__pp__0 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__pp;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg__0 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__pp__0 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
        vlSelf->__VicoTriggered.set(3U, 1U);
        vlSelf->__VicoTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_index_4_32___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__act(VCLA_index_4_32___024root* vlSelf);
#endif  // VL_DEBUG

void VCLA_index_4_32___024root___eval_triggers__act(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__gnpg__0));
    vlSelf->__VactTriggered.set(1U, (vlSelf->CLA_index_4_32__DOT__shi__DOT__pp 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__pp__0));
    vlSelf->__VactTriggered.set(2U, (vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg__0));
    vlSelf->__VactTriggered.set(3U, (vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp 
                                     != vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__pp__0));
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__gnpg__0 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__pp__0 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__pp;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg__0 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__pp__0 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCLA_index_4_32___024root___dump_triggers__act(vlSelf);
    }
#endif
}
