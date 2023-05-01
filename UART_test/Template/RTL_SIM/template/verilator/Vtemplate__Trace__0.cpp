// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtemplate__Syms.h"


void Vtemplate___024root__trace_chg_sub_0(Vtemplate___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtemplate___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_chg_top_0\n"); );
    // Init
    Vtemplate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtemplate___024root*>(voidSelf);
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtemplate___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtemplate___024root__trace_chg_sub_0(Vtemplate___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->template__DOT__clkarea_data_bat),8);
        bufp->chgBit(oldp+1,(vlSelf->template__DOT__clkarea_state));
        bufp->chgSData(oldp+2,(vlSelf->template__DOT__clkarea_baud_cnt),10);
        bufp->chgBit(oldp+3,((0xe9U == (IData)(vlSelf->template__DOT__clkarea_baud_cnt))));
        bufp->chgBit(oldp+4,(vlSelf->template__DOT__clkarea_bit_flag));
        bufp->chgBit(oldp+5,((1U == (IData)(vlSelf->template__DOT__clkarea_baud_cnt))));
        bufp->chgCData(oldp+6,(vlSelf->template__DOT__clkarea_bit_cnt),4);
        bufp->chgBit(oldp+7,((0xaU == (IData)(vlSelf->template__DOT__clkarea_bit_cnt))));
        bufp->chgBit(oldp+8,(vlSelf->template__DOT__clkarea_rx232_tx));
        bufp->chgBit(oldp+9,(vlSelf->template__DOT__clkarea_done));
        bufp->chgBit(oldp+10,(((IData)(vlSelf->template__DOT__clkarea_bit_flag) 
                               & (0xaU == (IData)(vlSelf->template__DOT__clkarea_bit_cnt)))));
    }
    bufp->chgBit(oldp+11,(vlSelf->io_clk));
    bufp->chgBit(oldp+12,(vlSelf->io_rst_n));
    bufp->chgBit(oldp+13,(vlSelf->io_start));
    bufp->chgCData(oldp+14,(vlSelf->io_data),8);
    bufp->chgBit(oldp+15,(vlSelf->io_rs232_tx));
    bufp->chgBit(oldp+16,(vlSelf->io_done));
    bufp->chgBit(oldp+17,(vlSelf->clk));
    bufp->chgBit(oldp+18,(vlSelf->reset));
}

void Vtemplate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_cleanup\n"); );
    // Init
    Vtemplate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtemplate___024root*>(voidSelf);
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
