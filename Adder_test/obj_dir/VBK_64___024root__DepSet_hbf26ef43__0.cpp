// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK_64.h for the primary calling header

#include "verilated.h"

#include "VBK_64__Syms.h"
#include "VBK_64___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_64___024root___dump_triggers__ico(VBK_64___024root* vlSelf);
#endif  // VL_DEBUG

void VBK_64___024root___eval_triggers__ico(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = (0U != (((((((
                                                   (((((((((((((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U]) 
                                                               | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U])) 
                                                              | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U])) 
                                                             | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U])) 
                                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U])) 
                                                           | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U])) 
                                                          | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U])) 
                                                         | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U])) 
                                                        | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U])) 
                                                       | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U])) 
                                                      | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU])) 
                                                     | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU])) 
                                                    | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU])) 
                                                   | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU])) 
                                                  | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU])) 
                                                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU])) 
                                                | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U])) 
                                               | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U])) 
                                              | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U])) 
                                             | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                ^ vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U])));
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBK_64___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VBK_64___024root___ico_comb__TOP__0(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__9__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__9__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__11__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__11__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__13__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__13__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__15__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__15__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__17__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__17__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__19__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__19__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__21__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__21__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__23__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__23__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__25__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__25__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__27__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__27__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__29__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__29__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__31__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__31__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__33__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__33__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__35__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__35__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__37__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__37__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__39__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__39__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__41__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__41__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__43__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__43__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__45__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__45__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__47__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__47__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__49__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__49__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__51__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__51__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__53__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__53__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__55__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__55__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__57__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__57__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__59__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__59__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__61__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__61__KET____DOT__f__cin = 0;
    CData/*0:0*/ Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__63__KET____DOT__f__cin;
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__63__KET____DOT__f__cin = 0;
    VlWide<20>/*639:0*/ __Vtemp_haf7ac84e__0;
    VlWide<12>/*383:0*/ __Vtemp_h43093b15__0;
    // Body
    __Vtemp_h43093b15__0[0xaU] = (((IData)((((QData)((IData)(
                                                             ((0xfffffffcU 
                                                               & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                                   << 0x12U) 
                                                                  | (0x3fffcU 
                                                                     & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                        >> 0xeU)))) 
                                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__39__KET____DOT__f__r)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((0xfffffffcU 
                                                                & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                    << 0x12U) 
                                                                   | (0x3fffcU 
                                                                      & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                                         >> 0xeU)))) 
                                                               | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__23__KET____DOT__f__r)))))) 
                                   >> 0x12U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((0xfffffffcU 
                                                                             & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                                                << 0x12U) 
                                                                                | (0x3fffcU 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                                >> 0xeU)))) 
                                                                            | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__39__KET____DOT__f__r)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((0xfffffffcU 
                                                                              & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                                << 0x12U) 
                                                                                | (0x3fffcU 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                                                >> 0xeU)))) 
                                                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__23__KET____DOT__f__r))))) 
                                                         >> 0x20U)) 
                                                << 0xeU));
    __Vtemp_haf7ac84e__0[4U] = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U];
    __Vtemp_haf7ac84e__0[5U] = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U];
    __Vtemp_haf7ac84e__0[6U] = (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__0__KET____DOT__second_half_level_logic__BRA__47__KET____DOT__f__r) 
                                 << 0x1eU) | (0x3fffffffU 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U]));
    __Vtemp_haf7ac84e__0[7U] = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U];
    __Vtemp_haf7ac84e__0[8U] = (IData)((0x3fffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U])))));
    __Vtemp_haf7ac84e__0[9U] = (((IData)((((QData)((IData)(
                                                           ((0xfffffffcU 
                                                             & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                                 << 0x12U) 
                                                                | (0x3fffcU 
                                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                      >> 0xeU)))) 
                                                            | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__39__KET____DOT__f__r)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0xfffffffcU 
                                                              & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                  << 0x12U) 
                                                                 | (0x3fffcU 
                                                                    & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                                       >> 0xeU)))) 
                                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__23__KET____DOT__f__r)))))) 
                                 << 0xeU) | (IData)(
                                                    ((0x3fffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U])))) 
                                                     >> 0x20U)));
    __Vtemp_haf7ac84e__0[0xbU] = ((0xffff0000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U]) 
                                  | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__55__KET____DOT__f__r) 
                                      << 0xeU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((0xfffffffcU 
                                                                               & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                                                << 0x12U) 
                                                                                | (0x3fffcU 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                                >> 0xeU)))) 
                                                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__39__KET____DOT__f__r)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0xfffffffcU 
                                                                                & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                                                << 0x12U) 
                                                                                | (0x3fffcU 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                                                >> 0xeU)))) 
                                                                               | (IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__1__KET____DOT__second_half_level_logic__BRA__23__KET____DOT__f__r))))) 
                                                           >> 0x20U)) 
                                                  >> 0x12U)));
    __Vtemp_haf7ac84e__0[0xcU] = ((0xff000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U]) 
                                  | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__11__KET____DOT__f__r) 
                                      << 0x16U) | (0x3fffffU 
                                                   & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U])));
    __Vtemp_haf7ac84e__0[0xdU] = ((0xff000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U]) 
                                  | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__27__KET____DOT__f__r) 
                                      << 0x16U) | (
                                                   (0x3fff00U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U]) 
                                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__19__KET____DOT__f__r) 
                                                       << 6U) 
                                                      | (0x3fU 
                                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U])))));
    __Vtemp_haf7ac84e__0[0xeU] = ((0xff000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU]) 
                                  | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__43__KET____DOT__f__r) 
                                      << 0x16U) | (
                                                   (0x3fff00U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU]) 
                                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__35__KET____DOT__f__r) 
                                                       << 6U) 
                                                      | (0x3fU 
                                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU])))));
    __Vtemp_haf7ac84e__0[0xfU] = ((0xff000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU]) 
                                  | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__59__KET____DOT__f__r) 
                                      << 0x16U) | (
                                                   (0x3fff00U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU]) 
                                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__2__KET____DOT__second_half_level_logic__BRA__51__KET____DOT__f__r) 
                                                       << 6U) 
                                                      | (0x3fU 
                                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU])))));
    __Vtemp_haf7ac84e__0[0x10U] = ((0xf0000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]) 
                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__13__KET____DOT__f__r) 
                                       << 0x1aU) | 
                                      ((0x3f00000U 
                                        & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]) 
                                       | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__9__KET____DOT__f__r) 
                                           << 0x12U) 
                                          | ((0x3f000U 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU]) 
                                             | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__5__KET____DOT__f__r) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU])))))));
    __Vtemp_haf7ac84e__0[0x11U] = ((0xf0000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]) 
                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__29__KET____DOT__f__r) 
                                       << 0x1aU) | 
                                      ((0x3f00000U 
                                        & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]) 
                                       | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__25__KET____DOT__f__r) 
                                           << 0x12U) 
                                          | ((0x3f000U 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]) 
                                             | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__21__KET____DOT__f__r) 
                                                 << 0xaU) 
                                                | ((0x3f0U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU]) 
                                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__17__KET____DOT__f__r) 
                                                       << 2U) 
                                                      | (3U 
                                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU])))))))));
    __Vtemp_haf7ac84e__0[0x12U] = ((0xf0000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]) 
                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__45__KET____DOT__f__r) 
                                       << 0x1aU) | 
                                      ((0x3f00000U 
                                        & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]) 
                                       | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__41__KET____DOT__f__r) 
                                           << 0x12U) 
                                          | ((0x3f000U 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]) 
                                             | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__37__KET____DOT__f__r) 
                                                 << 0xaU) 
                                                | ((0x3f0U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU]) 
                                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__33__KET____DOT__f__r) 
                                                       << 2U) 
                                                      | (3U 
                                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU])))))))));
    __Vtemp_haf7ac84e__0[0x13U] = ((0xf0000000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]) 
                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__61__KET____DOT__f__r) 
                                       << 0x1aU) | 
                                      ((0x3f00000U 
                                        & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]) 
                                       | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__57__KET____DOT__f__r) 
                                           << 0x12U) 
                                          | ((0x3f000U 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]) 
                                             | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__53__KET____DOT__f__r) 
                                                 << 0xaU) 
                                                | ((0x3f0U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU]) 
                                                   | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__3__KET____DOT__second_half_level_logic__BRA__49__KET____DOT__f__r) 
                                                       << 2U) 
                                                      | (3U 
                                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU])))))))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U] 
        = (IData)(vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh.r);
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
        = (IData)((vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh.r 
                   >> 0x20U));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
        = (IData)((((QData)((IData)((1U & (((IData)(
                                                    (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r 
                                                     >> 0x3eU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh.r 
                                                       >> 0x3fU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r 
                                                      >> 0x3fU)))))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r 
                                                               >> 0x3eU)) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh.r 
                                                                 >> 0x3eU)))))) 
                                  << 0x3eU) | (0x3fffffffffffffffULL 
                                               & vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r))));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U] 
        = (IData)(((((QData)((IData)((1U & (((IData)(
                                                     (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r 
                                                      >> 0x3eU)) 
                                             & (IData)(
                                                       (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh.r 
                                                        >> 0x3fU))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r 
                                                       >> 0x3fU)))))) 
                     << 0x3fU) | (((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r 
                                                                >> 0x3eU)) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh.r 
                                                                  >> 0x3eU)))))) 
                                   << 0x3eU) | (0x3fffffffffffffffULL 
                                                & vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.r))) 
                   >> 0x20U));
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
        = __Vtemp_haf7ac84e__0[4U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
        = __Vtemp_haf7ac84e__0[5U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
        = __Vtemp_haf7ac84e__0[6U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
        = __Vtemp_haf7ac84e__0[7U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
        = __Vtemp_haf7ac84e__0[8U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
        = __Vtemp_haf7ac84e__0[9U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
        = __Vtemp_h43093b15__0[0xaU];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
        = __Vtemp_haf7ac84e__0[0xbU];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
        = __Vtemp_haf7ac84e__0[0xcU];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
        = __Vtemp_haf7ac84e__0[0xdU];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
        = __Vtemp_haf7ac84e__0[0xeU];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
        = __Vtemp_haf7ac84e__0[0xfU];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
        = __Vtemp_haf7ac84e__0[0x10U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
        = __Vtemp_haf7ac84e__0[0x11U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
        = __Vtemp_haf7ac84e__0[0x12U];
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
        = __Vtemp_haf7ac84e__0[0x13U];
    vlSelf->cout = (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 0x1fU);
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__cin 
        = (1U & ((IData)((0x18U == (0x18U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                    >> 5U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__cin 
        = (1U & ((IData)((0x180U == (0x180U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                    >> 9U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800U == (0x1800U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                    >> 0xdU)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__9__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000U == (0x18000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                    >> 0x11U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__11__KET____DOT__f__cin 
        = (1U & ((IData)((0x180000U == (0x180000U & 
                                        vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                    >> 0x15U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__13__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800000U == (0x1800000U 
                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                    >> 0x19U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__15__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000000U == (0x18000000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                    >> 0x1dU)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__17__KET____DOT__f__cin 
        = (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                  & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                     >> 0x1fU)) | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                   >> 1U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__19__KET____DOT__f__cin 
        = (1U & ((IData)((0x18U == (0x18U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                    >> 5U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__21__KET____DOT__f__cin 
        = (1U & ((IData)((0x180U == (0x180U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                    >> 9U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__23__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800U == (0x1800U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                    >> 0xdU)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__25__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000U == (0x18000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                    >> 0x11U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__27__KET____DOT__f__cin 
        = (1U & ((IData)((0x180000U == (0x180000U & 
                                        vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                    >> 0x15U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__29__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800000U == (0x1800000U 
                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                    >> 0x19U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__31__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000000U == (0x18000000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                    >> 0x1dU)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__33__KET____DOT__f__cin 
        = (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                  & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                     >> 0x1fU)) | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                   >> 1U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__35__KET____DOT__f__cin 
        = (1U & ((IData)((0x18U == (0x18U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                    >> 5U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__37__KET____DOT__f__cin 
        = (1U & ((IData)((0x180U == (0x180U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                    >> 9U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__39__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800U == (0x1800U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                    >> 0xdU)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__41__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000U == (0x18000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                    >> 0x11U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__43__KET____DOT__f__cin 
        = (1U & ((IData)((0x180000U == (0x180000U & 
                                        vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                    >> 0x15U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__45__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800000U == (0x1800000U 
                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                    >> 0x19U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__47__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000000U == (0x18000000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                    >> 0x1dU)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__49__KET____DOT__f__cin 
        = (1U & ((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                  & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                     >> 0x1fU)) | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                   >> 1U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__51__KET____DOT__f__cin 
        = (1U & ((IData)((0x18U == (0x18U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 5U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__53__KET____DOT__f__cin 
        = (1U & ((IData)((0x180U == (0x180U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 9U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__55__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800U == (0x1800U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 0xdU)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__57__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000U == (0x18000U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 0x11U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__59__KET____DOT__f__cin 
        = (1U & ((IData)((0x180000U == (0x180000U & 
                                        vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 0x15U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__61__KET____DOT__f__cin 
        = (1U & ((IData)((0x1800000U == (0x1800000U 
                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 0x19U)));
    Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__63__KET____DOT__f__cin 
        = (1U & ((IData)((0x18000000U == (0x18000000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U]))) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                    >> 0x1dU)));
    vlSelf->S = (((QData)((IData)(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__63__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__63__KET____DOT__f__cin)))) 
                  << 0x3fU) | (((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__62__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                    ^ 
                                                    (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                     >> 0x1bU))))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__61__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                               ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__61__KET____DOT__f__cin)))) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__60__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                     ^ 
                                                                     (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                                      >> 0x17U))))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__59__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                     ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__59__KET____DOT__f__cin)))) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__58__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                           ^ 
                                                                           (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                                            >> 0x13U))))) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__57__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                           ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__57__KET____DOT__f__cin)))) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__56__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                                                >> 0xfU))))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__55__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__55__KET____DOT__f__cin)))) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__54__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                                                >> 0xbU))))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__53__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__53__KET____DOT__f__cin)))) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__52__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                                                >> 7U))))) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__51__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__51__KET____DOT__f__cin)))) 
                                                                            << 0x33U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__50__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                                                >> 3U))))) 
                                                                               << 0x32U) 
                                                                              | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__49__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__49__KET____DOT__f__cin)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__48__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 0x1fU)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__47__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__47__KET____DOT__f__cin)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__46__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 0x1bU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__45__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__45__KET____DOT__f__cin)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__44__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 0x17U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__43__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__43__KET____DOT__f__cin)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__42__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 0x13U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__41__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__41__KET____DOT__f__cin)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__40__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__39__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__39__KET____DOT__f__cin)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__38__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__37__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__37__KET____DOT__f__cin)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__36__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 7U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__35__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__35__KET____DOT__f__cin)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__34__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                                                >> 3U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__33__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__33__KET____DOT__f__cin)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__32__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ 
                                                                                (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                >> 0x1fU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__31__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__31__KET____DOT__f__cin)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__30__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1eU) 
                                                                                ^ 
                                                                                (0xc0000000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                << 3U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__29__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__29__KET____DOT__f__cin)) 
                                                                                << 0x1dU) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__28__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1cU) 
                                                                                ^ 
                                                                                (0xf0000000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                << 5U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__27__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__27__KET____DOT__f__cin)) 
                                                                                << 0x1bU) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__26__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x1aU) 
                                                                                ^ 
                                                                                (0xfc000000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                << 7U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__25__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__25__KET____DOT__f__cin)) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__24__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x18U) 
                                                                                ^ 
                                                                                (0xff000000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                << 9U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__23__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__23__KET____DOT__f__cin)) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__22__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x16U) 
                                                                                ^ 
                                                                                (0xffc00000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                << 0xbU)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__21__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__21__KET____DOT__f__cin)) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__20__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x14U) 
                                                                                ^ 
                                                                                (0xfff00000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                << 0xdU)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__19__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__19__KET____DOT__f__cin)) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__18__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x12U) 
                                                                                ^ 
                                                                                (0xfffc0000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                                                << 0xfU)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__17__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__17__KET____DOT__f__cin)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__16__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0x10U) 
                                                                                ^ 
                                                                                (0x10000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 0xfU))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__15__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__15__KET____DOT__f__cin)) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__14__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xeU) 
                                                                                ^ 
                                                                                (0x7c000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 0xdU)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__13__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__13__KET____DOT__f__cin)) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__12__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xcU) 
                                                                                ^ 
                                                                                (0x1ff000U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 0xbU)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__11__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__11__KET____DOT__f__cin)) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__10__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 0xaU) 
                                                                                ^ 
                                                                                (0x7ffc00U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 9U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__9__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__9__KET____DOT__f__cin)) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__8__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 8U) 
                                                                                ^ 
                                                                                (0x1ffff00U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 7U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__cin)) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 6U) 
                                                                                ^ 
                                                                                (0x7ffffc0U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 5U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__cin)) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 4U) 
                                                                                ^ 
                                                                                (0x1ffffff0U 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 3U)))) 
                                                                                | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(Brent_Kung_Adder__DOT____Vcellinp__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__cin)) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 2U) 
                                                                                ^ 
                                                                                (0x7ffffffcU 
                                                                                & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                                                >> 1U)))) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                << 1U) 
                                                                                ^ 
                                                                                (0xfffffffeU 
                                                                                & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U]))) 
                                                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(vlSelf->Cin)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

