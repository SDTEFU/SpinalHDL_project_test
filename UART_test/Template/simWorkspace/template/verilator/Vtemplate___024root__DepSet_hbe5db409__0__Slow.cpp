// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtemplate.h for the primary calling header

#include "verilated.h"

#include "Vtemplate___024root.h"

VL_ATTR_COLD void Vtemplate___024root___eval_static(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtemplate___024root___eval_initial(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__io_clk = vlSelf->io_clk;
    vlSelf->__Vtrigrprev__TOP__io_rst_n = vlSelf->io_rst_n;
}

VL_ATTR_COLD void Vtemplate___024root___eval_final(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtemplate___024root___eval_triggers__stl(Vtemplate___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__stl(Vtemplate___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___eval_stl(Vtemplate___024root* vlSelf);

VL_ATTR_COLD void Vtemplate___024root___eval_settle(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtemplate___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtemplate___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/adgert/Desktop/test/MCU_project/UART_test/Template", 6, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtemplate___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__stl(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtemplate___024root___stl_sequent__TOP__0(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_rs232_tx = vlSelf->template__DOT__clkarea_rx232_tx;
    vlSelf->io_done = vlSelf->template__DOT__clkarea_done;
    vlSelf->template__DOT__when_template_l46 = (0xe9U 
                                                == (IData)(vlSelf->template__DOT__clkarea_baud_cnt));
    vlSelf->template__DOT__when_template_l70 = (0xaU 
                                                == (IData)(vlSelf->template__DOT__clkarea_bit_cnt));
}

VL_ATTR_COLD void Vtemplate___024root___eval_stl(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtemplate___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__act(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge io_clk or negedge io_rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__nba(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge io_clk or negedge io_rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtemplate___024root___ctor_var_reset(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_clk = 0;
    vlSelf->io_rst_n = 0;
    vlSelf->io_start = VL_RAND_RESET_I(1);
    vlSelf->io_data = VL_RAND_RESET_I(8);
    vlSelf->io_rs232_tx = VL_RAND_RESET_I(1);
    vlSelf->io_done = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->template__DOT__clkarea_data_bat = VL_RAND_RESET_I(8);
    vlSelf->template__DOT__clkarea_state = VL_RAND_RESET_I(1);
    vlSelf->template__DOT__clkarea_baud_cnt = VL_RAND_RESET_I(10);
    vlSelf->template__DOT__when_template_l46 = VL_RAND_RESET_I(1);
    vlSelf->template__DOT__clkarea_bit_flag = VL_RAND_RESET_I(1);
    vlSelf->template__DOT__clkarea_bit_cnt = VL_RAND_RESET_I(4);
    vlSelf->template__DOT__when_template_l70 = VL_RAND_RESET_I(1);
    vlSelf->template__DOT__clkarea_rx232_tx = VL_RAND_RESET_I(1);
    vlSelf->template__DOT__clkarea_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__io_clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__io_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
