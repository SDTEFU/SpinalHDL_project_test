// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtemplate__Syms.h"


VL_ATTR_COLD void Vtemplate___024root__trace_init_sub__TOP__0(Vtemplate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"io_clk", false,-1);
    tracep->declBit(c+13,"io_rst_n", false,-1);
    tracep->declBit(c+14,"io_start", false,-1);
    tracep->declBus(c+15,"io_data", false,-1, 7,0);
    tracep->declBit(c+16,"io_rs232_tx", false,-1);
    tracep->declBit(c+17,"io_done", false,-1);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"reset", false,-1);
    tracep->pushNamePrefix("template ");
    tracep->declBit(c+12,"io_clk", false,-1);
    tracep->declBit(c+13,"io_rst_n", false,-1);
    tracep->declBit(c+14,"io_start", false,-1);
    tracep->declBus(c+15,"io_data", false,-1, 7,0);
    tracep->declBit(c+16,"io_rs232_tx", false,-1);
    tracep->declBit(c+17,"io_done", false,-1);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"reset", false,-1);
    tracep->declBus(c+1,"clkarea_data_bat", false,-1, 7,0);
    tracep->declBit(c+2,"clkarea_state", false,-1);
    tracep->declBus(c+3,"clkarea_baud_cnt", false,-1, 9,0);
    tracep->declBit(c+4,"when_template_l46", false,-1);
    tracep->declBit(c+5,"clkarea_bit_flag", false,-1);
    tracep->declBit(c+6,"when_template_l59", false,-1);
    tracep->declBus(c+7,"clkarea_bit_cnt", false,-1, 3,0);
    tracep->declBit(c+8,"when_template_l70", false,-1);
    tracep->declBit(c+9,"clkarea_rx232_tx", false,-1);
    tracep->declBit(c+10,"clkarea_done", false,-1);
    tracep->declBit(c+11,"when_template_l130", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtemplate___024root__trace_init_top(Vtemplate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_init_top\n"); );
    // Body
    Vtemplate___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtemplate___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtemplate___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtemplate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtemplate___024root__trace_register(Vtemplate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtemplate___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtemplate___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtemplate___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtemplate___024root__trace_full_sub_0(Vtemplate___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtemplate___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_full_top_0\n"); );
    // Init
    Vtemplate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtemplate___024root*>(voidSelf);
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtemplate___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtemplate___024root__trace_full_sub_0(Vtemplate___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->template__DOT__clkarea_data_bat),8);
    bufp->fullBit(oldp+2,(vlSelf->template__DOT__clkarea_state));
    bufp->fullSData(oldp+3,(vlSelf->template__DOT__clkarea_baud_cnt),10);
    bufp->fullBit(oldp+4,((0xe9U == (IData)(vlSelf->template__DOT__clkarea_baud_cnt))));
    bufp->fullBit(oldp+5,(vlSelf->template__DOT__clkarea_bit_flag));
    bufp->fullBit(oldp+6,((1U == (IData)(vlSelf->template__DOT__clkarea_baud_cnt))));
    bufp->fullCData(oldp+7,(vlSelf->template__DOT__clkarea_bit_cnt),4);
    bufp->fullBit(oldp+8,((0xaU == (IData)(vlSelf->template__DOT__clkarea_bit_cnt))));
    bufp->fullBit(oldp+9,(vlSelf->template__DOT__clkarea_rx232_tx));
    bufp->fullBit(oldp+10,(vlSelf->template__DOT__clkarea_done));
    bufp->fullBit(oldp+11,(((IData)(vlSelf->template__DOT__clkarea_bit_flag) 
                            & (0xaU == (IData)(vlSelf->template__DOT__clkarea_bit_cnt)))));
    bufp->fullBit(oldp+12,(vlSelf->io_clk));
    bufp->fullBit(oldp+13,(vlSelf->io_rst_n));
    bufp->fullBit(oldp+14,(vlSelf->io_start));
    bufp->fullCData(oldp+15,(vlSelf->io_data),8);
    bufp->fullBit(oldp+16,(vlSelf->io_rs232_tx));
    bufp->fullBit(oldp+17,(vlSelf->io_done));
    bufp->fullBit(oldp+18,(vlSelf->clk));
    bufp->fullBit(oldp+19,(vlSelf->reset));
}
