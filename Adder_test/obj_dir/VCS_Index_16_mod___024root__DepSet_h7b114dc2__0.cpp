// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCS_Index_16_mod.h for the primary calling header

#include "verilated.h"

#include "VCS_Index_16_mod___024root.h"

VL_INLINE_OPT void VCS_Index_16_mod___024root___ico_sequent__TOP__0(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_ha9677518__0;
    CS_Index_16_mod__DOT____VdfgTmp_ha9677518__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h80af2610__0;
    CS_Index_16_mod__DOT____VdfgTmp_h80af2610__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h894b9aaa__0;
    CS_Index_16_mod__DOT____VdfgTmp_h894b9aaa__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6293a59b__0;
    CS_Index_16_mod__DOT____VdfgTmp_h6293a59b__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6a0be069__0;
    CS_Index_16_mod__DOT____VdfgTmp_h6a0be069__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h7e259763__0;
    CS_Index_16_mod__DOT____VdfgTmp_h7e259763__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hcd9e0dc9__0;
    CS_Index_16_mod__DOT____VdfgTmp_hcd9e0dc9__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h2aa7f70a__0;
    CS_Index_16_mod__DOT____VdfgTmp_h2aa7f70a__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h64d84cef__0;
    CS_Index_16_mod__DOT____VdfgTmp_h64d84cef__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h69dd0221__0;
    CS_Index_16_mod__DOT____VdfgTmp_h69dd0221__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h603f5c25__0;
    CS_Index_16_mod__DOT____VdfgTmp_h603f5c25__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h444ca1fa__0;
    CS_Index_16_mod__DOT____VdfgTmp_h444ca1fa__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h027649d8__0;
    CS_Index_16_mod__DOT____VdfgTmp_h027649d8__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6c321e91__0;
    CS_Index_16_mod__DOT____VdfgTmp_h6c321e91__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_he06aba82__0;
    CS_Index_16_mod__DOT____VdfgTmp_he06aba82__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h93d49bae__0;
    CS_Index_16_mod__DOT____VdfgTmp_h93d49bae__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_he9a42461__0;
    CS_Index_16_mod__DOT____VdfgTmp_he9a42461__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h658b89e5__0;
    CS_Index_16_mod__DOT____VdfgTmp_h658b89e5__0 = 0;
    // Body
    vlSelf->__VdfgTmp_hece3181c__0 = (vlSelf->a & vlSelf->b);
    vlSelf->__VdfgTmp_h37e33924__0 = (vlSelf->a ^ vlSelf->b);
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c9e5d1e__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0xbU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                  >> 0xaU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fae920a__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x1bU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x1aU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc2fb61b4__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x2bU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x2aU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2e1d1409__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x3bU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x3bU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x3aU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7cf0a135__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x37U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x37U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x36U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hdce5900a__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x27U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x26U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7d649ec6__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x17U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x16U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h295e9c41__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x19U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x18U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc8dbd7a1__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x29U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x29U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x28U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h264b8873__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x39U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x39U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x38U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2f97e8f7__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x15U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x14U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fc40f81__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x13U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x12U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h8529f84a__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x25U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x24U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h676bd0a5__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x35U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x35U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x34U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h95b74486__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x23U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x22U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h369eafe8__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x33U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x33U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x32U)))));
    vlSelf->CS_Index_16_mod__DOT__pptmp3 = ((1U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp3)) 
                                            | (((IData)(
                                                        (0x3000ULL 
                                                         == 
                                                         (0x3000ULL 
                                                          & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0xc00ULL 
                                                            == 
                                                            (0xc00ULL 
                                                             & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                   << 2U) 
                                                  | ((IData)(
                                                             (0x300ULL 
                                                              == 
                                                              (0x300ULL 
                                                               & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                     << 1U))));
    vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15 = 
        ((1U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15)) 
         | (((IData)((0x30000000ULL == (0x30000000ULL 
                                        & vlSelf->__VdfgTmp_h37e33924__0))) 
             << 7U) | (((IData)((0xc000000ULL == (0xc000000ULL 
                                                  & vlSelf->__VdfgTmp_h37e33924__0))) 
                        << 6U) | (((IData)((0x3000000ULL 
                                            == (0x3000000ULL 
                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
                                   << 5U) | (((IData)(
                                                      (0xc00000ULL 
                                                       == 
                                                       (0xc00000ULL 
                                                        & vlSelf->__VdfgTmp_h37e33924__0))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0x300000ULL 
                                                          == 
                                                          (0x300000ULL 
                                                           & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0xc0000ULL 
                                                             == 
                                                             (0xc0000ULL 
                                                              & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                    << 2U) 
                                                   | ((IData)(
                                                              (0x30000ULL 
                                                               == 
                                                               (0x30000ULL 
                                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                      << 1U))))))));
    vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31 = 
        ((1U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31)) 
         | (((IData)((0x300000000000ULL == (0x300000000000ULL 
                                            & vlSelf->__VdfgTmp_h37e33924__0))) 
             << 7U) | (((IData)((0xc0000000000ULL == 
                                 (0xc0000000000ULL 
                                  & vlSelf->__VdfgTmp_h37e33924__0))) 
                        << 6U) | (((IData)((0x30000000000ULL 
                                            == (0x30000000000ULL 
                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
                                   << 5U) | (((IData)(
                                                      (0xc000000000ULL 
                                                       == 
                                                       (0xc000000000ULL 
                                                        & vlSelf->__VdfgTmp_h37e33924__0))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0x3000000000ULL 
                                                          == 
                                                          (0x3000000000ULL 
                                                           & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0xc00000000ULL 
                                                             == 
                                                             (0xc00000000ULL 
                                                              & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                    << 2U) 
                                                   | ((IData)(
                                                              (0x300000000ULL 
                                                               == 
                                                               (0x300000000ULL 
                                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                      << 1U))))))));
    vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47 = 
        ((1U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47)) 
         | (((IData)((0x3000000000000000ULL == (0x3000000000000000ULL 
                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
             << 7U) | (((IData)((0xc00000000000000ULL 
                                 == (0xc00000000000000ULL 
                                     & vlSelf->__VdfgTmp_h37e33924__0))) 
                        << 6U) | (((IData)((0x300000000000000ULL 
                                            == (0x300000000000000ULL 
                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
                                   << 5U) | (((IData)(
                                                      (0xc0000000000000ULL 
                                                       == 
                                                       (0xc0000000000000ULL 
                                                        & vlSelf->__VdfgTmp_h37e33924__0))) 
                                              << 4U) 
                                             | (((IData)(
                                                         (0x30000000000000ULL 
                                                          == 
                                                          (0x30000000000000ULL 
                                                           & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0xc000000000000ULL 
                                                             == 
                                                             (0xc000000000000ULL 
                                                              & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                    << 2U) 
                                                   | ((IData)(
                                                              (0x3000000000000ULL 
                                                               == 
                                                               (0x3000000000000ULL 
                                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                      << 1U))))))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c0ec1e0__0 
        = (IData)((0x600ULL == (0x600ULL & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h177172a1__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0xcU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                  >> 0xbU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h68264b72__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0xaU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                  >> 9U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd0fdd63f__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x1cU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x1bU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc4b635b0__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x2cU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x2bU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd24c3501__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x3cU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x3cU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x3bU)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5e515a86__0 
        = (IData)((0x1800ULL == (0x1800ULL & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28cbb8e2__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x1aU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x19U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9c4ed94d__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x2aU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x29U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h232807b7__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x3aU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x3aU)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x39U)))));
    CS_Index_16_mod__DOT____VdfgTmp_h6293a59b__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x18U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x18U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x17U)))));
    CS_Index_16_mod__DOT____VdfgTmp_h6a0be069__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x16U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x16U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x15U)))));
    CS_Index_16_mod__DOT____VdfgTmp_h7e259763__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x28U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x28U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x27U)))));
    CS_Index_16_mod__DOT____VdfgTmp_hcd9e0dc9__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x26U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x26U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x25U)))));
    CS_Index_16_mod__DOT____VdfgTmp_h2aa7f70a__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x38U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x38U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x37U)))));
    CS_Index_16_mod__DOT____VdfgTmp_h64d84cef__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x36U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x36U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x35U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2847b83b__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x12U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x11U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h92a0f93a__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x22U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x21U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h38d153ed__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x32U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x32U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x31U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd3fa7237__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x14U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x13U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9418fdc7__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x24U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x23U)))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h60ef5f1a__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 0x34U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                 >> 0x34U)) 
                                        & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                   >> 0x33U)))));
    CS_Index_16_mod__DOT____VdfgTmp_h69dd0221__0 = (IData)(
                                                           (0x60ULL 
                                                            == 
                                                            (0x60ULL 
                                                             & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_he4db5a5d__0 
        = (1U & ((IData)(vlSelf->__VdfgTmp_hece3181c__0) 
                 | ((IData)(vlSelf->__VdfgTmp_h37e33924__0) 
                    & (IData)(vlSelf->cin))));
    CS_Index_16_mod__DOT____VdfgTmp_h603f5c25__0 = (IData)(
                                                           (0x6000ULL 
                                                            == 
                                                            (0x6000ULL 
                                                             & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h4579e8ef__0 
        = (IData)((0x60000ULL == (0x60000ULL & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h17c75439__0 
        = (IData)((0x600000000ULL == (0x600000000ULL 
                                      & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h01bd46dc__0 
        = (IData)((0x6000000000000ULL == (0x6000000000000ULL 
                                          & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb740abc5__0 
        = (IData)((0x180000ULL == (0x180000ULL & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h15e8b2af__0 
        = (IData)((0x1800000000ULL == (0x1800000000ULL 
                                       & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7e0931b2__0 
        = (IData)((0x18000000000000ULL == (0x18000000000000ULL 
                                           & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hba52ce08__0 
        = (IData)((0x1800000ULL == (0x1800000ULL & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h79fa199e__0 
        = (IData)((0x18000000000ULL == (0x18000000000ULL 
                                        & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h72ebac23__0 
        = (IData)((0x180000000000000ULL == (0x180000000000000ULL 
                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb66ac527__0 
        = (IData)((0x18000000ULL == (0x18000000ULL 
                                     & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0c7b4651__0 
        = (IData)((0x180000000000ULL == (0x180000000000ULL 
                                         & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h761a3d38__0 
        = (IData)((0x1800000000000000ULL == (0x1800000000000000ULL 
                                             & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb8536ff5__0 
        = (IData)((0x6000000ULL == (0x6000000ULL & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0e2a7037__0 
        = (IData)((0x60000000000ULL == (0x60000000000ULL 
                                        & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h78d4d452__0 
        = (IData)((0x600000000000000ULL == (0x600000000000000ULL 
                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hbc47ca86__0 
        = (IData)((0x600000ULL == (0x600000ULL & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05df2736__0 
        = (IData)((0x6000000000ULL == (0x6000000000ULL 
                                       & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7be44af5__0 
        = (IData)((0x60000000000000ULL == (0x60000000000000ULL 
                                           & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_16_mod__DOT____VdfgTmp_h444ca1fa__0 = (IData)(
                                                           (0x60000000ULL 
                                                            == 
                                                            (0x60000000ULL 
                                                             & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_16_mod__DOT____VdfgTmp_h027649d8__0 = (IData)(
                                                           (0x600000000000ULL 
                                                            == 
                                                            (0x600000000000ULL 
                                                             & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_16_mod__DOT____VdfgTmp_h6c321e91__0 = (IData)(
                                                           (0x6000000000000000ULL 
                                                            == 
                                                            (0x6000000000000000ULL 
                                                             & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_ha53ae65e__0 
        = (IData)((0x30U == (0x30U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_haf7aa43f__0 
        = (IData)((0xc0U == (0xc0U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28004d75__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h295e9c41__0) 
           | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
               >> 5U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7d649ec6__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c6c34cd__0 
        = (IData)((0x30U == (0x30U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1bf5e584__0 
        = (IData)((0xc0U == (0xc0U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05dbcede__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc8dbd7a1__0) 
           | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
               >> 5U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hdce5900a__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h36efe51d__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h8529f84a__0) 
           | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
               >> 3U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h95b74486__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc1e92429__0 
        = (IData)((0x30U == (0x30U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc340dd58__0 
        = (IData)((0xc0U == (0xc0U & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5ea534e9__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h264b8873__0) 
           | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
               >> 5U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7cf0a135__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h89004fc3__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h676bd0a5__0) 
           | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
               >> 3U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h369eafe8__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hf583e290__0 
        = (1U & (((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                           >> 2U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 2U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 1U)))) 
                 | ((IData)((6ULL == (6ULL & vlSelf->__VdfgTmp_h37e33924__0))) 
                    & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_he4db5a5d__0))));
    CS_Index_16_mod__DOT____VdfgTmp_he06aba82__0 = 
        ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h603f5c25__0) 
         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5e515a86__0));
    vlSelf->CS_Index_16_mod__DOT__tmp_c25 = ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h6293a59b__0) 
                                             | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hba52ce08__0) 
                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6a0be069__0)));
    vlSelf->CS_Index_16_mod__DOT__tmp_c41 = ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h7e259763__0) 
                                             | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h79fa199e__0) 
                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_hcd9e0dc9__0)));
    vlSelf->CS_Index_16_mod__DOT__tmp_c57 = ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h2aa7f70a__0) 
                                             | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h72ebac23__0) 
                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h64d84cef__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h415b4c29__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28cbb8e2__0) 
           | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb8536ff5__0) 
              & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6293a59b__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h21660944__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb8536ff5__0) 
           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hba52ce08__0));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a668320__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9c4ed94d__0) 
           | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0e2a7037__0) 
              & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h7e259763__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1a682327__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0e2a7037__0) 
           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h79fa199e__0));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a87c33e__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h232807b7__0) 
           | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h78d4d452__0) 
              & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h2aa7f70a__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd5223a50__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h78d4d452__0) 
           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h72ebac23__0));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h47971b0c__0 
        = ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h6a0be069__0) 
           | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hbc47ca86__0) 
              & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd3fa7237__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3bc29c1b__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hbc47ca86__0) 
           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb740abc5__0));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h55594d28__0 
        = ((IData)(CS_Index_16_mod__DOT____VdfgTmp_hcd9e0dc9__0) 
           | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05df2736__0) 
              & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9418fdc7__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb15d2439__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05df2736__0) 
           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h15e8b2af__0));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9964639d__0 
        = ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h64d84cef__0) 
           | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7be44af5__0) 
              & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h60ef5f1a__0)));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a3751aa__0 
        = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7be44af5__0) 
           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7e0931b2__0));
    CS_Index_16_mod__DOT____VdfgTmp_h93d49bae__0 = 
        ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h444ca1fa__0) 
         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb66ac527__0));
    CS_Index_16_mod__DOT____VdfgTmp_he9a42461__0 = 
        ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h027649d8__0) 
         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0c7b4651__0));
    CS_Index_16_mod__DOT____VdfgTmp_h658b89e5__0 = 
        ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h6c321e91__0) 
         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h761a3d38__0));
    vlSelf->CS_Index_16_mod__DOT__tmp1 = (1U & ((IData)(
                                                        (vlSelf->__VdfgTmp_hece3181c__0 
                                                         >> 3U)) 
                                                | ((IData)(
                                                           (vlSelf->__VdfgTmp_h37e33924__0 
                                                            >> 3U)) 
                                                   & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hf583e290__0))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hedeb8924__0 
        = (1U & ((((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                            >> 6U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 6U)) 
                                       & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                  >> 5U)))) 
                  | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h69dd0221__0) 
                     & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                 >> 4U)) | ((IData)(
                                                    (vlSelf->__VdfgTmp_h37e33924__0 
                                                     >> 4U)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_hece3181c__0 
                                                       >> 3U)))))) 
                 | (((IData)(CS_Index_16_mod__DOT____VdfgTmp_h69dd0221__0) 
                     & (IData)((0x18ULL == (0x18ULL 
                                            & vlSelf->__VdfgTmp_h37e33924__0)))) 
                    & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hf583e290__0))));
    CS_Index_16_mod__DOT____VdfgTmp_h894b9aaa__0 = 
        ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h93d49bae__0) 
         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h21660944__0));
    CS_Index_16_mod__DOT____VdfgTmp_h80af2610__0 = 
        ((IData)(CS_Index_16_mod__DOT____VdfgTmp_he9a42461__0) 
         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1a682327__0));
    CS_Index_16_mod__DOT____VdfgTmp_ha9677518__0 = 
        ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h658b89e5__0) 
         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd5223a50__0));
    vlSelf->__VdfgTmp_hfbe8729c__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 4U)) 
                                      & (IData)(vlSelf->CS_Index_16_mod__DOT__tmp1));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3e897879__0 
        = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                          >> 7U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                              >> 7U)) 
                                     & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hedeb8924__0))));
    vlSelf->CS_Index_16_mod__DOT__pp_level4 = ((((IData)(CS_Index_16_mod__DOT____VdfgTmp_ha9677518__0) 
                                                 & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a3751aa__0) 
                                                    & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h01bd46dc__0) 
                                                       & (IData)(
                                                                 (0x1800000000000ULL 
                                                                  == 
                                                                  (0x1800000000000ULL 
                                                                   & vlSelf->__VdfgTmp_h37e33924__0)))))) 
                                                << 3U) 
                                               | ((((IData)(CS_Index_16_mod__DOT____VdfgTmp_h80af2610__0) 
                                                    & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb15d2439__0) 
                                                       & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h17c75439__0) 
                                                          & (IData)(
                                                                    (0x180000000ULL 
                                                                     == 
                                                                     (0x180000000ULL 
                                                                      & vlSelf->__VdfgTmp_h37e33924__0)))))) 
                                                   << 2U) 
                                                  | (((IData)(CS_Index_16_mod__DOT____VdfgTmp_h894b9aaa__0) 
                                                      & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3bc29c1b__0) 
                                                         & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h4579e8ef__0) 
                                                            & (IData)(
                                                                      (0x18000ULL 
                                                                       == 
                                                                       (0x18000ULL 
                                                                        & vlSelf->__VdfgTmp_h37e33924__0)))))) 
                                                     << 1U)));
    vlSelf->CS_Index_16_mod__DOT__gnpg_level4 = ((8U 
                                                  & ((((((IData)(
                                                                 (vlSelf->__VdfgTmp_hece3181c__0 
                                                                  >> 0x3eU)) 
                                                         | ((IData)(
                                                                    (vlSelf->__VdfgTmp_h37e33924__0 
                                                                     >> 0x3eU)) 
                                                            & (IData)(
                                                                      (vlSelf->__VdfgTmp_hece3181c__0 
                                                                       >> 0x3dU)))) 
                                                        | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h6c321e91__0) 
                                                           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd24c3501__0))) 
                                                       | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h658b89e5__0) 
                                                          & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a87c33e__0))) 
                                                      | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_ha9677518__0) 
                                                         & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9964639d__0) 
                                                            | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a3751aa__0) 
                                                               & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h38d153ed__0) 
                                                                  | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h01bd46dc__0) 
                                                                     & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x30U)) 
                                                                        | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x30U)) 
                                                                           & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2fU)))))))))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((((((IData)(
                                                                    (vlSelf->__VdfgTmp_hece3181c__0 
                                                                     >> 0x2eU)) 
                                                            | ((IData)(
                                                                       (vlSelf->__VdfgTmp_h37e33924__0 
                                                                        >> 0x2eU)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hece3181c__0 
                                                                          >> 0x2dU)))) 
                                                           | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h027649d8__0) 
                                                              & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc4b635b0__0))) 
                                                          | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_he9a42461__0) 
                                                             & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a668320__0))) 
                                                         | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h80af2610__0) 
                                                            & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h55594d28__0) 
                                                               | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb15d2439__0) 
                                                                  & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h92a0f93a__0) 
                                                                     | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h17c75439__0) 
                                                                        & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x20U)) 
                                                                           | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x20U)) 
                                                                              & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1fU)))))))))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((((((IData)(
                                                                       (vlSelf->__VdfgTmp_hece3181c__0 
                                                                        >> 0x1eU)) 
                                                               | ((IData)(
                                                                          (vlSelf->__VdfgTmp_h37e33924__0 
                                                                           >> 0x1eU)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hece3181c__0 
                                                                             >> 0x1dU)))) 
                                                              | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h444ca1fa__0) 
                                                                 & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd0fdd63f__0))) 
                                                             | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h93d49bae__0) 
                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h415b4c29__0))) 
                                                            | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h894b9aaa__0) 
                                                               & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h47971b0c__0) 
                                                                  | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3bc29c1b__0) 
                                                                     & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2847b83b__0) 
                                                                        | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h4579e8ef__0) 
                                                                           & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x10U)) 
                                                                              | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x10U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xfU)))))))))) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (((((IData)(
                                                                        (vlSelf->__VdfgTmp_hece3181c__0 
                                                                         >> 0xeU)) 
                                                                | ((IData)(
                                                                           (vlSelf->__VdfgTmp_h37e33924__0 
                                                                            >> 0xeU)) 
                                                                   & (IData)(
                                                                             (vlSelf->__VdfgTmp_hece3181c__0 
                                                                              >> 0xdU)))) 
                                                               | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h603f5c25__0) 
                                                                  & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h177172a1__0))) 
                                                              | ((IData)(CS_Index_16_mod__DOT____VdfgTmp_he06aba82__0) 
                                                                 & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h68264b72__0) 
                                                                    | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c0ec1e0__0) 
                                                                       & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 8U)) 
                                                                          | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 8U)) 
                                                                             & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 7U)))))))) 
                                                             | (((IData)(CS_Index_16_mod__DOT____VdfgTmp_he06aba82__0) 
                                                                 & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c0ec1e0__0) 
                                                                    & (IData)(
                                                                              (0x180ULL 
                                                                               == 
                                                                               (0x180ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0))))) 
                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hedeb8924__0)))))));
    vlSelf->CS_Index_16_mod__DOT__c9 = (1U & ((IData)(
                                                      (vlSelf->__VdfgTmp_hece3181c__0 
                                                       >> 8U)) 
                                              | ((IData)(
                                                         (vlSelf->__VdfgTmp_h37e33924__0 
                                                          >> 8U)) 
                                                 & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3e897879__0))));
    vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3c770eb7__0 
        = (1U & (((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                           >> 9U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 9U)) 
                                      & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 8U)))) 
                 | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp3) 
                     >> 1U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3e897879__0))));
    vlSelf->__VdfgTmp_h84dbe7ba__0 = (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp3) 
                                       >> 2U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3c770eb7__0));
}

