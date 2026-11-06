// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___eval_sample(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_sample\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsim___024root___eval_ico(Vsim___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_ico\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.reset) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vsim___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vsim___024root___eval_act(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_act\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsim___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vsim___024root___eval_inact(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_inact\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vsim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vsim___024root___nba_sequent__TOP__0(Vsim___024root* vlSelf);
void Vsim___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vsim___024root___eval_nba(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_nba\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsim___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vsim___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vsim___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vsim___024root___eval_obs(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_obs\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vsim___024root___eval_react(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_react\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vsim___024root___eval_postponed(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_postponed\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vsim___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

bool Vsim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___trigger_anySet__act\n"); );
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

void Vsim___024root___nba_sequent__TOP__0(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id;
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id = 0;
    CData/*5:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_frm = 0;
    CData/*4:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__text4__DOT__greeting = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text4__DOT__font_colr = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    CData/*5:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_frm = 0;
    CData/*4:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__text3__DOT__greeting = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text3__DOT__font_colr = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    CData/*5:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_frm = 0;
    CData/*4:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__text2__DOT__greeting = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text2__DOT__font_colr = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    CData/*5:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_frm = 0;
    CData/*4:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__text1__DOT__greeting = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text1__DOT__font_colr = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0;
    SData/*11:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0;
    IData/*20:0*/ __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt = 0;
    IData/*20:0*/ __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt = 0;
    IData/*20:0*/ __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt = 0;
    SData/*15:0*/ __Vdly__sim__DOT__video_signals__DOT__l_beam_y;
    __Vdly__sim__DOT__video_signals__DOT__l_beam_y = 0;
    SData/*15:0*/ __Vdly__sim__DOT__video_signals__DOT__l_beam_x;
    __Vdly__sim__DOT__video_signals__DOT__l_beam_x = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr = 0;
    CData/*2:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr = 0;
    CData/*1:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line = 0;
    SData/*8:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 0;
    CData/*6:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx = 0;
    CData/*7:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char = 0;
    IData/*31:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0 = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__drx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__drx = 0;
    SData/*15:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__dry;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__dry = 0;
    CData/*4:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx = 0;
    CData/*4:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id = 0;
    CData/*0:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we = 0;
    SData/*8:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst = 0;
    CData/*3:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst = 0;
    SData/*8:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out = 0;
    CData/*5:0*/ __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v0;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v0 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v0;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v0 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v1;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v1 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v1;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v1 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v2;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v2 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v2;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v2 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v3;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v3 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v3;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v3 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v4;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v4 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v4;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v4 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v5;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v5 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v5;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v5 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v6;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v6 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v6;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v6 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v7;
    __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v7 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v7;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v7 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v0;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v0 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v0;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v0 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v1;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v1 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v1;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v1 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v2;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v2 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v2;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v2 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v3;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v3 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v3;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v3 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v4;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v4 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v4;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v4 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v5;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v5 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v5;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v5 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v6;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v6 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v6;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v6 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v7;
    __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v7 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v7;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v7 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v0;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v0 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v0;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v0 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v1;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v1 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v1;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v1 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v2;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v2 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v2;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v2 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v3;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v3 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v3;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v3 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v4;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v4 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v4;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v4 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v5;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v5 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v5;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v5 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v6;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v6 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v6;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v6 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v7;
    __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v7 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v7;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v7 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v0;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v0 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v0;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v0 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v1;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v1 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v1;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v1 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v2;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v2 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v2;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v2 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v3;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v3 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v3;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v3 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v4;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v4 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v4;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v4 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v5;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v5 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v5;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v5 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v6;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v6 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v6;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v6 = 0;
    CData/*6:0*/ __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v7;
    __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v7 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v7;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v7 = 0;
    CData/*3:0*/ __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0;
    __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0 = 0;
    SData/*8:0*/ __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0;
    __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0;
    __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0;
    __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0 = 0;
    SData/*15:0*/ __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0;
    __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0;
    __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0 = 0;
    CData/*3:0*/ __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0;
    __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0 = 0;
    SData/*15:0*/ __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0;
    __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0;
    __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0 = 0;
    // Body
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt 
        = vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt 
        = vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt 
        = vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst;
    __Vdly__sim__DOT__video_signals__DOT__l_beam_y 
        = vlSelfRef.sim__DOT__video_signals__DOT__l_beam_y;
    __Vdly__sim__DOT__video_signals__DOT__l_beam_x 
        = vlSelfRef.sim__DOT__video_signals__DOT__l_beam_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_frm 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text4__DOT__greeting 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_frm 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text3__DOT__greeting 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_frm 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text2__DOT__greeting 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_frm 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_frm;
    __Vdly__sim__DOT__source__DOT__text1__DOT__greeting 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear;
    __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0 = 0U;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char;
    __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text4__DOT__font_colr 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text3__DOT__font_colr 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text2__DOT__font_colr 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text1__DOT__font_colr 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_colr;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step;
    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line 
        = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__drx 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__drx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__dry 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__dry;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr;
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state;
    __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0 = 0U;
    __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v0 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v1 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v2 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v3 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v4 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v5 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v6 = 0U;
    __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v7 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v0 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v1 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v2 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v3 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v4 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v5 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v6 = 0U;
    __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v7 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v0 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v1 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v2 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v3 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v4 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v5 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v6 = 0U;
    __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v7 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v0 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v1 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v2 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v3 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v4 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v5 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v6 = 0U;
    __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v7 = 0U;
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt 
        = (0x001fffffU & ((IData)(1U) + vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt));
    if ((0x0006689bU == vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt)) {
        __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt = 0U;
    }
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt 
        = (0x001fffffU & ((IData)(1U) + vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt));
    if ((0x0006689dU == vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt)) {
        __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt = 0U;
    }
    __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt 
        = (0x001fffffU & ((IData)(1U) + vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt));
    if ((0x0006689eU == vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt)) {
        __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt = 0U;
    }
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst 
        = ((0x0000000eU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst) 
                           << 1U)) | (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__toggle_src));
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst 
        = ((0x0000000eU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst) 
                           << 1U)) | (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__toggle_src));
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst 
        = ((0x0000000eU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst) 
                           << 1U)) | (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__toggle_src));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__toggle_src 
        = ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__toggle_src) 
           ^ (IData)(vlSelfRef.frame_start));
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if ((0x0000027fU == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__video_signals__DOT__l_beam_x)))) {
            __Vdly__sim__DOT__video_signals__DOT__l_beam_y 
                = ((0x000001dfU == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__video_signals__DOT__l_beam_y)))
                    ? 0x0000ffd3U : (0x0000ffffU & 
                                     ((IData)(1U) + 
                                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__video_signals__DOT__l_beam_y)))));
            __Vdly__sim__DOT__video_signals__DOT__l_beam_x = 0xff60U;
        } else {
            __Vdly__sim__DOT__video_signals__DOT__l_beam_x 
                = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(vlSelfRef.sim__DOT__video_signals__DOT__l_beam_x))));
        }
    }
    vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg 
        = ((0x000fffffU & (vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg 
                           >> 1U)) ^ ((1U & vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg)
                                       ? 0x00140000U
                                       : 0U));
    if ((0U == vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt)) {
        vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_reg = 0x001fffffU;
    }
    vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg 
        = ((0x000fffffU & (vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg 
                           >> 1U)) ^ ((1U & vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg)
                                       ? 0x00140000U
                                       : 0U));
    if ((0U == vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt)) {
        vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_reg = 0x000a9a9aU;
    }
    vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg 
        = ((0x000fffffU & (vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg 
                           >> 1U)) ^ ((1U & vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg)
                                       ? 0x00140000U
                                       : 0U));
    if ((0U == vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt)) {
        vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_reg = 0x0009a9a9U;
    }
    if (vlSelfRef.frame_start) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_frm 
            = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_frm)));
        if ((0x3cU == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_frm))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__greeting 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_frm = 0U;
        }
        __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_frm 
            = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_frm)));
        if ((0x3cU == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_frm))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__greeting 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_frm = 0U;
        }
        __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_frm 
            = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_frm)));
        if ((0x3cU == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_frm))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__greeting 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_frm = 0U;
        }
        __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_frm 
            = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_frm)));
        if ((0x3cU == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_frm))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__greeting 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_frm = 0U;
        }
    }
    if ((1U & VL_REDXOR_32((3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst) 
                                  >> 2U))))) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_line = 1U;
    } else if ((1U & VL_REDXOR_32((3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst) 
                                         >> 2U))))) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line 
            = ((1U == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line))));
    }
    if ((1U & (~ VL_REDXOR_32((3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst) 
                                     >> 2U)))))) {
        if (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_en_in) {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read)));
        }
    }
    if ((1U & VL_REDXOR_32((3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst) 
                                  >> 2U))))) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_line = 0U;
    }
    if (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_en_in) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we = 1U;
    }
    if ((0x013fU == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in))) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we = 0U;
    }
    if (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in 
            = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in)));
        if ((0x013fU >= (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in))) {
            __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0 
                = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read;
            __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0 
                = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in;
            __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0 = 1U;
        }
    }
    if ((1U & VL_REDXOR_32((3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst) 
                                  >> 2U))))) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx = 0U;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we = 0U;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in = 0U;
    } else if (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_en_in) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx 
            = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx)));
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__toggle_src 
        = ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__toggle_src) 
           ^ (IData)(vlSelfRef.line_start));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__toggle_src 
        = ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__toggle_src) 
           ^ ((0x0000003cU == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
              & (IData)(vlSelfRef.line_start)));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                          ? ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[7U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                          ? ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[6U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                          ? ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[5U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                          ? ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[4U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                          ? ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[3U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                          ? ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[2U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                          ? ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[1U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                          ? ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_x[0U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                          ? ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[7U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                          ? ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[6U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                          ? ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[5U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                          ? ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[4U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                          ? ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[3U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                          ? ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[2U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                          ? ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[1U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                          ? ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_x[0U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                          ? ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[7U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                          ? ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[6U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                          ? ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[5U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                          ? ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[4U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                          ? ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[3U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                          ? ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[2U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                          ? ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[1U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                          ? ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_x[0U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                          ? ((0x00000080U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[7U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                          ? ((0x00000040U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[6U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                          ? ((0x00000020U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[5U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                          ? ((0x00000010U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[4U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                          ? ((8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[3U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                          ? ((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[2U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                          ? ((2U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[1U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)))))))))));
    __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = (((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8
             : ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                 ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                          ? ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_fdma))
                              ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                             ? 4U : 
                                            ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                              ? ((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)) 
                                                  == 
                                                  (VL_EXTENDS_II(32,16, vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_x[0U]) 
                                                   - (IData)(2U)))
                                                  ? 5U
                                                  : 4U)
                                              : ((5U 
                                                  == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)
                                                  ? 
                                                 (((7U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U)
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))
                                                    ? 2U
                                                    : 4U) 
                                                  & (- (IData)(
                                                               (6U 
                                                                == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))) 
           & (- (IData)(((0U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                         | ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                            | ((2U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                               | ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                  | ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                     | ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                        | ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state) 
                                           | (7U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)))))))))));
    if (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_en_out) {
        if ((1U == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h))) {
            if ((0x013fU != (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out))) {
                __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out)));
            }
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h)));
        }
    }
    if (vlSelfRef.line_start) {
        if (((0x00000130U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
             | (0x00000190U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text4__DOT__font_colr = 0x0125U;
            __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text3__DOT__font_colr = 0x0125U;
        } else if (((0x0000013eU == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
                    | (0x0000019eU == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text4__DOT__font_colr = 0x0421U;
            __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text3__DOT__font_colr = 0x0421U;
        } else {
            if ((0U < (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_line))) {
                __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line 
                    = (0x0000ffffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_line) 
                                      - (IData)(1U)));
            } else {
                __Vdly__sim__DOT__source__DOT__text4__DOT__font_colr 
                    = (0x00000fffU & ((IData)(0x0111U) 
                                      + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_colr)));
                __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line = 1U;
            }
            if ((0U < (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_line))) {
                __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line 
                    = (0x0000ffffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_line) 
                                      - (IData)(1U)));
            } else {
                __Vdly__sim__DOT__source__DOT__text3__DOT__font_colr 
                    = (0x00000fffU & ((IData)(0x0111U) 
                                      + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_colr)));
                __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line = 1U;
            }
        }
        if (((0x00000040U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
             | (0x000000a0U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text2__DOT__font_colr = 0x0125U;
            __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text1__DOT__font_colr = 0x0125U;
        } else if (((0x0000004eU == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
                    | (0x000000aeU == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text2__DOT__font_colr = 0x0421U;
            __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line = 1U;
            __Vdly__sim__DOT__source__DOT__text1__DOT__font_colr = 0x0421U;
        } else {
            if ((0U < (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_line))) {
                __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line 
                    = (0x0000ffffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_line) 
                                      - (IData)(1U)));
            } else {
                __Vdly__sim__DOT__source__DOT__text2__DOT__font_colr 
                    = (0x00000fffU & ((IData)(0x0111U) 
                                      + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_colr)));
                __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line = 1U;
            }
            if ((0U < (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_line))) {
                __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line 
                    = (0x0000ffffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_line) 
                                      - (IData)(1U)));
            } else {
                __Vdly__sim__DOT__source__DOT__text1__DOT__font_colr 
                    = (0x00000fffU & ((IData)(0x0111U) 
                                      + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_colr)));
                __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line = 1U;
            }
        }
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out = 0U;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h = 0U;
    }
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state 
        = ((0U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)
            ? (1U & (- (IData)((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_start))))
            : ((1U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)
                ? 2U : ((2U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)
                         ? ((2U == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cnt_lat))
                             ? 3U : 2U) : ((3U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)
                                            ? ((0x1fU 
                                                == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx))
                                                ? (
                                                   (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__dry)) 
                                                    == 
                                                    ((IData)(0x0000001fU) 
                                                     + 
                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cy0))))
                                                    ? 5U
                                                    : 4U)
                                                : 3U)
                                            : (2U & 
                                               (- (IData)(
                                                          (4U 
                                                           == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state))))))));
    if (((~ (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_front)) 
         & (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_we))) {
        if ((0xe0ffU >= (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_write))) {
            __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0 
                = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_write;
            __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0 
                = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_write;
            __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0 = 1U;
        }
    }
    if (((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_we) 
         & (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_front))) {
        if ((0xe0ffU >= (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_write))) {
            __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0 
                = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_write;
            __VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0 
                = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_write;
            __VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0 = 1U;
        }
    }
    if ((0xfffffff1U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v0 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v0 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v0 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v0 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v0 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v0 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v0 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v0 = 1U;
    }
    if ((0xfffffff2U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v1 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v1 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v1 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v1 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v1 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v1 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v1 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v1 = 1U;
    }
    if ((0xfffffff3U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v2 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v2 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v2 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v2 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v2 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v2 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v2 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v2 = 1U;
    }
    if ((0xfffffff4U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v3 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v3 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v3 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v3 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v3 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v3 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v3 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v3 = 1U;
    }
    if ((0xfffffff5U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v4 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v4 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v4 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v4 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v4 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v4 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v4 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v4 = 1U;
    }
    if ((0xfffffff6U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v5 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v5 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v5 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v5 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v5 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v5 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v5 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v5 = 1U;
    }
    if ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v6 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v6 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v6 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v6 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v6 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v6 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v6 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v6 = 1U;
    }
    if ((0xfffffff8U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) {
        __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v7 
            = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v7 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v7 
            = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v7 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v7 
            = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v7 = 1U;
        __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v7 
            = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data;
        __VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v7 = 1U;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_pix_colr 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__clut_instance__DOT__bram_clut__DOT__memory
        [vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_colr_out];
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((1U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xf8U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | ((4U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                         >> 3U)) | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 5U)) 
                                    | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                             >> 7U)))));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0xc7U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((4U & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data)) 
                   | ((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                             >> 2U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                              >> 4U)))) 
                  << 3U));
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line 
            = ((0x3fU & (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__spr_line)) 
               | (((2U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                          << 1U)) | (1U & ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data) 
                                           >> 1U))) 
                  << 6U));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox = 0U;
        __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x)));
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state)) {
        if ((3U == (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y))) {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy)));
            __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos)));
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y = 0U;
        } else {
            __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y)));
        }
    }
    if ((((0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te1_red)) 
          | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te1_green))) 
         | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te1_blue)))) {
        vlSelfRef.red = vlSelfRef.sim__DOT__source__DOT__te1_red;
        vlSelfRef.green = vlSelfRef.sim__DOT__source__DOT__te1_green;
        vlSelfRef.blue = vlSelfRef.sim__DOT__source__DOT__te1_blue;
    } else if ((((0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te2_red)) 
                 | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te2_green))) 
                | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te2_blue)))) {
        vlSelfRef.red = vlSelfRef.sim__DOT__source__DOT__te2_red;
        vlSelfRef.green = vlSelfRef.sim__DOT__source__DOT__te2_green;
        vlSelfRef.blue = vlSelfRef.sim__DOT__source__DOT__te2_blue;
    } else if ((((0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te3_red)) 
                 | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te3_green))) 
                | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te3_blue)))) {
        vlSelfRef.red = vlSelfRef.sim__DOT__source__DOT__te3_red;
        vlSelfRef.green = vlSelfRef.sim__DOT__source__DOT__te3_green;
        vlSelfRef.blue = vlSelfRef.sim__DOT__source__DOT__te3_blue;
    } else if ((((0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te4_red)) 
                 | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te4_green))) 
                | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__te4_blue)))) {
        vlSelfRef.red = vlSelfRef.sim__DOT__source__DOT__te4_red;
        vlSelfRef.green = vlSelfRef.sim__DOT__source__DOT__te4_green;
        vlSelfRef.blue = vlSelfRef.sim__DOT__source__DOT__te4_blue;
    } else if ((((0U != (IData)(vlSelfRef.sim__DOT__source__DOT__ss_red)) 
                 | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__ss_green))) 
                | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__ss_blue)))) {
        vlSelfRef.red = vlSelfRef.sim__DOT__source__DOT__ss_red;
        vlSelfRef.green = vlSelfRef.sim__DOT__source__DOT__ss_green;
        vlSelfRef.blue = vlSelfRef.sim__DOT__source__DOT__ss_blue;
    } else if ((((0U != (IData)(vlSelfRef.sim__DOT__source__DOT__rb_red)) 
                 | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__rb_green))) 
                | (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__rb_blue)))) {
        vlSelfRef.red = vlSelfRef.sim__DOT__source__DOT__rb_red;
        vlSelfRef.green = vlSelfRef.sim__DOT__source__DOT__rb_green;
        vlSelfRef.blue = vlSelfRef.sim__DOT__source__DOT__rb_blue;
    } else {
        vlSelfRef.red = vlSelfRef.sim__DOT__source__DOT__st_red;
        vlSelfRef.green = vlSelfRef.sim__DOT__source__DOT__st_red;
        vlSelfRef.blue = vlSelfRef.sim__DOT__source__DOT__st_red;
    }
    vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt 
        = __Vdly__sim__DOT__source__DOT__stars__DOT__sf3__DOT__sf_cnt;
    vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt 
        = __Vdly__sim__DOT__source__DOT__stars__DOT__sf2__DOT__sf_cnt;
    vlSelfRef.sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt 
        = __Vdly__sim__DOT__source__DOT__stars__DOT__sf1__DOT__sf_cnt;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_frm 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_frm;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_frm 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_frm;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_frm 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_frm;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_frm 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_frm;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line__DOT__shr_dst;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__we;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_in;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_colr 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__font_colr;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_colr 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__font_colr;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_colr 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__font_colr;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_colr 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__font_colr;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__cnt_h;
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v0) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[0U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v0;
    }
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v1) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[1U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v1;
    }
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v2) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[2U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v2;
    }
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v3) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[3U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v3;
    }
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v4) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[4U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v4;
    }
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v5) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[5U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v5;
    }
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v6) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[6U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v6;
    }
    if (__VdlySet__sim__DOT__source__DOT__text4__DOT__spr_cp__v7) {
        vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_cp[7U] 
            = __VdlyVal__sim__DOT__source__DOT__text4__DOT__spr_cp__v7;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v0) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[0U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v0;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v1) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[1U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v1;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v2) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[2U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v2;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v3) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[3U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v3;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v4) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[4U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v4;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v5) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[5U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v5;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v6) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[6U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v6;
    }
    if (__VdlySet__sim__DOT__source__DOT__text3__DOT__spr_cp__v7) {
        vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_cp[7U] 
            = __VdlyVal__sim__DOT__source__DOT__text3__DOT__spr_cp__v7;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v0) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[0U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v0;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v1) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[1U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v1;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v2) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[2U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v2;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v3) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[3U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v3;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v4) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[4U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v4;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v5) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[5U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v5;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v6) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[6U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v6;
    }
    if (__VdlySet__sim__DOT__source__DOT__text2__DOT__spr_cp__v7) {
        vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_cp[7U] 
            = __VdlyVal__sim__DOT__source__DOT__text2__DOT__spr_cp__v7;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v0) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[0U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v0;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v1) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[1U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v1;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v2) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[2U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v2;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v3) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[3U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v3;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v4) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[4U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v4;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v5) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[5U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v5;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v6) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[6U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v6;
    }
    if (__VdlySet__sim__DOT__source__DOT__text1__DOT__spr_cp__v7) {
        vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_cp[7U] 
            = __VdlyVal__sim__DOT__source__DOT__text1__DOT__spr_cp__v7;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_line0__DOT__shr_dst;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__7__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__6__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__5__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__4__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__3__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__2__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__1__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_x;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__cnt_y;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__oy;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos 
        = __Vdly__sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__sprite_gen__BRA__0__KET____DOT__spr0__DOT__ox;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read 
        = ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_front)
            ? (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_1)
            : (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_0));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_en_out 
        = (((VL_LTES_III(32, 0x0000003cU, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
             & VL_GTS_III(32, 0x000001a4U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))) 
            & VL_LTES_III(32, 0xfffffffcU, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) 
           & VL_GTS_III(32, 0x0000027cU, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))));
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr 
        = (((3U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state) 
            << 2U) | (3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr) 
                            >> 1U)));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_we 
        = (1U & ((2U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state) 
                 | ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr) 
                    & (~ (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__clip)))));
    if ((2U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_write 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_write 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_clear;
    } else {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_write 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_render;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_write 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_render;
    }
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__greet_rom__DOT__memory
        [(0x000001ffU & ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                          ? (VL_GTS_III(32, 0x00000190U, 
                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                              ? ((IData)(7U) + ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                << 4U))
                              : ((IData)(0x000fU) + 
                                 ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                  << 4U))) : ((0xfffffff6U 
                                               == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                               ? (VL_GTS_III(32, 0x00000190U, 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                   ? 
                                                  ((IData)(6U) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                    << 4U))
                                                   : 
                                                  ((IData)(0x000eU) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                    << 4U)))
                                               : ((0xfffffff5U 
                                                   == 
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                   ? 
                                                  (VL_GTS_III(32, 0x00000190U, 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                    ? 
                                                   ((IData)(5U) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                     << 4U))
                                                    : 
                                                   ((IData)(0x000dU) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                     << 4U)))
                                                   : 
                                                  ((0xfffffff4U 
                                                    == 
                                                    VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                    ? 
                                                   (VL_GTS_III(32, 0x00000190U, 
                                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                      << 4U))
                                                     : 
                                                    ((IData)(0x000cU) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                      << 4U)))
                                                    : 
                                                   ((0xfffffff3U 
                                                     == 
                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                     ? 
                                                    (VL_GTS_III(32, 0x00000190U, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                      ? 
                                                     ((IData)(3U) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                       << 4U))
                                                      : 
                                                     ((IData)(0x000bU) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                       << 4U)))
                                                     : 
                                                    ((0xfffffff2U 
                                                      == 
                                                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                      ? 
                                                     (VL_GTS_III(32, 0x00000190U, 
                                                                 VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                        << 4U))
                                                       : 
                                                      ((IData)(0x000aU) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                        << 4U)))
                                                      : 
                                                     ((0xfffffff1U 
                                                       == 
                                                       VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                       ? 
                                                      (VL_GTS_III(32, 0x00000190U, 
                                                                  VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                         << 4U))
                                                        : 
                                                       ((IData)(9U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                         << 4U)))
                                                       : 
                                                      ((- (IData)(
                                                                  (0xfffffff0U 
                                                                   == 
                                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))))) 
                                                       & (VL_GTS_III(32, 0x00000190U, 
                                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                           ? 
                                                          ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                           << 4U)
                                                           : 
                                                          ((IData)(8U) 
                                                           + 
                                                           ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting) 
                                                            << 4U))))))))))))];
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__greet_rom__DOT__memory
        [(0x000001ffU & ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                          ? (VL_GTS_III(32, 0x00000190U, 
                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                              ? ((IData)(7U) + ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                << 4U))
                              : ((IData)(0x000fU) + 
                                 ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                  << 4U))) : ((0xfffffff6U 
                                               == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                               ? (VL_GTS_III(32, 0x00000190U, 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                   ? 
                                                  ((IData)(6U) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                    << 4U))
                                                   : 
                                                  ((IData)(0x000eU) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                    << 4U)))
                                               : ((0xfffffff5U 
                                                   == 
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                   ? 
                                                  (VL_GTS_III(32, 0x00000190U, 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                    ? 
                                                   ((IData)(5U) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                     << 4U))
                                                    : 
                                                   ((IData)(0x000dU) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                     << 4U)))
                                                   : 
                                                  ((0xfffffff4U 
                                                    == 
                                                    VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                    ? 
                                                   (VL_GTS_III(32, 0x00000190U, 
                                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                      << 4U))
                                                     : 
                                                    ((IData)(0x000cU) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                      << 4U)))
                                                    : 
                                                   ((0xfffffff3U 
                                                     == 
                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                     ? 
                                                    (VL_GTS_III(32, 0x00000190U, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                      ? 
                                                     ((IData)(3U) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                       << 4U))
                                                      : 
                                                     ((IData)(0x000bU) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                       << 4U)))
                                                     : 
                                                    ((0xfffffff2U 
                                                      == 
                                                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                      ? 
                                                     (VL_GTS_III(32, 0x00000190U, 
                                                                 VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                        << 4U))
                                                       : 
                                                      ((IData)(0x000aU) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                        << 4U)))
                                                      : 
                                                     ((0xfffffff1U 
                                                       == 
                                                       VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                       ? 
                                                      (VL_GTS_III(32, 0x00000190U, 
                                                                  VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                         << 4U))
                                                        : 
                                                       ((IData)(9U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                         << 4U)))
                                                       : 
                                                      ((- (IData)(
                                                                  (0xfffffff0U 
                                                                   == 
                                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))))) 
                                                       & (VL_GTS_III(32, 0x00000190U, 
                                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                           ? 
                                                          ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                           << 4U)
                                                           : 
                                                          ((IData)(8U) 
                                                           + 
                                                           ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting) 
                                                            << 4U))))))))))))];
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__greet_rom__DOT__memory
        [(0x000001ffU & ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                          ? (VL_GTS_III(32, 0x000000a0U, 
                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                              ? ((IData)(7U) + ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                << 4U))
                              : ((IData)(0x000fU) + 
                                 ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                  << 4U))) : ((0xfffffff6U 
                                               == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                               ? (VL_GTS_III(32, 0x000000a0U, 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                   ? 
                                                  ((IData)(6U) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                    << 4U))
                                                   : 
                                                  ((IData)(0x000eU) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                    << 4U)))
                                               : ((0xfffffff5U 
                                                   == 
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                   ? 
                                                  (VL_GTS_III(32, 0x000000a0U, 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                    ? 
                                                   ((IData)(5U) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                     << 4U))
                                                    : 
                                                   ((IData)(0x000dU) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                     << 4U)))
                                                   : 
                                                  ((0xfffffff4U 
                                                    == 
                                                    VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                    ? 
                                                   (VL_GTS_III(32, 0x000000a0U, 
                                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                      << 4U))
                                                     : 
                                                    ((IData)(0x000cU) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                      << 4U)))
                                                    : 
                                                   ((0xfffffff3U 
                                                     == 
                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                     ? 
                                                    (VL_GTS_III(32, 0x000000a0U, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                      ? 
                                                     ((IData)(3U) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                       << 4U))
                                                      : 
                                                     ((IData)(0x000bU) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                       << 4U)))
                                                     : 
                                                    ((0xfffffff2U 
                                                      == 
                                                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                      ? 
                                                     (VL_GTS_III(32, 0x000000a0U, 
                                                                 VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                        << 4U))
                                                       : 
                                                      ((IData)(0x000aU) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                        << 4U)))
                                                      : 
                                                     ((0xfffffff1U 
                                                       == 
                                                       VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                       ? 
                                                      (VL_GTS_III(32, 0x000000a0U, 
                                                                  VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                         << 4U))
                                                        : 
                                                       ((IData)(9U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                         << 4U)))
                                                       : 
                                                      ((- (IData)(
                                                                  (0xfffffff0U 
                                                                   == 
                                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))))) 
                                                       & (VL_GTS_III(32, 0x000000a0U, 
                                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                           ? 
                                                          ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                           << 4U)
                                                           : 
                                                          ((IData)(8U) 
                                                           + 
                                                           ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting) 
                                                            << 4U))))))))))))];
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__greet_rom__DOT__memory
        [(0x000001ffU & ((0xfffffff7U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                          ? (VL_GTS_III(32, 0x000000a0U, 
                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                              ? ((IData)(7U) + ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                << 4U))
                              : ((IData)(0x000fU) + 
                                 ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                  << 4U))) : ((0xfffffff6U 
                                               == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                               ? (VL_GTS_III(32, 0x000000a0U, 
                                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                   ? 
                                                  ((IData)(6U) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                    << 4U))
                                                   : 
                                                  ((IData)(0x000eU) 
                                                   + 
                                                   ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                    << 4U)))
                                               : ((0xfffffff5U 
                                                   == 
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                   ? 
                                                  (VL_GTS_III(32, 0x000000a0U, 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                    ? 
                                                   ((IData)(5U) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                     << 4U))
                                                    : 
                                                   ((IData)(0x000dU) 
                                                    + 
                                                    ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                     << 4U)))
                                                   : 
                                                  ((0xfffffff4U 
                                                    == 
                                                    VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                    ? 
                                                   (VL_GTS_III(32, 0x000000a0U, 
                                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                      << 4U))
                                                     : 
                                                    ((IData)(0x000cU) 
                                                     + 
                                                     ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                      << 4U)))
                                                    : 
                                                   ((0xfffffff3U 
                                                     == 
                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                     ? 
                                                    (VL_GTS_III(32, 0x000000a0U, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                      ? 
                                                     ((IData)(3U) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                       << 4U))
                                                      : 
                                                     ((IData)(0x000bU) 
                                                      + 
                                                      ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                       << 4U)))
                                                     : 
                                                    ((0xfffffff2U 
                                                      == 
                                                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                      ? 
                                                     (VL_GTS_III(32, 0x000000a0U, 
                                                                 VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                        << 4U))
                                                       : 
                                                      ((IData)(0x000aU) 
                                                       + 
                                                       ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                        << 4U)))
                                                      : 
                                                     ((0xfffffff1U 
                                                       == 
                                                       VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))
                                                       ? 
                                                      (VL_GTS_III(32, 0x000000a0U, 
                                                                  VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                         << 4U))
                                                        : 
                                                       ((IData)(9U) 
                                                        + 
                                                        ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                         << 4U)))
                                                       : 
                                                      ((- (IData)(
                                                                  (0xfffffff0U 
                                                                   == 
                                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))))) 
                                                       & (VL_GTS_III(32, 0x000000a0U, 
                                                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))
                                                           ? 
                                                          ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                           << 4U)
                                                           : 
                                                          ((IData)(8U) 
                                                           + 
                                                           ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting) 
                                                            << 4U))))))))))))];
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_en_in 
        = ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_line) 
           & ((0U == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lb_line)) 
              & (0x0140U > (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__cnt_lbx))));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__lb_colr_out 
        = ((0x013fU >= (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out))
            ? vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory
           [vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out]
            : 0U);
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom__DOT__memory
        [vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_rom_addr];
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom__DOT__memory
        [vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_rom_addr];
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom__DOT__memory
        [vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_rom_addr];
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[7U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__7__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[6U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__6__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[5U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__5__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[4U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__4__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[3U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__3__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[2U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__2__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[1U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__1__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_glyph_line[0U] 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT____Vcellout__sprite_gen__BRA__0__KET____DOT__spr0__pos;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_data 
        = vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom__DOT__memory
        [vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_rom_addr];
    vlSelfRef.sim__DOT__source__DOT__ss_red = (0x000000ffU 
                                               & ((0x000000f0U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                      >> 4U)) 
                                                  | (0x0000000fU 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                        >> 8U))));
    vlSelfRef.sim__DOT__source__DOT__ss_green = (0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                          >> 4U))));
    vlSelfRef.sim__DOT__source__DOT__ss_blue = (0x000000ffU 
                                                & ((0x000000f0U 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))));
    vlSelfRef.sim__DOT__source__DOT__st_red = ((IData)(vlSelfRef.video_enable)
                                                ? (0x000000ffU 
                                                   & (((IData)(vlSelfRef.sim__DOT__source__DOT__stars__DOT__starlight) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.sim__DOT__source__DOT__stars__DOT__starlight)))
                                                : 0U);
    if (((IData)(vlSelfRef.video_enable) & (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_pix)))) {
        vlSelfRef.sim__DOT__source__DOT__te1_red = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                            >> 4U)) 
                            | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                              >> 8U))));
        vlSelfRef.sim__DOT__source__DOT__te1_green 
            = (0x000000ffU & ((0x000000f0U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)) 
                              | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                >> 4U))));
        vlSelfRef.sim__DOT__source__DOT__te1_blue = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                            << 4U)) 
                            | (0x0000000fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13))));
    } else {
        vlSelfRef.sim__DOT__source__DOT__te1_red = 0U;
        vlSelfRef.sim__DOT__source__DOT__te1_green = 0U;
        vlSelfRef.sim__DOT__source__DOT__te1_blue = 0U;
    }
    if (((IData)(vlSelfRef.video_enable) & (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_pix)))) {
        vlSelfRef.sim__DOT__source__DOT__te2_red = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                            >> 4U)) 
                            | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                              >> 8U))));
        vlSelfRef.sim__DOT__source__DOT__te2_green 
            = (0x000000ffU & ((0x000000f0U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)) 
                              | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                                >> 4U))));
        vlSelfRef.sim__DOT__source__DOT__te2_blue = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                            << 4U)) 
                            | (0x0000000fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14))));
    } else {
        vlSelfRef.sim__DOT__source__DOT__te2_red = 0U;
        vlSelfRef.sim__DOT__source__DOT__te2_green = 0U;
        vlSelfRef.sim__DOT__source__DOT__te2_blue = 0U;
    }
    if (((IData)(vlSelfRef.video_enable) & (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_pix)))) {
        vlSelfRef.sim__DOT__source__DOT__te3_red = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                            >> 4U)) 
                            | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                              >> 8U))));
        vlSelfRef.sim__DOT__source__DOT__te3_green 
            = (0x000000ffU & ((0x000000f0U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)) 
                              | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                                >> 4U))));
        vlSelfRef.sim__DOT__source__DOT__te3_blue = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                            << 4U)) 
                            | (0x0000000fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))));
    } else {
        vlSelfRef.sim__DOT__source__DOT__te3_red = 0U;
        vlSelfRef.sim__DOT__source__DOT__te3_green = 0U;
        vlSelfRef.sim__DOT__source__DOT__te3_blue = 0U;
    }
    if (((IData)(vlSelfRef.video_enable) & (0U != (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_pix)))) {
        vlSelfRef.sim__DOT__source__DOT__te4_red = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                            >> 4U)) 
                            | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                              >> 8U))));
        vlSelfRef.sim__DOT__source__DOT__te4_green 
            = (0x000000ffU & ((0x000000f0U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)) 
                              | (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                                >> 4U))));
        vlSelfRef.sim__DOT__source__DOT__te4_blue = 
            (0x000000ffU & ((0x000000f0U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                            << 4U)) 
                            | (0x0000000fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))));
    } else {
        vlSelfRef.sim__DOT__source__DOT__te4_red = 0U;
        vlSelfRef.sim__DOT__source__DOT__te4_green = 0U;
        vlSelfRef.sim__DOT__source__DOT__te4_blue = 0U;
    }
    vlSelfRef.sim__DOT__source__DOT__rb_red = (0x000000ffU 
                                               & ((0x000000f0U 
                                                   & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                      >> 4U)) 
                                                  | (0x0000000fU 
                                                     & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                        >> 8U))));
    vlSelfRef.sim__DOT__source__DOT__rb_green = (0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__bar_colr)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                          >> 4U))));
    vlSelfRef.sim__DOT__source__DOT__rb_blue = (0x000000ffU 
                                                & ((0x000000f0U 
                                                    & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__bar_colr) 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__bar_colr))));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_we_sr;
    vlSelfRef.sim__DOT__source__DOT__text4__DOT__greeting 
        = __Vdly__sim__DOT__source__DOT__text4__DOT__greeting;
    vlSelfRef.sim__DOT__source__DOT__text3__DOT__greeting 
        = __Vdly__sim__DOT__source__DOT__text3__DOT__greeting;
    vlSelfRef.sim__DOT__source__DOT__text2__DOT__greeting 
        = __Vdly__sim__DOT__source__DOT__text2__DOT__greeting;
    vlSelfRef.sim__DOT__source__DOT__text1__DOT__greeting 
        = __Vdly__sim__DOT__source__DOT__text1__DOT__greeting;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__addr_out;
    if (__VdlySet__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0) {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory[__VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0] 
            = __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__linebuffer_instance__DOT__bram_lb__DOT__memory__v0;
    }
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
    if ((0xe0ffU >= (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read))) {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_1 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory
            [vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read];
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_0 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory
            [vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read];
    } else {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_1 = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_read_0 = 0U;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__clip 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__clip_t1;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_render 
        = (0x0000ffffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_mul) 
                          + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x2)));
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr 
        = ((((vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
              >> (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx)) 
             & (3U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)) 
            << 2U) | (3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr) 
                            >> 1U)));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_render 
        = ((1U & (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr))
            ? 3U : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text1__DOT__spr_pix)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text2__DOT__spr_pix)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text3__DOT__spr_pix)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = ((IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__font_colr) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.sim__DOT__source__DOT__text4__DOT__spr_pix)))));
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__bar_colr 
        = (((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a) 
            & VL_LTS_III(16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a), (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev)))
            ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a)
            : (((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b) 
                & VL_LTS_III(16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b), (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev)))
                ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b)
                : (((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c) 
                    & VL_LTS_III(16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c), (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev)))
                    ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c)
                    : (((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d) 
                        & VL_LTS_III(16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d), (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev)))
                        ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d)
                        : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a)
                            ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a)
                            : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b)
                                ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b)
                                : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c)
                                    ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c)
                                    : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d)
                                        ? (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d)
                                        : 0U))))))));
    if (__VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0) {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory[__VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0] 
            = __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_1__DOT__memory__v0;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_read;
    if (__VdlySet__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0) {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory[__VdlyDim0__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0] 
            = __VdlyVal__sim__DOT__source__DOT__sinescroll__DOT__bram_inst_0__DOT__memory__v0;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__char_pix_sr;
    vlSelfRef.beam_x = ((IData)(vlSelfRef.reset) ? 0U
                         : (IData)(vlSelfRef.sim__DOT__video_signals__DOT__l_beam_x));
    vlSelfRef.sim__DOT__video_signals__DOT__l_beam_x 
        = __Vdly__sim__DOT__video_signals__DOT__l_beam_x;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_mul 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(0x0140U), (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_y1)));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x2 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x1;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__clip_t1 
        = (((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x1))) 
             | VL_LTS_III(32, 0x0000013fU, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x1)))) 
            | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_y1)))) 
           | VL_LTS_III(32, 0x000000b3U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_y1))));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xfffffff8U & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | ((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                     >> 0x0000001bU)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                >> 0x0000001dU)) 
                                         | (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                            >> 0x1fU))));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xffffffc7U & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 0x00000018U)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                 >> 0x0000001aU)) 
                                          | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                   >> 0x1cU)))) 
              << 3U));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xfffffe3fU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 0x00000015U)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                 >> 0x00000017U)) 
                                          | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                   >> 0x19U)))) 
              << 6U));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xfffff1ffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 0x00000012U)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                 >> 0x00000014U)) 
                                          | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                   >> 0x16U)))) 
              << 9U));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xffff8fffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 0x0000000fU)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                 >> 0x00000011U)) 
                                          | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                   >> 0x13U)))) 
              << 0x0000000cU));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xfffc7fffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 0x0000000cU)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                 >> 0x0000000eU)) 
                                          | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                   >> 0x10U)))) 
              << 0x0000000fU));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xffe3ffffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 9U)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                        >> 0x0000000bU)) 
                                 | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                          >> 0x0dU)))) 
              << 0x00000012U));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xff1fffffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 6U)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                        >> 8U)) | (1U 
                                                   & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                      >> 0x0aU)))) 
              << 0x00000015U));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xf8ffffffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      >> 3U)) | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                        >> 5U)) | (1U 
                                                   & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                                      >> 7U)))) 
              << 0x00000018U));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0xc7ffffffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((4U & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data) 
               | ((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                         >> 2U)) | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                          >> 4U)))) 
              << 0x0000001bU));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line 
        = ((0x3fffffffU & vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__glyph_line) 
           | (((2U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                      << 1U)) | (1U & (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
                                       >> 1U))) << 0x0000001eU));
    vlSelfRef.h_sync = (1U & (~ (VL_LTES_III(32, 0x00000290U, 
                                             ((IData)(0x00000320U) 
                                              + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))) 
                                 & VL_GTS_III(32, 0x000002f0U, 
                                              ((IData)(0x00000320U) 
                                               + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)))))));
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
    if ((0U == vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id)));
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 1U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0U;
    } else if ((1U == vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 2U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a_prev 
            = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0x40U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a 
            = (0x0000ffffU & ((IData)(0x00dcU) + VL_SHIFTRS_III(16,32,32, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if ((2U == vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 3U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b_prev 
            = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0x80U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b 
            = (0x0000ffffU & ((IData)(0x00dcU) + VL_SHIFTRS_III(16,32,32, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 4U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c_prev 
            = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs = 0xc0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c 
            = (0x0000ffffU & ((IData)(0x00dcU) + VL_SHIFTRS_III(16,32,32, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 5U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d_prev 
            = vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d 
            = (0x0000ffffU & ((IData)(0x00dcU) + VL_SHIFTRS_III(16,32,32, 
                                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_data)), 1U)));
    } else if (vlSelfRef.frame_start) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state = 0U;
    }
    if (((IData)(vlSelfRef.beam_y) == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0x0126U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a = 1U;
    } else if (vlSelfRef.line_start) {
        if ((1U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step))) {
                if (vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step = 0U;
                } else {
                    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_a = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a 
                    = (0x00000fffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc)
                                       ? ((IData)(0x0111U) 
                                          + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a))
                                       : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a) 
                                          - (IData)(0x0111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line)));
        }
    }
    if (((IData)(vlSelfRef.beam_y) == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0x0640U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b = 1U;
    } else if (vlSelfRef.line_start) {
        if ((1U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step))) {
                if (vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step = 0U;
                } else {
                    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_b = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b 
                    = (0x00000fffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc)
                                       ? ((IData)(0x0111U) 
                                          + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b))
                                       : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b) 
                                          - (IData)(0x0111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line)));
        }
    }
    if (((IData)(vlSelfRef.beam_y) == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0x0610U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c = 1U;
    } else if (vlSelfRef.line_start) {
        if ((1U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step))) {
                if (vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step = 0U;
                } else {
                    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_c = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c 
                    = (0x00000fffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc)
                                       ? ((IData)(0x0111U) 
                                          + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c))
                                       : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c) 
                                          - (IData)(0x0111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line)));
        }
    }
    if (((IData)(vlSelfRef.beam_y) == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d))) {
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0x0145U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 1U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0U;
        __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0U;
        vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d = 1U;
    } else if (vlSelfRef.line_start) {
        if ((1U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line))) {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line = 0U;
            if ((9U == (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step))) {
                if (vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc) {
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step = 0U;
                } else {
                    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_drawing_d = 0U;
                    __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d = 0U;
                }
            } else {
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d 
                    = (0x00000fffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc)
                                       ? ((IData)(0x0111U) 
                                          + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d))
                                       : ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d) 
                                          - (IData)(0x0111U))));
                __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step)));
            }
        } else {
            __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line)));
        }
    }
    vlSelfRef.beam_y = ((IData)(vlSelfRef.reset) ? 0U
                         : (IData)(vlSelfRef.sim__DOT__video_signals__DOT__l_beam_y));
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__bar_inc;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_step;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_a__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_a;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_a;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__bar_inc;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_step;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_b__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_b;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_b;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__bar_inc;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_step;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_c__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_c;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_c;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__bar_inc;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_step;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__raster_d__DOT__cnt_line;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_colr_d;
    vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d 
        = __Vdly__sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__bar_y_d;
    vlSelfRef.line_start = (0xffffff60U == VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x)));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_x1 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__drx;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__bitmap_addr_instance__DOT__addr_y1 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__dry;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_data 
        = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__glyph_rom__DOT__memory
        [vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_addr];
    sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT____Vcellinp__sine_table_inst__id 
        = (0x000000ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_id) 
                          + (IData)(vlSelfRef.sim__DOT__source__DOT__bars__DOT__rasters_instance__DOT__sin_offs)));
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
    vlSelfRef.sim__DOT__video_signals__DOT__l_beam_y 
        = __Vdly__sim__DOT__video_signals__DOT__l_beam_y;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__get_glyph_line_inst__DOT__rom_addr 
        = (0x000007ffU & ((((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__ucp0) 
                            - (IData)(0x00000020U)) 
                           << 5U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id)));
    vlSelfRef.v_sync = (1U & (~ (VL_LTES_III(32, 0x000001eaU, 
                                             ((IData)(0x0000020dU) 
                                              + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))) 
                                 & VL_GTS_III(32, 0x000001ecU, 
                                              ((IData)(0x0000020dU) 
                                               + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y)))))));
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
    vlSelfRef.video_enable = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
                              & (VL_GTS_III(32, 0x00000280U, 
                                            VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_x))) 
                                 & (VL_LTES_III(32, 0U, 
                                                VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))) 
                                    & VL_GTS_III(32, 0x000001e0U, 
                                                 VL_EXTENDS_II(32,16, (IData)(vlSelfRef.beam_y))))));
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
    __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done = 0U;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cnt_lat 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cnt_lat)));
    if ((1U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__ucp0 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__ucp;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cy0 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cy;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__drx 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__dry 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cy;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx = 0U;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cnt_lat = 0U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx 
            = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx)));
        if ((0x1fU == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx))) {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id)));
        } else {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__drx 
                = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__drx))));
        }
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__dry 
            = (0x0000ffffU & ((IData)(1U) + VL_EXTENDS_II(16,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__dry))));
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx = 0U;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__drx 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cnt_lat = 0U;
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done = 1U;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__cx0;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__line_id;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__drx 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__drx;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__gx;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__dry 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__dry;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_char_inst__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_start = 0U;
    if ((1U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 2U;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr 
            = (0x0000007fU & (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char));
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_id 
            = (0x000000ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char) 
                              << 4U));
    } else if ((2U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 3U;
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__ucp 
            = vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_data;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx 
            = (0x0000ffffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx_offs) 
                              + ((IData)(0x00000022U) 
                                 * (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char))));
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cy 
            = (0x0000ffffU & ((IData)(0x004aU) + VL_SHIFTRS_III(16,32,32, 
                                                                VL_EXTENDS_II(32,16, 
                                                                              ((0x40U 
                                                                                == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id))
                                                                                ? 0x00000100U
                                                                                : 
                                                                               ((0xc0U 
                                                                                == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id))
                                                                                 ? 0x0000ff00U
                                                                                 : 
                                                                                (0x0000ffffU 
                                                                                & ((0x00000080U 
                                                                                & (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id))
                                                                                 ? 
                                                                                (- vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory
                                                                                [
                                                                                (0x0000003fU 
                                                                                & ((0x00000040U 
                                                                                & (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id))
                                                                                 ? 
                                                                                (- (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id))
                                                                                 : (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id)))])
                                                                                 : vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sine_table_inst__DOT__sine_rom__DOT__memory
                                                                                [
                                                                                (0x0000003fU 
                                                                                & ((0x00000040U 
                                                                                & (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id))
                                                                                 ? 
                                                                                (- (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id))
                                                                                 : (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id)))]))))), 2U)));
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 4U;
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state)) {
        if ((VL_LTS_III(32, 0xffffffdeU, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx))) 
             & VL_GTS_III(32, 0x00000140U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx))))) {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 5U;
            vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_start = 1U;
        } else if ((0x46U == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char))) {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 6U;
        } else {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char)));
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 1U;
        }
    } else if ((5U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state)) {
        if (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done) {
            if ((0x46U == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char))) {
                __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 6U;
            } else {
                __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char)));
                __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 1U;
            }
        }
    } else if ((6U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 0U;
    } else if (vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_start) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_offs 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_offs)));
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx_offs 
            = (VL_GTS_III(32, 0xffffffe0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx)))
                ? 0x00000140U : (0x0000ffffU & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx_offs)) 
                                                - (IData)(3U))));
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state = 1U;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__draw_done;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cx;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__cnt_char;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT____Vcellinp__sine_table_inst__id 
        = (0x000000ffU & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_id) 
                          + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__sin_offs)));
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_data 
        = ((0x46U >= (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr))
            ? vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom__DOT__memory
           [vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr]
            : 0U);
    if ((1U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state)) {
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_front 
            = (1U & (~ (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_front)));
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state = 2U;
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear = 0U;
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_colr_clear = 0U;
    } else if ((2U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear 
            = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear)));
        if ((0xe0ffU == (IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear))) {
            __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state = 3U;
            vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_start = 1U;
        }
    } else if ((3U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state 
            = ((6U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state)
                ? 4U : 3U);
        vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_start = 0U;
    } else if ((4U == vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state)) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state = 0U;
    } else if ((1U & VL_REDXOR_32((3U & ((IData)(vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst) 
                                         >> 2U))))) {
        __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state = 1U;
    }
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__greet_rom_addr;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__fb_addr_clear;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__render_instance__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__state 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__state;
    vlSelfRef.sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst 
        = __Vdly__sim__DOT__source__DOT__sinescroll__DOT__xd_frame__DOT__shr_dst;
}

void Vsim___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vsim___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_debug_assertions\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
