// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim___024root___eval_static(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_static\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__toggle_src = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__toggle_src = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__toggle_src = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vsim___024root___eval_initial__TOP(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_initial(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim___024root___eval_initial__TOP(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsim___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__0(Vsim___024root* vlSelf);

VL_ATTR_COLD bool Vsim___024root___eval_stl(Vsim___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_stl\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsim___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vsim___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vsim___024root___eval_dump_triggers__stl(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_dump_triggers__stl\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsim___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___eval_dump_triggers__ico(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_dump_triggers__ico\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsim___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___eval_dump_triggers__act(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_dump_triggers__act\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vsim___024root___eval_dump_triggers__nba(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_dump_triggers__nba\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsim___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vsim___024root___eval_dump_triggers__obs(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_dump_triggers__obs\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsim___024root___eval_dump_triggers__react(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_dump_triggers__react\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsim___024root___eval_final(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_final\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsim___024root___eval_initial__TOP(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial__TOP\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[0U] = 0x0160U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[1U] = 0x0180U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[2U] = 0x01a0U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[3U] = 0x01c0U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[4U] = 0x01e0U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[5U] = 0x0200U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[6U] = 0x0220U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[7U] = 0x0240U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_y[0U] = 0x0130U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_y[1U] = 0x0190U;
    VL_WRITEF_NX("Create rom_sync with init file 'font_unscii_8x8_latin_uc.mem'.\n",0);
    VL_READMEM_N(true, 8, 512, 0, "font_unscii_8x8_latin_uc.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_sync with init file 'text_greet.mem'.\n",0);
    VL_READMEM_N(true, 7, 512, 0, "text_greet.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom__DOT__memory)
                 , 0, ~0ULL);
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[0U] = 0x0020U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[1U] = 0x0040U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[2U] = 0x0060U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[3U] = 0x0080U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[4U] = 0x00a0U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[5U] = 0x00c0U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[6U] = 0x00e0U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[7U] = 0x0100U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_y[0U] = 0x0130U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_y[1U] = 0x0190U;
    VL_WRITEF_NX("Create rom_sync with init file 'font_unscii_8x8_latin_uc.mem'.\n",0);
    VL_READMEM_N(true, 8, 512, 0, "font_unscii_8x8_latin_uc.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_sync with init file 'text_greet.mem'.\n",0);
    VL_READMEM_N(true, 7, 512, 0, "text_greet.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom__DOT__memory)
                 , 0, ~0ULL);
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[0U] = 0x0160U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[1U] = 0x0180U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[2U] = 0x01a0U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[3U] = 0x01c0U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[4U] = 0x01e0U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[5U] = 0x0200U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[6U] = 0x0220U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[7U] = 0x0240U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_y[0U] = 0x0040U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_y[1U] = 0x00a0U;
    VL_WRITEF_NX("Create rom_sync with init file 'font_unscii_8x8_latin_uc.mem'.\n",0);
    VL_READMEM_N(true, 8, 512, 0, "font_unscii_8x8_latin_uc.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_sync with init file 'text_greet.mem'.\n",0);
    VL_READMEM_N(true, 7, 512, 0, "text_greet.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom__DOT__memory)
                 , 0, ~0ULL);
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[0U] = 0x0020U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[1U] = 0x0040U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[2U] = 0x0060U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[3U] = 0x0080U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[4U] = 0x00a0U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[5U] = 0x00c0U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[6U] = 0x00e0U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[7U] = 0x0100U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_y[0U] = 0x0040U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_y[1U] = 0x00a0U;
    VL_WRITEF_NX("Create rom_sync with init file 'font_unscii_8x8_latin_uc.mem'.\n",0);
    VL_READMEM_N(true, 8, 512, 0, "font_unscii_8x8_latin_uc.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_sync with init file 'text_greet.mem'.\n",0);
    VL_READMEM_N(true, 7, 512, 0, "text_greet.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_sync with init file 'outline-font-32x32.mem'.\n",0);
    VL_READMEM_N(true, 32, 2048, 0, "outline-font-32x32.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__glyph_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_async with init file 'sine_table_64x8.mem'.\n",0);
    VL_READMEM_N(true, 8, 64, 0, "sine_table_64x8.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_sync with init file 'sinescroll_greet.mem'.\n",0);
    VL_READMEM_N(true, 8, 71, 0, "sinescroll_greet.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Load init file 'sweetie16_4b_0.mem' into bram_sdp.\n",0);
    VL_READMEM_N(true, 12, 16, 0, "sweetie16_4b_0.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__clut_instance__DOT__bram_clut__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Create rom_async with init file 'sine_table_64x8.mem'.\n",0);
    VL_READMEM_N(true, 8, 64, 0, "sine_table_64x8.mem"s
                 ,  &(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsim___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__0(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id = 0;
    // Body
    vlSelfRef.v_sync = (1U & (~ (VL_LTES_III(32, 0x000001eaU, 
                                             ((IData)(0x0000020dU) 
                                              + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))) 
                                 & VL_GTS_III(32, 0x000001ecU, 
                                              ((IData)(0x0000020dU) 
                                               + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))))));
    vlSelfRef.h_sync = (1U & (~ (VL_LTES_III(32, 0x00000290U, 
                                             ((IData)(0x00000320U) 
                                              + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) 
                                 & VL_GTS_III(32, 0x000002f0U, 
                                              ((IData)(0x00000320U) 
                                               + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))))));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id 
        = (0x000000ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_id) 
                          + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_offs)));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_en_in 
        = ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_line) 
           & ((0U == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line)) 
              & (0x0140U > (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx))));
    vlSelfRef.sim__DOT__source__DOT__stars__DOT__starlight 
        = (0x0000000fU & ((0x001fffffU == (0x00000fffU 
                                           | vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg))
                           ? (vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg 
                              >> 4U) : ((0x001fffffU 
                                         == (0x00000fffU 
                                             | vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg))
                                         ? (vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg 
                                            >> 4U) : 
                                        ((- (IData)(
                                                    (0x001fffffU 
                                                     == 
                                                     (0x000007ffU 
                                                      | vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg)))) 
                                         & (vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg 
                                            >> 4U)))));
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id 
        = (0x000000ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id) 
                          + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs)));
    vlSelfRef.video_enable = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
                              & (VL_GTS_III(32, 0x00000280U, 
                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
                                 & (VL_LTES_III(32, 0U, 
                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
                                    & VL_GTS_III(32, 0x000001e0U, 
                                                 VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))))));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.line_start = (0xffffff60U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_pix 
        = (((((((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line) 
                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox))) 
               << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                          & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line) 
                             >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox))) 
                         << 2U)) | ((((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                      & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line) 
                                         >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox))) 
                                     << 1U) | ((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox))))) 
            << 4U) | (((((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line) 
                            >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox))) 
                        << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                   & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line) 
                                      >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox))) 
                                  << 2U)) | ((((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox))) 
                                              << 1U) 
                                             | ((5U 
                                                 == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line) 
                                                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox))))));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_pix 
        = (((((((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line) 
                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox))) 
               << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                          & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line) 
                             >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox))) 
                         << 2U)) | ((((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                      & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line) 
                                         >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox))) 
                                     << 1U) | ((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox))))) 
            << 4U) | (((((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line) 
                            >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox))) 
                        << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                   & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line) 
                                      >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox))) 
                                  << 2U)) | ((((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox))) 
                                              << 1U) 
                                             | ((5U 
                                                 == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line) 
                                                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox))))));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_pix 
        = (((((((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line) 
                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox))) 
               << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                          & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line) 
                             >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox))) 
                         << 2U)) | ((((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                      & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line) 
                                         >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox))) 
                                     << 1U) | ((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox))))) 
            << 4U) | (((((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line) 
                            >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox))) 
                        << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                   & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line) 
                                      >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox))) 
                                  << 2U)) | ((((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox))) 
                                              << 1U) 
                                             | ((5U 
                                                 == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line) 
                                                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox))))));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_pix 
        = (((((((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line) 
                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox))) 
               << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                          & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line) 
                             >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox))) 
                         << 2U)) | ((((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                      & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line) 
                                         >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox))) 
                                     << 1U) | ((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox))))) 
            << 4U) | (((((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line) 
                            >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox))) 
                        << 3U) | (((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                   & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line) 
                                      >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox))) 
                                  << 2U)) | ((((5U 
                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                               & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line) 
                                                  >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox))) 
                                              << 1U) 
                                             | ((5U 
                                                 == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                                & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line) 
                                                   >> (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox))))));
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data 
        = ((0x40U == (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
            ? 0x00000100U : ((0xc0U == (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                              ? 0x0000ff00U : (0x0000ffffU 
                                               & ((0x00000080U 
                                                   & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                                                   ? 
                                                  (- vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory
                                                   [
                                                   (0x0000003fU 
                                                    & ((0x00000040U 
                                                        & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                                                        ? 
                                                       (- (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                                                        : (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id)))])
                                                   : vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory
                                                  [
                                                  (0x0000003fU 
                                                   & ((0x00000040U 
                                                       & (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                                                       ? 
                                                      (- (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id))
                                                       : (IData)(sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id)))]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_pix_colr) 
                                                 & (- (IData)(
                                                              ((IData)(vlSelfRef.video_enable) 
                                                               & (VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
                                                                  & (VL_LTES_III(32, 0x0000003cU, 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
                                                                     & (VL_GTS_III(32, 0x000001a4U, 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
                                                                        & VL_GTS_III(32, 0x00000280U, 
                                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))))))))));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr = 0U;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0xfeU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | (0xfffffff2U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[0U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[0U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[0U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[0U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0xfdU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | ((0xfffffff3U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 1U));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[1U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[1U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[1U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[1U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0xfbU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | ((0xfffffff4U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 2U));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[2U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[2U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[2U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[2U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0xf7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | ((0xfffffff5U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 3U));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[3U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[3U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[3U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[3U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0xefU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | ((0xfffffff6U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 4U));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[4U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[4U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[4U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[4U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0xdfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 5U));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[5U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[5U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[5U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[5U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0xbfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | ((0xfffffff8U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 6U));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[6U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[6U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[6U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[6U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma 
        = ((0x7fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma)) 
           | ((0xfffffff9U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 7U));
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[7U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[7U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[7U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[7U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr = 0U;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0xfeU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | (0xfffffff2U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[0U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[0U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[0U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[0U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0xfdU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | ((0xfffffff3U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 1U));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[1U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[1U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[1U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[1U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0xfbU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | ((0xfffffff4U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 2U));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[2U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[2U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[2U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[2U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0xf7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | ((0xfffffff5U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 3U));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[3U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[3U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[3U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[3U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0xefU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | ((0xfffffff6U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 4U));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[4U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[4U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[4U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[4U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0xdfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 5U));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[5U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[5U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[5U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[5U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0xbfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | ((0xfffffff8U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 6U));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[6U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[6U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[6U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[6U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma 
        = ((0x7fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma)) 
           | ((0xfffffff9U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 7U));
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[7U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[7U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[7U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[7U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr = 0U;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0xfeU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | (0xfffffff2U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[0U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[0U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[0U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[0U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0xfdU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | ((0xfffffff3U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 1U));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[1U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[1U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[1U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[1U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0xfbU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | ((0xfffffff4U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 2U));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[2U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[2U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[2U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[2U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0xf7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | ((0xfffffff5U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 3U));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[3U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[3U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[3U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[3U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0xefU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | ((0xfffffff6U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 4U));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[4U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[4U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[4U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[4U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0xdfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 5U));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[5U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[5U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[5U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[5U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0xbfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | ((0xfffffff8U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 6U));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[6U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[6U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[6U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[6U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma 
        = ((0x7fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma)) 
           | ((0xfffffff9U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 7U));
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[7U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[7U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[7U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[7U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr = 0U;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0xfeU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | (0xfffffff2U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[0U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[0U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[0U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[0U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0xfdU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | ((0xfffffff3U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 1U));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[1U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[1U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[1U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[1U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0xfbU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | ((0xfffffff4U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 2U));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[2U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[2U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[2U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[2U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0xf7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | ((0xfffffff5U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 3U));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[3U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[3U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[3U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[3U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0xefU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | ((0xfffffff6U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 4U));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[4U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[4U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[4U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[4U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0xdfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 5U));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[5U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[5U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[5U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[5U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0xbfU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | ((0xfffffff8U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 6U));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[6U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[6U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[6U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[6U]));
    }
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma 
        = ((0x7fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma)) 
           | ((0xfffffff9U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
              << 7U));
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[7U] 
        = (0x000001ffU & ((vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[7U] 
                           - (IData)(0x00000020U)) 
                          << 3U));
    if ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr 
            = (0x000001ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[7U]) 
                              + vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[7U]));
    }
    vlSelfRef.frame_start = ((0xffffffd3U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
                             & (IData)(vlSelfRef.line_start));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (1U 
                                                & (- (IData)(
                                                             (VL_GTS_III(32, 0x000000a0U, 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                               ? 
                                                              (((IData)(vlSelfRef.beam_y) 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_y[0U]) 
                                                               & (IData)(vlSelfRef.line_start))
                                                               : 
                                                              (((IData)(vlSelfRef.beam_y) 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_y[1U]) 
                                                               & (IData)(vlSelfRef.line_start))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (1U 
                                                & (- (IData)(
                                                             (VL_GTS_III(32, 0x000000a0U, 
                                                                         VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                               ? 
                                                              (((IData)(vlSelfRef.beam_y) 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_y[0U]) 
                                                               & (IData)(vlSelfRef.line_start))
                                                               : 
                                                              (((IData)(vlSelfRef.beam_y) 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_y[1U]) 
                                                               & (IData)(vlSelfRef.line_start))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (1U 
                                                 & (- (IData)(
                                                              (VL_GTS_III(32, 0x00000190U, 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                                ? 
                                                               (((IData)(vlSelfRef.beam_y) 
                                                                 == vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_y[0U]) 
                                                                & (IData)(vlSelfRef.line_start))
                                                                : 
                                                               (((IData)(vlSelfRef.beam_y) 
                                                                 == vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_y[1U]) 
                                                                & (IData)(vlSelfRef.line_start))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (1U 
                                                 & (- (IData)(
                                                              (VL_GTS_III(32, 0x00000190U, 
                                                                          VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                                ? 
                                                               (((IData)(vlSelfRef.beam_y) 
                                                                 == vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_y[0U]) 
                                                                & (IData)(vlSelfRef.line_start))
                                                                : 
                                                               (((IData)(vlSelfRef.beam_y) 
                                                                 == vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_y[1U]) 
                                                                & (IData)(vlSelfRef.line_start))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_pix)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_pix)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_pix)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_pix)))));
}

bool Vsim___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( reset)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vsim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___ctor_var_reset(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->video_enable = 0;
    vlSelf->v_sync = 0;
    vlSelf->h_sync = 0;
    vlSelf->frame_start = 0;
    vlSelf->line_start = 0;
    vlSelf->beam_x = 0;
    vlSelf->beam_y = 0;
    vlSelf->red = 0;
    vlSelf->green = 0;
    vlSelf->blue = 0;
    vlSelf->sim__DOT__source__DOT__st_red = 0;
    vlSelf->sim__DOT__source__DOT__rb_red = 0;
    vlSelf->sim__DOT__source__DOT__rb_green = 0;
    vlSelf->sim__DOT__source__DOT__rb_blue = 0;
    vlSelf->sim__DOT__source__DOT__te1_red = 0;
    vlSelf->sim__DOT__source__DOT__te1_green = 0;
    vlSelf->sim__DOT__source__DOT__te1_blue = 0;
    vlSelf->sim__DOT__source__DOT__te2_red = 0;
    vlSelf->sim__DOT__source__DOT__te2_green = 0;
    vlSelf->sim__DOT__source__DOT__te2_blue = 0;
    vlSelf->sim__DOT__source__DOT__te3_red = 0;
    vlSelf->sim__DOT__source__DOT__te3_green = 0;
    vlSelf->sim__DOT__source__DOT__te3_blue = 0;
    vlSelf->sim__DOT__source__DOT__te4_red = 0;
    vlSelf->sim__DOT__source__DOT__te4_green = 0;
    vlSelf->sim__DOT__source__DOT__te4_blue = 0;
    vlSelf->sim__DOT__source__DOT__ss_red = 0;
    vlSelf->sim__DOT__source__DOT__ss_green = 0;
    vlSelf->sim__DOT__source__DOT__ss_blue = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__greet_rom_data = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__cnt_frm = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__greeting = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__font_rom_addr = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__font_rom_data = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text4__DOT__spr_x[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text4__DOT__spr_y[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text4__DOT__spr_cp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text4__DOT__spr_glyph_addr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text4__DOT__spr_glyph_line[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__text4__DOT__spr_fdma = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__spr_pix = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__font_colr = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text4__DOT__font_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text4__DOT__greet_rom__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__text3__DOT__greet_rom_data = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__cnt_frm = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__greeting = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__font_rom_addr = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__font_rom_data = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text3__DOT__spr_x[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text3__DOT__spr_y[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text3__DOT__spr_cp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text3__DOT__spr_glyph_addr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text3__DOT__spr_glyph_line[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__text3__DOT__spr_fdma = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__spr_pix = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__font_colr = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text3__DOT__font_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text3__DOT__greet_rom__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__text2__DOT__greet_rom_data = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__cnt_frm = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__greeting = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__font_rom_addr = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__font_rom_data = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text2__DOT__spr_x[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text2__DOT__spr_y[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text2__DOT__spr_cp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text2__DOT__spr_glyph_addr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text2__DOT__spr_glyph_line[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__text2__DOT__spr_fdma = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__spr_pix = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__font_colr = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text2__DOT__font_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text2__DOT__greet_rom__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__text1__DOT__greet_rom_data = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__cnt_frm = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__greeting = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__font_rom_addr = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__font_rom_data = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text1__DOT__spr_x[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text1__DOT__spr_y[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text1__DOT__spr_cp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text1__DOT__spr_glyph_addr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text1__DOT__spr_glyph_line[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__text1__DOT__spr_fdma = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__spr_pix = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__font_colr = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    vlSelf->sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text1__DOT__font_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__text1__DOT__greet_rom__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_addr_write = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_addr_render = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_colr_write = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_colr_clear = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_colr_render = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_0 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_1 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_we = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_front = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_start = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__clip = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__drx = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__dry = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__lb_line = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__lb_en_in = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__lb_en_out = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__lb_colr_out = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__fb_pix_colr = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_id = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_offs = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_data = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cy = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx_offs = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__ucp = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_start = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__ucp0 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cy0 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cnt_lat = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_addr = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__glyph_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 71; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__sinescroll__DOT__clut_instance__DOT__bram_clut__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we = 0;
    for (int __Vi0 = 0; __Vi0 < 320; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 57600; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 57600; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_y1 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x1 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x2 = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_mul = 0;
    vlSelf->sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__clip_t1 = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__bar_colr = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0;
    vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory[__Vi0] = 0;
    }
    vlSelf->sim__DOT__source__DOT__stars__DOT__starlight = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg = 0;
    vlSelf->sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt = 0;
    vlSelf->sim__DOT__video_signals__DOT__l_beam_x = 0;
    vlSelf->sim__DOT__video_signals__DOT__l_beam_y = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_14 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