VL_INLINE_OPT void VCS_Index_16_mod___024root___ico_comb__TOP__0(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ CS_Index_16_mod__DOT__c17;
    CS_Index_16_mod__DOT__c17 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c19;
    CS_Index_16_mod__DOT__c19 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c20;
    CS_Index_16_mod__DOT__c20 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c21;
    CS_Index_16_mod__DOT__c21 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c33;
    CS_Index_16_mod__DOT__c33 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c35;
    CS_Index_16_mod__DOT__c35 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c36;
    CS_Index_16_mod__DOT__c36 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c37;
    CS_Index_16_mod__DOT__c37 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c49;
    CS_Index_16_mod__DOT__c49 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c51;
    CS_Index_16_mod__DOT__c51 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c52;
    CS_Index_16_mod__DOT__c52 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT__c53;
    CS_Index_16_mod__DOT__c53 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h3d2f5f85__0;
    CS_Index_16_mod__DOT____VdfgTmp_h3d2f5f85__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h9d027f40__0;
    CS_Index_16_mod__DOT____VdfgTmp_h9d027f40__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h35f7c117__0;
    CS_Index_16_mod__DOT____VdfgTmp_h35f7c117__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h3c3d9afa__0;
    CS_Index_16_mod__DOT____VdfgTmp_h3c3d9afa__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hba7792c9__0;
    CS_Index_16_mod__DOT____VdfgTmp_hba7792c9__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h50b753a2__0;
    CS_Index_16_mod__DOT____VdfgTmp_h50b753a2__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0;
    CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_h6c6d45a3__0;
    CS_Index_16_mod__DOT____VdfgTmp_h6c6d45a3__0 = 0;
    CData/*0:0*/ CS_Index_16_mod__DOT____VdfgTmp_hae3d79ef__0;
    CS_Index_16_mod__DOT____VdfgTmp_hae3d79ef__0 = 0;
    CData/*0:0*/ __VdfgTmp_h40844550__0;
    __VdfgTmp_h40844550__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1480086d__0;
    __VdfgTmp_h1480086d__0 = 0;
    CData/*0:0*/ __VdfgTmp_h644572da__0;
    __VdfgTmp_h644572da__0 = 0;
    CData/*0:0*/ __VdfgTmp_h50265536__0;
    __VdfgTmp_h50265536__0 = 0;
    CData/*0:0*/ __VdfgTmp_hee476721__0;
    __VdfgTmp_hee476721__0 = 0;
    // Body
    vlSelf->CS_Index_16_mod__DOT__c16n = ((8U & ((IData)(vlSelf->CS_Index_16_mod__DOT__gnpg_level4) 
                                                 | ((IData)(vlSelf->CS_Index_16_mod__DOT__pp_level4) 
                                                    & ((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                                       << 1U)))) 
                                          | ((4U & 
                                              ((IData)(vlSelf->CS_Index_16_mod__DOT__gnpg_level4) 
                                               | ((IData)(vlSelf->CS_Index_16_mod__DOT__pp_level4) 
                                                  & ((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                                     << 1U)))) 
                                             | ((2U 
                                                 & ((IData)(vlSelf->CS_Index_16_mod__DOT__gnpg_level4) 
                                                    | ((IData)(vlSelf->CS_Index_16_mod__DOT__pp_level4) 
                                                       & ((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                                          << 1U)))) 
                                                | (1U 
                                                   & (IData)(vlSelf->CS_Index_16_mod__DOT__gnpg_level4)))));
    vlSelf->cout = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                   >> 0x3fU)) | ((IData)(
                                                         (vlSelf->__VdfgTmp_h37e33924__0 
                                                          >> 0x3fU)) 
                                                 & ((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                                    >> 3U))));
    CS_Index_16_mod__DOT____VdfgTmp_hae3d79ef__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0xfU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                              >> 0xfU)) 
                                     & (IData)(vlSelf->CS_Index_16_mod__DOT__c16n))));
    CS_Index_16_mod__DOT____VdfgTmp_h35f7c117__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x2fU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x2fU)) 
                                      & ((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                         >> 2U))));
    CS_Index_16_mod__DOT____VdfgTmp_h50b753a2__0 = 
        (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                        >> 0x1fU)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                               >> 0x1fU)) 
                                      & ((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                         >> 1U))));
    CS_Index_16_mod__DOT__c17 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0x10U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0x10U)) 
                                          & (IData)(CS_Index_16_mod__DOT____VdfgTmp_hae3d79ef__0))));
    CS_Index_16_mod__DOT____VdfgTmp_h6c6d45a3__0 = 
        (1U & (((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                         >> 0x11U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                  >> 0x10U)))) 
               | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
                   >> 1U) & (IData)(CS_Index_16_mod__DOT____VdfgTmp_hae3d79ef__0))));
    CS_Index_16_mod__DOT__c49 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0x30U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0x30U)) 
                                          & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h35f7c117__0))));
    CS_Index_16_mod__DOT____VdfgTmp_h9d027f40__0 = 
        (1U & (((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                         >> 0x31U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                  >> 0x30U)))) 
               | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
                   >> 1U) & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h35f7c117__0))));
    CS_Index_16_mod__DOT__c33 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0x20U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0x20U)) 
                                          & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h50b753a2__0))));
    CS_Index_16_mod__DOT____VdfgTmp_hba7792c9__0 = 
        (1U & (((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                         >> 0x21U)) | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                  >> 0x20U)))) 
               | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
                   >> 1U) & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h50b753a2__0))));
    CS_Index_16_mod__DOT__c21 = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd3fa7237__0) 
                                 | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb740abc5__0) 
                                    & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2847b83b__0) 
                                       | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h4579e8ef__0) 
                                          & (IData)(CS_Index_16_mod__DOT__c17)))));
    CS_Index_16_mod__DOT__c20 = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fc40f81__0) 
                                 | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
                                     >> 2U) & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6c6d45a3__0)));
    CS_Index_16_mod__DOT__c19 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0x12U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0x12U)) 
                                          & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6c6d45a3__0))));
    CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0 = 
        (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2f97e8f7__0) 
          | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
              >> 3U) & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fc40f81__0))) 
         | ((IData)((0xcU == (0xcU & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15)))) 
            & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6c6d45a3__0)));
    CS_Index_16_mod__DOT__c53 = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h60ef5f1a__0) 
                                 | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7e0931b2__0) 
                                    & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h38d153ed__0) 
                                       | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h01bd46dc__0) 
                                          & (IData)(CS_Index_16_mod__DOT__c49)))));
    CS_Index_16_mod__DOT__c52 = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h369eafe8__0) 
                                 | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
                                     >> 2U) & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h9d027f40__0)));
    CS_Index_16_mod__DOT__c51 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0x32U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0x32U)) 
                                          & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h9d027f40__0))));
    __VdfgTmp_h1480086d__0 = ((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47)))) 
                              & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h9d027f40__0));
    CS_Index_16_mod__DOT__c37 = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9418fdc7__0) 
                                 | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h15e8b2af__0) 
                                    & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h92a0f93a__0) 
                                       | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h17c75439__0) 
                                          & (IData)(CS_Index_16_mod__DOT__c33)))));
    CS_Index_16_mod__DOT__c36 = ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h95b74486__0) 
                                 | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
                                     >> 2U) & (IData)(CS_Index_16_mod__DOT____VdfgTmp_hba7792c9__0)));
    CS_Index_16_mod__DOT__c35 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0x22U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0x22U)) 
                                          & (IData)(CS_Index_16_mod__DOT____VdfgTmp_hba7792c9__0))));
    __VdfgTmp_h50265536__0 = ((IData)((0xcU == (0xcU 
                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31)))) 
                              & (IData)(CS_Index_16_mod__DOT____VdfgTmp_hba7792c9__0));
    __VdfgTmp_hee476721__0 = (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hba52ce08__0) 
                               & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hbc47ca86__0)) 
                              & (IData)(CS_Index_16_mod__DOT__c21));
    __VdfgTmp_h40844550__0 = (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h72ebac23__0) 
                               & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7be44af5__0)) 
                              & (IData)(CS_Index_16_mod__DOT__c53));
    CS_Index_16_mod__DOT____VdfgTmp_h3d2f5f85__0 = 
        ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h89004fc3__0) 
         | (IData)(__VdfgTmp_h1480086d__0));
    __VdfgTmp_h644572da__0 = (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h79fa199e__0) 
                               & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05df2736__0)) 
                              & (IData)(CS_Index_16_mod__DOT__c37));
    CS_Index_16_mod__DOT____VdfgTmp_h3c3d9afa__0 = 
        ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h36efe51d__0) 
         | (IData)(__VdfgTmp_h50265536__0));
    vlSelf->sum = (((QData)((IData)((((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                      >> 3U) ^ (vlSelf->__VdfgTmp_h37e33924__0 
                                                >> 0x3fU)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & ((((((IData)(
                                                                  (vlSelf->__VdfgTmp_hece3181c__0 
                                                                   >> 0x3dU)) 
                                                          | ((IData)(
                                                                     (vlSelf->__VdfgTmp_h37e33924__0 
                                                                      >> 0x3dU)) 
                                                             & (IData)(
                                                                       (vlSelf->__VdfgTmp_hece3181c__0 
                                                                        >> 0x3cU)))) 
                                                         | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
                                                             >> 7U) 
                                                            & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2e1d1409__0))) 
                                                        | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc340dd58__0) 
                                                           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5ea534e9__0))) 
                                                       | (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc340dd58__0) 
                                                           & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc1e92429__0)) 
                                                          & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h3d2f5f85__0))) 
                                                      ^ (IData)(
                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                 >> 0x3eU)))))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd24c3501__0) 
                                                                      | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h761a3d38__0) 
                                                                         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h232807b7__0))) 
                                                                     | (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h761a3d38__0) 
                                                                         & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h78d4d452__0)) 
                                                                        & ((IData)(vlSelf->CS_Index_16_mod__DOT__tmp_c57) 
                                                                           | (IData)(__VdfgTmp_h40844550__0)))) 
                                                                    ^ (IData)(
                                                                              (vlSelf->__VdfgTmp_h37e33924__0 
                                                                               >> 0x3dU)))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2e1d1409__0) 
                                                                         | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
                                                                             >> 6U) 
                                                                            & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h264b8873__0))) 
                                                                        | ((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47)))) 
                                                                           & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7cf0a135__0) 
                                                                               | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
                                                                                >> 4U) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h676bd0a5__0))) 
                                                                              | ((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47)))) 
                                                                                & (IData)(CS_Index_16_mod__DOT__c52))))) 
                                                                       ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x3cU)))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a87c33e__0) 
                                                                           | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd5223a50__0) 
                                                                              & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9964639d__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a3751aa__0) 
                                                                                & (IData)(CS_Index_16_mod__DOT__c51))))) 
                                                                          ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x3bU)))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5ea534e9__0) 
                                                                              | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc1e92429__0) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h89004fc3__0) 
                                                                                | (IData)(__VdfgTmp_h1480086d__0)))) 
                                                                             ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x3aU)))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(vlSelf->CS_Index_16_mod__DOT__tmp_c57) 
                                                                                | (IData)(__VdfgTmp_h40844550__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x39U)))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7cf0a135__0) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c47) 
                                                                                >> 4U) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h3d2f5f85__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x38U)))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x36U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x36U)) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h3d2f5f85__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x37U)))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h3d2f5f85__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x36U)))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c53) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x35U)))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c52) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x34U)))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c51) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x33U)))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h9d027f40__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x32U)))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c49) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x31U)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h35f7c117__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x30U)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                                                                >> 2U) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2fU)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2dU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2dU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2cU)))) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
                                                                                >> 7U) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc2fb61b4__0))) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1bf5e584__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05dbcede__0))) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1bf5e584__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c6c34cd__0)) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h3c3d9afa__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2eU)))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc4b635b0__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0c7b4651__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h9c4ed94d__0))) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0c7b4651__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h0e2a7037__0)) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT__tmp_c41) 
                                                                                | (IData)(__VdfgTmp_h644572da__0)))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2dU)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc2fb61b4__0) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
                                                                                >> 6U) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hc8dbd7a1__0))) 
                                                                                | ((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31)))) 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hdce5900a__0) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
                                                                                >> 4U) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h8529f84a__0))) 
                                                                                | ((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31)))) 
                                                                                & (IData)(CS_Index_16_mod__DOT__c36))))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2cU)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7a668320__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h1a682327__0) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h55594d28__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb15d2439__0) 
                                                                                & (IData)(CS_Index_16_mod__DOT__c35))))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2bU)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h05dbcede__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c6c34cd__0) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h36efe51d__0) 
                                                                                | (IData)(__VdfgTmp_h50265536__0)))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2aU)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__tmp_c41) 
                                                                                | (IData)(__VdfgTmp_h644572da__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x29U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hdce5900a__0) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c31) 
                                                                                >> 4U) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h3c3d9afa__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x28U)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x26U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x26U)) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h3c3d9afa__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x27U)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h3c3d9afa__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x26U)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c37) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x25U)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c36) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x24U)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c35) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x23U)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT____VdfgTmp_hba7792c9__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x22U)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT__c33) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x21U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h50b753a2__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x20U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                                                                << 0x1eU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU))) 
                                                                                | ((0x40000000U 
                                                                                & (((((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1dU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1dU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1cU)))) 
                                                                                << 0x1eU) 
                                                                                | (0xc0000000U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
                                                                                << 0x17U) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fae920a__0) 
                                                                                << 0x1eU)))) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_haf7aa43f__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28004d75__0)) 
                                                                                << 0x1eU)) 
                                                                                | ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_haf7aa43f__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_ha53ae65e__0)) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0)) 
                                                                                << 0x1eU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU))) 
                                                                                | ((0x20000000U 
                                                                                & (((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hd0fdd63f__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb66ac527__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28cbb8e2__0))) 
                                                                                | (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb66ac527__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hb8536ff5__0)) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT__tmp_c25) 
                                                                                | (IData)(__VdfgTmp_hee476721__0)))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1dU))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2fae920a__0) 
                                                                                << 0x1cU) 
                                                                                | (0xf0000000U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
                                                                                << 0x16U) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h295e9c41__0) 
                                                                                << 0x1cU)))) 
                                                                                | (((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15)))) 
                                                                                << 0x1cU) 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7d649ec6__0) 
                                                                                << 0x1cU) 
                                                                                | (0xf0000000U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
                                                                                << 0x18U) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h2f97e8f7__0) 
                                                                                << 0x1cU)))) 
                                                                                | (((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15)))) 
                                                                                & (IData)(CS_Index_16_mod__DOT__c20)) 
                                                                                << 0x1cU)))) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU))) 
                                                                                | ((0x8000000U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h415b4c29__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h21660944__0) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h47971b0c__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3bc29c1b__0) 
                                                                                & (IData)(CS_Index_16_mod__DOT__c19))))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1bU))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h28004d75__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_ha53ae65e__0) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1aU))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT__tmp_c25) 
                                                                                | (IData)(__VdfgTmp_hee476721__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h7d649ec6__0) 
                                                                                << 0x18U) 
                                                                                | (0xff000000U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp_from_c15) 
                                                                                << 0x14U) 
                                                                                & ((IData)(CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0) 
                                                                                << 0x18U)))) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x18U)) 
                                                                                << 0x18U))) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x16U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x16U)) 
                                                                                & (IData)(CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x17U))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(CS_Index_16_mod__DOT____VdfgTmp_h6949e3ed__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(CS_Index_16_mod__DOT__c21) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(CS_Index_16_mod__DOT__c20) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(CS_Index_16_mod__DOT__c19) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(CS_Index_16_mod__DOT____VdfgTmp_h6c6d45a3__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(CS_Index_16_mod__DOT__c17) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(CS_Index_16_mod__DOT____VdfgTmp_hae3d79ef__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__c16n) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xdU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xdU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xcU)))) 
                                                                                << 0xeU) 
                                                                                | (0xffffc000U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp3) 
                                                                                << 0xbU) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c9e5d1e__0) 
                                                                                << 0xeU)))) 
                                                                                | (0xffffc000U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__pptmp3) 
                                                                                << 0xbU) 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h84dbe7ba__0) 
                                                                                << 0xeU)))) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xeU)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h177172a1__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h5e515a86__0) 
                                                                                & ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h68264b72__0) 
                                                                                | ((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c0ec1e0__0) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT__c9))))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h6c9e5d1e__0) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h84dbe7ba__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xaU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3c770eb7__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3c770eb7__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__c9) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_h3e897879__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hedeb8924__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 6U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 5U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 5U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 4U)) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hfbe8729c__0))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 4U)) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hfbe8729c__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT__tmp1) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_hf583e290__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 1U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 1U)) 
                                                                                & (IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_he4db5a5d__0))) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->CS_Index_16_mod__DOT____VdfgTmp_he4db5a5d__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->cin) 
                                                                                ^ (IData)(vlSelf->__VdfgTmp_h37e33924__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

void VCS_Index_16_mod___024root___eval_ico(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCS_Index_16_mod___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VCS_Index_16_mod___024root___ico_comb__TOP__0(vlSelf);
    }
}

