// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCS_Index_4_mod.h for the primary calling header

#include "verilated.h"

#include "VCS_Index_4_mod___024root.h"

VL_INLINE_OPT void VCS_Index_4_mod___024root___ico_sequent__TOP__0(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h6c321e91__0;
    CS_Index_4_mod__DOT____VdfgTmp_h6c321e91__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h78d4d452__0;
    CS_Index_4_mod__DOT____VdfgTmp_h78d4d452__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h7be44af5__0;
    CS_Index_4_mod__DOT____VdfgTmp_h7be44af5__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h01bd46dc__0;
    CS_Index_4_mod__DOT____VdfgTmp_h01bd46dc__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h027649d8__0;
    CS_Index_4_mod__DOT____VdfgTmp_h027649d8__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h0e2a7037__0;
    CS_Index_4_mod__DOT____VdfgTmp_h0e2a7037__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h05df2736__0;
    CS_Index_4_mod__DOT____VdfgTmp_h05df2736__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h17c75439__0;
    CS_Index_4_mod__DOT____VdfgTmp_h17c75439__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h444ca1fa__0;
    CS_Index_4_mod__DOT____VdfgTmp_h444ca1fa__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_hb8536ff5__0;
    CS_Index_4_mod__DOT____VdfgTmp_hb8536ff5__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_hbc47ca86__0;
    CS_Index_4_mod__DOT____VdfgTmp_hbc47ca86__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h4579e8ef__0;
    CS_Index_4_mod__DOT____VdfgTmp_h4579e8ef__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h603f5c25__0;
    CS_Index_4_mod__DOT____VdfgTmp_h603f5c25__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h6c0ec1e0__0;
    CS_Index_4_mod__DOT____VdfgTmp_h6c0ec1e0__0 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT____VdfgTmp_h69dd0221__0;
    CS_Index_4_mod__DOT____VdfgTmp_h69dd0221__0 = 0;
    // Body
    vlSelf->__VdfgTmp_hece3181c__0 = (vlSelf->a & vlSelf->b);
    vlSelf->__VdfgTmp_h37e33924__0 = (vlSelf->a ^ vlSelf->b);
    vlSelf->CS_Index_4_mod__DOT____VdfgTmp_he4db5a5d__0 
        = (1U & ((IData)(vlSelf->__VdfgTmp_hece3181c__0) 
                 | ((IData)(vlSelf->__VdfgTmp_h37e33924__0) 
                    & (IData)(vlSelf->cin))));
    CS_Index_4_mod__DOT____VdfgTmp_h6c321e91__0 = (IData)(
                                                          (0x6000000000000000ULL 
                                                           == 
                                                           (0x6000000000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h78d4d452__0 = (IData)(
                                                          (0x600000000000000ULL 
                                                           == 
                                                           (0x600000000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h7be44af5__0 = (IData)(
                                                          (0x60000000000000ULL 
                                                           == 
                                                           (0x60000000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h01bd46dc__0 = (IData)(
                                                          (0x6000000000000ULL 
                                                           == 
                                                           (0x6000000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h027649d8__0 = (IData)(
                                                          (0x600000000000ULL 
                                                           == 
                                                           (0x600000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h0e2a7037__0 = (IData)(
                                                          (0x60000000000ULL 
                                                           == 
                                                           (0x60000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h05df2736__0 = (IData)(
                                                          (0x6000000000ULL 
                                                           == 
                                                           (0x6000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h17c75439__0 = (IData)(
                                                          (0x600000000ULL 
                                                           == 
                                                           (0x600000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h444ca1fa__0 = (IData)(
                                                          (0x60000000ULL 
                                                           == 
                                                           (0x60000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_hb8536ff5__0 = (IData)(
                                                          (0x6000000ULL 
                                                           == 
                                                           (0x6000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_hbc47ca86__0 = (IData)(
                                                          (0x600000ULL 
                                                           == 
                                                           (0x600000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h4579e8ef__0 = (IData)(
                                                          (0x60000ULL 
                                                           == 
                                                           (0x60000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h603f5c25__0 = (IData)(
                                                          (0x6000ULL 
                                                           == 
                                                           (0x6000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h6c0ec1e0__0 = (IData)(
                                                          (0x600ULL 
                                                           == 
                                                           (0x600ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    CS_Index_4_mod__DOT____VdfgTmp_h69dd0221__0 = (IData)(
                                                          (0x60ULL 
                                                           == 
                                                           (0x60ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)));
    vlSelf->CS_Index_4_mod__DOT__pp_level2 = ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h6c321e91__0) 
                                                & (IData)(
                                                          (0x1800000000000000ULL 
                                                           == 
                                                           (0x1800000000000000ULL 
                                                            & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                               << 0xfU) 
                                              | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h78d4d452__0) 
                                                   & (IData)(
                                                             (0x180000000000000ULL 
                                                              == 
                                                              (0x180000000000000ULL 
                                                               & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                  << 0xeU) 
                                                 | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h7be44af5__0) 
                                                      & (IData)(
                                                                (0x18000000000000ULL 
                                                                 == 
                                                                 (0x18000000000000ULL 
                                                                  & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                     << 0xdU) 
                                                    | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h01bd46dc__0) 
                                                         & (IData)(
                                                                   (0x1800000000000ULL 
                                                                    == 
                                                                    (0x1800000000000ULL 
                                                                     & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                        << 0xcU) 
                                                       | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h027649d8__0) 
                                                            & (IData)(
                                                                      (0x180000000000ULL 
                                                                       == 
                                                                       (0x180000000000ULL 
                                                                        & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                           << 0xbU) 
                                                          | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h0e2a7037__0) 
                                                               & (IData)(
                                                                         (0x18000000000ULL 
                                                                          == 
                                                                          (0x18000000000ULL 
                                                                           & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                              << 0xaU) 
                                                             | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h05df2736__0) 
                                                                  & (IData)(
                                                                            (0x1800000000ULL 
                                                                             == 
                                                                             (0x1800000000ULL 
                                                                              & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                 << 9U) 
                                                                | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h17c75439__0) 
                                                                     & (IData)(
                                                                               (0x180000000ULL 
                                                                                == 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                    << 8U) 
                                                                   | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h444ca1fa__0) 
                                                                        & (IData)(
                                                                                (0x18000000ULL 
                                                                                == 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                       << 7U) 
                                                                      | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_hb8536ff5__0) 
                                                                           & (IData)(
                                                                                (0x1800000ULL 
                                                                                == 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                          << 6U) 
                                                                         | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_hbc47ca86__0) 
                                                                              & (IData)(
                                                                                (0x180000ULL 
                                                                                == 
                                                                                (0x180000ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                             << 5U) 
                                                                            | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h4579e8ef__0) 
                                                                                & (IData)(
                                                                                (0x18000ULL 
                                                                                == 
                                                                                (0x18000ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                                << 4U) 
                                                                               | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h603f5c25__0) 
                                                                                & (IData)(
                                                                                (0x1800ULL 
                                                                                == 
                                                                                (0x1800ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(CS_Index_4_mod__DOT____VdfgTmp_h6c0ec1e0__0) 
                                                                                & (IData)(
                                                                                (0x180ULL 
                                                                                == 
                                                                                (0x180ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                                << 2U) 
                                                                                | (((IData)(CS_Index_4_mod__DOT____VdfgTmp_h69dd0221__0) 
                                                                                & (IData)(
                                                                                (0x18ULL 
                                                                                == 
                                                                                (0x18ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0)))) 
                                                                                << 1U)))))))))))))));
    vlSelf->CS_Index_4_mod__DOT__gnpg_level2 = ((0x8000U 
                                                 & ((((IData)(
                                                              (vlSelf->__VdfgTmp_hece3181c__0 
                                                               >> 0x3eU)) 
                                                      | ((IData)(
                                                                 (vlSelf->__VdfgTmp_h37e33924__0 
                                                                  >> 0x3eU)) 
                                                         & (IData)(
                                                                   (vlSelf->__VdfgTmp_hece3181c__0 
                                                                    >> 0x3dU)))) 
                                                     | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h6c321e91__0) 
                                                        & ((IData)(
                                                                   (vlSelf->__VdfgTmp_hece3181c__0 
                                                                    >> 0x3cU)) 
                                                           | ((IData)(
                                                                      (vlSelf->__VdfgTmp_h37e33924__0 
                                                                       >> 0x3cU)) 
                                                              & (IData)(
                                                                        (vlSelf->__VdfgTmp_hece3181c__0 
                                                                         >> 0x3bU)))))) 
                                                    << 0xfU)) 
                                                | ((0x4000U 
                                                    & ((((IData)(
                                                                 (vlSelf->__VdfgTmp_hece3181c__0 
                                                                  >> 0x3aU)) 
                                                         | ((IData)(
                                                                    (vlSelf->__VdfgTmp_h37e33924__0 
                                                                     >> 0x3aU)) 
                                                            & (IData)(
                                                                      (vlSelf->__VdfgTmp_hece3181c__0 
                                                                       >> 0x39U)))) 
                                                        | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h78d4d452__0) 
                                                           & ((IData)(
                                                                      (vlSelf->__VdfgTmp_hece3181c__0 
                                                                       >> 0x38U)) 
                                                              | ((IData)(
                                                                         (vlSelf->__VdfgTmp_h37e33924__0 
                                                                          >> 0x38U)) 
                                                                 & (IData)(
                                                                           (vlSelf->__VdfgTmp_hece3181c__0 
                                                                            >> 0x37U)))))) 
                                                       << 0xeU)) 
                                                   | ((0x2000U 
                                                       & ((((IData)(
                                                                    (vlSelf->__VdfgTmp_hece3181c__0 
                                                                     >> 0x36U)) 
                                                            | ((IData)(
                                                                       (vlSelf->__VdfgTmp_h37e33924__0 
                                                                        >> 0x36U)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hece3181c__0 
                                                                          >> 0x35U)))) 
                                                           | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h7be44af5__0) 
                                                              & ((IData)(
                                                                         (vlSelf->__VdfgTmp_hece3181c__0 
                                                                          >> 0x34U)) 
                                                                 | ((IData)(
                                                                            (vlSelf->__VdfgTmp_h37e33924__0 
                                                                             >> 0x34U)) 
                                                                    & (IData)(
                                                                              (vlSelf->__VdfgTmp_hece3181c__0 
                                                                               >> 0x33U)))))) 
                                                          << 0xdU)) 
                                                      | ((0x1000U 
                                                          & ((((IData)(
                                                                       (vlSelf->__VdfgTmp_hece3181c__0 
                                                                        >> 0x32U)) 
                                                               | ((IData)(
                                                                          (vlSelf->__VdfgTmp_h37e33924__0 
                                                                           >> 0x32U)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hece3181c__0 
                                                                             >> 0x31U)))) 
                                                              | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h01bd46dc__0) 
                                                                 & ((IData)(
                                                                            (vlSelf->__VdfgTmp_hece3181c__0 
                                                                             >> 0x30U)) 
                                                                    | ((IData)(
                                                                               (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x30U)) 
                                                                       & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2fU)))))) 
                                                             << 0xcU)) 
                                                         | ((0x800U 
                                                             & ((((IData)(
                                                                          (vlSelf->__VdfgTmp_hece3181c__0 
                                                                           >> 0x2eU)) 
                                                                  | ((IData)(
                                                                             (vlSelf->__VdfgTmp_h37e33924__0 
                                                                              >> 0x2eU)) 
                                                                     & (IData)(
                                                                               (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2dU)))) 
                                                                 | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h027649d8__0) 
                                                                    & ((IData)(
                                                                               (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2cU)) 
                                                                       | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2cU)) 
                                                                          & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2bU)))))) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & ((((IData)(
                                                                             (vlSelf->__VdfgTmp_hece3181c__0 
                                                                              >> 0x2aU)) 
                                                                     | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2aU)) 
                                                                        & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x29U)))) 
                                                                    | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h0e2a7037__0) 
                                                                       & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x28U)) 
                                                                          | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x28U)) 
                                                                             & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x27U)))))) 
                                                                   << 0xaU)) 
                                                               | ((0x200U 
                                                                   & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x26U)) 
                                                                        | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x26U)) 
                                                                           & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x25U)))) 
                                                                       | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h05df2736__0) 
                                                                          & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x24U)) 
                                                                             | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x24U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x23U)))))) 
                                                                      << 9U)) 
                                                                  | ((0x100U 
                                                                      & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x22U)) 
                                                                           | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x22U)) 
                                                                              & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x21U)))) 
                                                                          | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h17c75439__0) 
                                                                             & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x20U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x20U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1fU)))))) 
                                                                         << 8U)) 
                                                                     | ((0x80U 
                                                                         & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1eU)) 
                                                                              | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1eU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1dU)))) 
                                                                             | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h444ca1fa__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1cU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1cU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1bU)))))) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1aU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1aU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x19U)))) 
                                                                                | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_hb8536ff5__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x18U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x18U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x17U)))))) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x16U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x16U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x15U)))) 
                                                                                | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_hbc47ca86__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x14U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x13U)))))) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x12U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x12U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x11U)))) 
                                                                                | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h4579e8ef__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x10U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x10U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xfU)))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xeU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xeU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xdU)))) 
                                                                                | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h603f5c25__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xcU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xcU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xbU)))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xaU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xaU)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 9U)))) 
                                                                                | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h6c0ec1e0__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 8U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 8U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 7U)))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 6U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 6U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 5U)))) 
                                                                                | ((IData)(CS_Index_4_mod__DOT____VdfgTmp_h69dd0221__0) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 4U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 4U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 3U)))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 2U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 1U)))) 
                                                                                | ((IData)(
                                                                                (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->__VdfgTmp_h37e33924__0))) 
                                                                                & (IData)(vlSelf->CS_Index_4_mod__DOT____VdfgTmp_he4db5a5d__0)))))))))))))))))));
}

