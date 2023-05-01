// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtemplate.h for the primary calling header

#include "verilated.h"

#include "Vtemplate___024root.h"

void Vtemplate___024root___eval_act(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtemplate___024root___nba_sequent__TOP__0(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__template__DOT__clkarea_data_bat;
    __Vdly__template__DOT__clkarea_data_bat = 0;
    CData/*0:0*/ __Vdly__template__DOT__clkarea_state;
    __Vdly__template__DOT__clkarea_state = 0;
    SData/*9:0*/ __Vdly__template__DOT__clkarea_baud_cnt;
    __Vdly__template__DOT__clkarea_baud_cnt = 0;
    CData/*3:0*/ __Vdly__template__DOT__clkarea_bit_cnt;
    __Vdly__template__DOT__clkarea_bit_cnt = 0;
    // Body
    __Vdly__template__DOT__clkarea_state = vlSelf->template__DOT__clkarea_state;
    __Vdly__template__DOT__clkarea_data_bat = vlSelf->template__DOT__clkarea_data_bat;
    __Vdly__template__DOT__clkarea_bit_cnt = vlSelf->template__DOT__clkarea_bit_cnt;
    __Vdly__template__DOT__clkarea_baud_cnt = vlSelf->template__DOT__clkarea_baud_cnt;
    if (vlSelf->io_rst_n) {
        vlSelf->template__DOT__clkarea_done = ((IData)(vlSelf->template__DOT__clkarea_bit_flag) 
                                               & (0xaU 
                                                  == (IData)(vlSelf->template__DOT__clkarea_bit_cnt)));
        __Vdly__template__DOT__clkarea_data_bat = ((IData)(vlSelf->io_start)
                                                    ? (IData)(vlSelf->io_data)
                                                    : (IData)(vlSelf->template__DOT__clkarea_data_bat));
        __Vdly__template__DOT__clkarea_state = ((IData)(vlSelf->io_start) 
                                                | ((~ (IData)(vlSelf->io_done)) 
                                                   & (IData)(vlSelf->template__DOT__clkarea_state)));
        if (vlSelf->template__DOT__clkarea_state) {
            __Vdly__template__DOT__clkarea_baud_cnt 
                = ((IData)(vlSelf->template__DOT__when_template_l46)
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->template__DOT__clkarea_baud_cnt))));
            if (vlSelf->template__DOT__clkarea_bit_flag) {
                vlSelf->template__DOT__clkarea_rx232_tx 
                    = (1U & ((8U & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))
                              ? (IData)(((0U != (7U 
                                                 & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))) 
                                         | ((IData)(vlSelf->template__DOT__clkarea_data_bat) 
                                            >> 7U)))
                              : ((4U & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))
                                  ? ((2U & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))
                                      ? ((1U & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))
                                          ? ((IData)(vlSelf->template__DOT__clkarea_data_bat) 
                                             >> 6U)
                                          : ((IData)(vlSelf->template__DOT__clkarea_data_bat) 
                                             >> 5U))
                                      : ((1U & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))
                                          ? ((IData)(vlSelf->template__DOT__clkarea_data_bat) 
                                             >> 4U)
                                          : ((IData)(vlSelf->template__DOT__clkarea_data_bat) 
                                             >> 3U)))
                                  : ((2U & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))
                                      ? ((1U & (IData)(vlSelf->template__DOT__clkarea_bit_cnt))
                                          ? ((IData)(vlSelf->template__DOT__clkarea_data_bat) 
                                             >> 2U)
                                          : ((IData)(vlSelf->template__DOT__clkarea_data_bat) 
                                             >> 1U))
                                      : ((IData)(vlSelf->template__DOT__clkarea_bit_cnt) 
                                         & (IData)(vlSelf->template__DOT__clkarea_data_bat))))));
            }
        } else {
            __Vdly__template__DOT__clkarea_baud_cnt = 0U;
            vlSelf->template__DOT__clkarea_rx232_tx = 1U;
        }
        __Vdly__template__DOT__clkarea_bit_cnt = (0xfU 
                                                  & ((IData)(vlSelf->template__DOT__clkarea_bit_flag)
                                                      ? 
                                                     ((IData)(vlSelf->template__DOT__when_template_l70)
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->template__DOT__clkarea_bit_cnt)))
                                                      : (IData)(vlSelf->template__DOT__clkarea_bit_cnt)));
    } else {
        vlSelf->template__DOT__clkarea_done = 0U;
        __Vdly__template__DOT__clkarea_data_bat = 0U;
        __Vdly__template__DOT__clkarea_state = 0U;
        __Vdly__template__DOT__clkarea_baud_cnt = 0U;
        __Vdly__template__DOT__clkarea_bit_cnt = 0U;
        vlSelf->template__DOT__clkarea_rx232_tx = 0U;
    }
    vlSelf->template__DOT__clkarea_data_bat = __Vdly__template__DOT__clkarea_data_bat;
    vlSelf->template__DOT__clkarea_state = __Vdly__template__DOT__clkarea_state;
    vlSelf->template__DOT__clkarea_bit_cnt = __Vdly__template__DOT__clkarea_bit_cnt;
    vlSelf->io_done = vlSelf->template__DOT__clkarea_done;
    vlSelf->template__DOT__when_template_l70 = (0xaU 
                                                == (IData)(vlSelf->template__DOT__clkarea_bit_cnt));
    vlSelf->io_rs232_tx = vlSelf->template__DOT__clkarea_rx232_tx;
    vlSelf->template__DOT__clkarea_bit_flag = ((IData)(vlSelf->io_rst_n) 
                                               & (1U 
                                                  == (IData)(vlSelf->template__DOT__clkarea_baud_cnt)));
    vlSelf->template__DOT__clkarea_baud_cnt = __Vdly__template__DOT__clkarea_baud_cnt;
    vlSelf->template__DOT__when_template_l46 = (0xe9U 
                                                == (IData)(vlSelf->template__DOT__clkarea_baud_cnt));
}

void Vtemplate___024root___eval_nba(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtemplate___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtemplate___024root___eval_triggers__act(Vtemplate___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__act(Vtemplate___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__nba(Vtemplate___024root* vlSelf);
#endif  // VL_DEBUG

void Vtemplate___024root___eval(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtemplate___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtemplate___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/adgert/Desktop/test/SpinalHDL_project_test/UART_test/Template/tmp/job_1/template.v", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtemplate___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtemplate___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/adgert/Desktop/test/SpinalHDL_project_test/UART_test/Template/tmp/job_1/template.v", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtemplate___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtemplate___024root___eval_debug_assertions(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_clk & 0xfeU))) {
        Verilated::overWidthError("io_clk");}
    if (VL_UNLIKELY((vlSelf->io_rst_n & 0xfeU))) {
        Verilated::overWidthError("io_rst_n");}
    if (VL_UNLIKELY((vlSelf->io_start & 0xfeU))) {
        Verilated::overWidthError("io_start");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