void VCS_Index_16_mod___024root___eval_act(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VCS_Index_16_mod___024root___ico_comb__TOP__0(vlSelf);
    }
}

void VCS_Index_16_mod___024root___eval_nba(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_nba\n"); );
}

void VCS_Index_16_mod___024root___eval_triggers__ico(VCS_Index_16_mod___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__ico(VCS_Index_16_mod___024root* vlSelf);
#endif  // VL_DEBUG
void VCS_Index_16_mod___024root___eval_triggers__act(VCS_Index_16_mod___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__act(VCS_Index_16_mod___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_16_mod___024root___dump_triggers__nba(VCS_Index_16_mod___024root* vlSelf);
#endif  // VL_DEBUG

void VCS_Index_16_mod___024root___eval(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCS_Index_16_mod___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCS_Index_16_mod___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/Adder_test/CS_Index_16_mod.v", 6, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCS_Index_16_mod___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCS_Index_16_mod___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCS_Index_16_mod___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/shi/verilog/Adder_test/CS_Index_16_mod.v", 6, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCS_Index_16_mod___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCS_Index_16_mod___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/Adder_test/CS_Index_16_mod.v", 6, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCS_Index_16_mod___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCS_Index_16_mod___024root___eval_debug_assertions(VCS_Index_16_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_16_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_16_mod___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