VL_INLINE_OPT void VCS_Index_4_mod___024root___ico_comb__TOP__0(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp1;
    CS_Index_4_mod__DOT__tmp1 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp3;
    CS_Index_4_mod__DOT__tmp3 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp5;
    CS_Index_4_mod__DOT__tmp5 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp7;
    CS_Index_4_mod__DOT__tmp7 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp9;
    CS_Index_4_mod__DOT__tmp9 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp11;
    CS_Index_4_mod__DOT__tmp11 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp13;
    CS_Index_4_mod__DOT__tmp13 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp15;
    CS_Index_4_mod__DOT__tmp15 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp17;
    CS_Index_4_mod__DOT__tmp17 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp19;
    CS_Index_4_mod__DOT__tmp19 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp21;
    CS_Index_4_mod__DOT__tmp21 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp23;
    CS_Index_4_mod__DOT__tmp23 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp25;
    CS_Index_4_mod__DOT__tmp25 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp27;
    CS_Index_4_mod__DOT__tmp27 = 0;
    CData/*0:0*/ CS_Index_4_mod__DOT__tmp29;
    CS_Index_4_mod__DOT__tmp29 = 0;
    CData/*0:0*/ __VdfgTmp_h31321c82__0;
    __VdfgTmp_h31321c82__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3afec9a1__0;
    __VdfgTmp_h3afec9a1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h68d8d909__0;
    __VdfgTmp_h68d8d909__0 = 0;
    CData/*0:0*/ __VdfgTmp_h62f1334d__0;
    __VdfgTmp_h62f1334d__0 = 0;
    CData/*0:0*/ __VdfgTmp_h67a33b65__0;
    __VdfgTmp_h67a33b65__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6969477d__0;
    __VdfgTmp_h6969477d__0 = 0;
    CData/*0:0*/ __VdfgTmp_h58481cc4__0;
    __VdfgTmp_h58481cc4__0 = 0;
    CData/*0:0*/ __VdfgTmp_h120cf9fc__0;
    __VdfgTmp_h120cf9fc__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1a5eb45a__0;
    __VdfgTmp_h1a5eb45a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h0cda0074__0;
    __VdfgTmp_h0cda0074__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1fd97a64__0;
    __VdfgTmp_h1fd97a64__0 = 0;
    CData/*0:0*/ __VdfgTmp_h0fe205f8__0;
    __VdfgTmp_h0fe205f8__0 = 0;
    CData/*0:0*/ __VdfgTmp_h7c60474e__0;
    __VdfgTmp_h7c60474e__0 = 0;
    CData/*0:0*/ __VdfgTmp_h4fd793f2__0;
    __VdfgTmp_h4fd793f2__0 = 0;
    CData/*0:0*/ __VdfgTmp_h443ed60b__0;
    __VdfgTmp_h443ed60b__0 = 0;
    SData/*31:0*/ __Vtemp_hbaac462d__0;
    // Body
    __Vtemp_hbaac462d__0 = ((0x8000U & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                        | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              << 1U)))) 
                            | ((0x4000U & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                           | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                              & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                 << 1U)))) 
                               | ((0x2000U & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                              | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                 & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                    << 1U)))) 
                                  | ((0x1000U & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                 | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                    & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                       << 1U)))) 
                                     | ((0x800U & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                   | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                      & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                         << 1U)))) 
                                        | ((0x400U 
                                            & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                               | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                  & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                     << 1U)))) 
                                           | ((0x200U 
                                               & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                  | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                     & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                        << 1U)))) 
                                              | ((0x100U 
                                                  & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                     | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                        & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                           << 1U)))) 
                                                 | ((0x80U 
                                                     & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                        | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                              << 1U)))) 
                                                    | ((0x40U 
                                                        & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                           | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                              & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                 << 1U)))) 
                                                       | ((0x20U 
                                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                              | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                                 & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                    << 1U)))) 
                                                          | ((0x10U 
                                                              & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                                 | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                                    & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                       << 1U)))) 
                                                             | ((8U 
                                                                 & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                                    | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                                       & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                          << 1U)))) 
                                                                | ((4U 
                                                                    & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                                       | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                                          & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                             << 1U)))) 
                                                                   | ((2U 
                                                                       & ((IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2) 
                                                                          | ((IData)(vlSelf->CS_Index_4_mod__DOT__pp_level2) 
                                                                             & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 1U)))) 
                                                                      | (1U 
                                                                         & (IData)(vlSelf->CS_Index_4_mod__DOT__gnpg_level2)))))))))))))))));
    vlSelf->CS_Index_4_mod__DOT__c4n = __Vtemp_hbaac462d__0;
    vlSelf->cout = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                   >> 0x3fU)) | ((IData)(
                                                         (vlSelf->__VdfgTmp_h37e33924__0 
                                                          >> 0x3fU)) 
                                                 & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                    >> 0xfU))));
    CS_Index_4_mod__DOT__tmp29 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x3bU)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x3bU)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 0xeU))));
    CS_Index_4_mod__DOT__tmp27 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x37U)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x37U)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 0xdU))));
    CS_Index_4_mod__DOT__tmp25 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x33U)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x33U)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 0xcU))));
    CS_Index_4_mod__DOT__tmp23 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x2fU)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x2fU)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 0xbU))));
    CS_Index_4_mod__DOT__tmp21 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x2bU)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x2bU)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 0xaU))));
    CS_Index_4_mod__DOT__tmp19 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x27U)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x27U)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 9U))));
    CS_Index_4_mod__DOT__tmp17 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x23U)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x23U)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 8U))));
    CS_Index_4_mod__DOT__tmp15 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x1fU)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x1fU)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 7U))));
    CS_Index_4_mod__DOT__tmp13 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x1bU)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x1bU)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 6U))));
    CS_Index_4_mod__DOT__tmp11 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                 >> 0x17U)) 
                                        | ((IData)(
                                                   (vlSelf->__VdfgTmp_h37e33924__0 
                                                    >> 0x17U)) 
                                           & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                              >> 5U))));
    CS_Index_4_mod__DOT__tmp9 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0x13U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0x13U)) 
                                          & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                             >> 4U))));
    CS_Index_4_mod__DOT__tmp7 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0xfU)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0xfU)) 
                                          & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                             >> 3U))));
    CS_Index_4_mod__DOT__tmp5 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 0xbU)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 0xbU)) 
                                          & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                             >> 2U))));
    CS_Index_4_mod__DOT__tmp3 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 7U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 7U)) 
                                          & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                             >> 1U))));
    CS_Index_4_mod__DOT__tmp1 = (1U & ((IData)((vlSelf->__VdfgTmp_hece3181c__0 
                                                >> 3U)) 
                                       | ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                                   >> 3U)) 
                                          & (IData)(vlSelf->CS_Index_4_mod__DOT__c4n))));
    __VdfgTmp_h31321c82__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x3cU)) & (IData)(CS_Index_4_mod__DOT__tmp29));
    __VdfgTmp_h3afec9a1__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x38U)) & (IData)(CS_Index_4_mod__DOT__tmp27));
    __VdfgTmp_h68d8d909__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x34U)) & (IData)(CS_Index_4_mod__DOT__tmp25));
    __VdfgTmp_h62f1334d__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x30U)) & (IData)(CS_Index_4_mod__DOT__tmp23));
    __VdfgTmp_h67a33b65__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x2cU)) & (IData)(CS_Index_4_mod__DOT__tmp21));
    __VdfgTmp_h6969477d__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x28U)) & (IData)(CS_Index_4_mod__DOT__tmp19));
    __VdfgTmp_h58481cc4__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x24U)) & (IData)(CS_Index_4_mod__DOT__tmp17));
    __VdfgTmp_h120cf9fc__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x20U)) & (IData)(CS_Index_4_mod__DOT__tmp15));
    __VdfgTmp_h1a5eb45a__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x1cU)) & (IData)(CS_Index_4_mod__DOT__tmp13));
    __VdfgTmp_h0cda0074__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x18U)) & (IData)(CS_Index_4_mod__DOT__tmp11));
    __VdfgTmp_h1fd97a64__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x14U)) & (IData)(CS_Index_4_mod__DOT__tmp9));
    __VdfgTmp_h0fe205f8__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0x10U)) & (IData)(CS_Index_4_mod__DOT__tmp7));
    __VdfgTmp_h7c60474e__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 0xcU)) & (IData)(CS_Index_4_mod__DOT__tmp5));
    __VdfgTmp_h4fd793f2__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 8U)) & (IData)(CS_Index_4_mod__DOT__tmp3));
    __VdfgTmp_h443ed60b__0 = ((IData)((vlSelf->__VdfgTmp_h37e33924__0 
                                       >> 4U)) & (IData)(CS_Index_4_mod__DOT__tmp1));
    vlSelf->sum = (((QData)((IData)((((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                      >> 0xfU) ^ (vlSelf->__VdfgTmp_h37e33924__0 
                                                  >> 0x3fU)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & ((IData)(
                                                              (vlSelf->__VdfgTmp_h37e33924__0 
                                                               >> 0x3eU)) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelf->__VdfgTmp_hece3181c__0 
                                                                >> 0x3dU)) 
                                                       | ((IData)(
                                                                  (vlSelf->__VdfgTmp_h37e33924__0 
                                                                   >> 0x3dU)) 
                                                          & ((IData)(
                                                                     (vlSelf->__VdfgTmp_hece3181c__0 
                                                                      >> 0x3cU)) 
                                                             | (IData)(__VdfgTmp_h31321c82__0)))))))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & (((IData)(
                                                                             (vlSelf->__VdfgTmp_hece3181c__0 
                                                                              >> 0x3cU)) 
                                                                     | (IData)(__VdfgTmp_h31321c82__0)) 
                                                                    ^ (IData)(
                                                                              (vlSelf->__VdfgTmp_h37e33924__0 
                                                                               >> 0x3dU)))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(CS_Index_4_mod__DOT__tmp29) 
                                                                       ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x3cU)))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                           >> 0xeU) 
                                                                          ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x3bU)))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x3aU)) 
                                                                             ^ 
                                                                             ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x39U)) 
                                                                              | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x39U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x38U)) 
                                                                                | (IData)(__VdfgTmp_h3afec9a1__0)))))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x38U)) 
                                                                                | (IData)(__VdfgTmp_h3afec9a1__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x39U)))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(CS_Index_4_mod__DOT__tmp27) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x38U)))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                >> 0xdU) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x37U)))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x36U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x35U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x35U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x34U)) 
                                                                                | (IData)(__VdfgTmp_h68d8d909__0)))))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x34U)) 
                                                                                | (IData)(__VdfgTmp_h68d8d909__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x35U)))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_4_mod__DOT__tmp25) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x34U)))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                >> 0xcU) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x33U)))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x32U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x31U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x31U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x30U)) 
                                                                                | (IData)(__VdfgTmp_h62f1334d__0)))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x30U)) 
                                                                                | (IData)(__VdfgTmp_h62f1334d__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x31U)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_4_mod__DOT__tmp23) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x30U)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                >> 0xbU) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2fU)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2eU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2dU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2dU)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2cU)) 
                                                                                | (IData)(__VdfgTmp_h67a33b65__0)))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x2cU)) 
                                                                                | (IData)(__VdfgTmp_h67a33b65__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2dU)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_4_mod__DOT__tmp21) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2cU)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                >> 0xaU) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2bU)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x2aU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x29U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x29U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x28U)) 
                                                                                | (IData)(__VdfgTmp_h6969477d__0)))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x28U)) 
                                                                                | (IData)(__VdfgTmp_h6969477d__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x29U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_4_mod__DOT__tmp19) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x28U)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                >> 9U) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x27U)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x26U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x25U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x25U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x24U)) 
                                                                                | (IData)(__VdfgTmp_h58481cc4__0)))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x24U)) 
                                                                                | (IData)(__VdfgTmp_h58481cc4__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x25U)))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_4_mod__DOT__tmp17) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x24U)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                >> 8U) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x23U)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x22U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x21U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x21U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x20U)) 
                                                                                | (IData)(__VdfgTmp_h120cf9fc__0)))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x20U)) 
                                                                                | (IData)(__VdfgTmp_h120cf9fc__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x21U)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(CS_Index_4_mod__DOT__tmp15) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x20U)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 0x18U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU))) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1eU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1dU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1dU)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1cU)) 
                                                                                | (IData)(__VdfgTmp_h1a5eb45a__0))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x1cU)) 
                                                                                | (IData)(__VdfgTmp_h1a5eb45a__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1dU))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(CS_Index_4_mod__DOT__tmp13) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1cU))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((0xf8000000U 
                                                                                & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 0x15U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU))) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x1aU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x19U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x19U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x18U)) 
                                                                                | (IData)(__VdfgTmp_h0cda0074__0))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x18U)) 
                                                                                | (IData)(__VdfgTmp_h0cda0074__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(CS_Index_4_mod__DOT__tmp11) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x18U))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((0xff800000U 
                                                                                & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 0x12U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x17U)) 
                                                                                << 0x17U))) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x16U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x15U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x15U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x14U)) 
                                                                                | (IData)(__VdfgTmp_h1fd97a64__0))))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x14U)) 
                                                                                | (IData)(__VdfgTmp_h1fd97a64__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(CS_Index_4_mod__DOT__tmp9) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((0xfff80000U 
                                                                                & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 0xfU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x13U)) 
                                                                                << 0x13U))) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x12U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x11U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x11U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x10U)) 
                                                                                | (IData)(__VdfgTmp_h0fe205f8__0))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0x10U)) 
                                                                                | (IData)(__VdfgTmp_h0fe205f8__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(CS_Index_4_mod__DOT__tmp7) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((0xffff8000U 
                                                                                & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 0xcU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xfU)) 
                                                                                << 0xfU))) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xeU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xdU)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xdU)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xcU)) 
                                                                                | (IData)(__VdfgTmp_h7c60474e__0))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 0xcU)) 
                                                                                | (IData)(__VdfgTmp_h7c60474e__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(CS_Index_4_mod__DOT__tmp5) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 9U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xbU)) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 0xaU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 9U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 9U)) 
                                                                                & ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 8U)) 
                                                                                | (IData)(__VdfgTmp_h4fd793f2__0))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 8U)) 
                                                                                | (IData)(__VdfgTmp_h4fd793f2__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(CS_Index_4_mod__DOT__tmp3) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & ((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                << 6U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 7U)) 
                                                                                << 7U))) 
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
                                                                                | (IData)(__VdfgTmp_h443ed60b__0))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 4U)) 
                                                                                | (IData)(__VdfgTmp_h443ed60b__0)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(CS_Index_4_mod__DOT__tmp1) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT__c4n) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 2U)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelf->__VdfgTmp_hece3181c__0 
                                                                                >> 1U)) 
                                                                                | ((IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 1U)) 
                                                                                & (IData)(vlSelf->CS_Index_4_mod__DOT____VdfgTmp_he4db5a5d__0)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->CS_Index_4_mod__DOT____VdfgTmp_he4db5a5d__0) 
                                                                                ^ (IData)(
                                                                                (vlSelf->__VdfgTmp_h37e33924__0 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->cin) 
                                                                                ^ (IData)(vlSelf->__VdfgTmp_h37e33924__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

void VCS_Index_4_mod___024root___eval_ico(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCS_Index_4_mod___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VCS_Index_4_mod___024root___ico_comb__TOP__0(vlSelf);
    }
}

void VCS_Index_4_mod___024root___eval_act(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VCS_Index_4_mod___024root___ico_comb__TOP__0(vlSelf);
    }
}