void VBK_64___024root___ico_sequent__TOP__0(VBK_64___024root* vlSelf);
void VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__0(VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3* vlSelf);
void VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__0(VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3* vlSelf);

void VBK_64___024root___eval_ico(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VBK_64___024root___ico_sequent__TOP__0(vlSelf);
        VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__0((&vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh));
        VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3___ico_sequent__TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__0((&vlSymsp->TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh));
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VBK_64___024root___ico_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBK_64___024root___dump_triggers__act(VBK_64___024root* vlSelf);
#endif  // VL_DEBUG

void VBK_64___024root___eval_triggers__act(VBK_64___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBK_64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBK_64___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (0U != (((((((
                                                   (((((((((((((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U]) 
                                                               | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
                                                                  ^ 
                                                                  vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U])) 
                                                              | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
                                                                 ^ 
                                                                 vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U])) 
                                                             | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U] 
                                                                ^ 
                                                                vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U])) 
                                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
                                                               ^ 
                                                               vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U])) 
                                                           | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
                                                              ^ 
                                                              vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U])) 
                                                          | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
                                                             ^ 
                                                             vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U])) 
                                                         | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
                                                            ^ 
                                                            vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U])) 
                                                        | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
                                                           ^ 
                                                           vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U])) 
                                                       | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
                                                          ^ 
                                                          vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U])) 
                                                      | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU])) 
                                                     | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU])) 
                                                    | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU])) 
                                                   | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU])) 
                                                  | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU])) 
                                                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU])) 
                                                | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U])) 
                                               | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
                                                  ^ 
                                                  vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U])) 
                                              | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
                                                 ^ 
                                                 vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U])) 
                                             | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
                                                ^ vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U])));
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[1U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[2U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[3U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[4U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[5U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[6U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[7U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[8U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[9U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xaU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xbU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xcU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xdU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xeU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0xfU];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x10U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x11U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x12U];
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U] 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp[0x13U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBK_64___024root___dump_triggers__act(vlSelf);
    }
#endif
}