void VCS_Index_4_mod___024root___eval_nba(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval_nba\n"); );
}

void VCS_Index_4_mod___024root___eval_triggers__ico(VCS_Index_4_mod___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_4_mod___024root___dump_triggers__ico(VCS_Index_4_mod___024root* vlSelf);
#endif  // VL_DEBUG
void VCS_Index_4_mod___024root___eval_triggers__act(VCS_Index_4_mod___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_4_mod___024root___dump_triggers__act(VCS_Index_4_mod___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCS_Index_4_mod___024root___dump_triggers__nba(VCS_Index_4_mod___024root* vlSelf);
#endif  // VL_DEBUG

void VCS_Index_4_mod___024root___eval(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval\n"); );
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
        VCS_Index_4_mod___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCS_Index_4_mod___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/Adder_test/CS_Index_4_mod.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCS_Index_4_mod___024root___eval_ico(vlSelf);
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
            VCS_Index_4_mod___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCS_Index_4_mod___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/shi/verilog/Adder_test/CS_Index_4_mod.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCS_Index_4_mod___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCS_Index_4_mod___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/Adder_test/CS_Index_4_mod.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCS_Index_4_mod___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCS_Index_4_mod___024root___eval_debug_assertions(VCS_Index_4_mod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCS_Index_4_mod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCS_Index_4_mod___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
