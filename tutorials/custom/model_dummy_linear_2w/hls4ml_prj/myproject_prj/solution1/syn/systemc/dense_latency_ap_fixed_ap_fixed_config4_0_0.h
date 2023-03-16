// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_latency_ap_fixed_ap_fixed_config4_0_0_HH_
#define _dense_latency_ap_fixed_ap_fixed_config4_0_0_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct dense_latency_ap_fixed_ap_fixed_config4_0_0 : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<16> > data_0_V_read;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_out< sc_lv<1> > w4_V_address0;
    sc_out< sc_logic > w4_V_ce0;
    sc_in< sc_lv<6> > w4_V_q0;
    sc_out< sc_lv<1> > w4_V_address1;
    sc_out< sc_logic > w4_V_ce1;
    sc_in< sc_lv<6> > w4_V_q1;
    sc_out< sc_lv<16> > ap_return;


    // Module declarations
    dense_latency_ap_fixed_ap_fixed_config4_0_0(sc_module_name name);
    SC_HAS_PROCESS(dense_latency_ap_fixed_ap_fixed_config4_0_0);

    ~dense_latency_ap_fixed_ap_fixed_config4_0_0();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state2_pp0_stage1_iter0;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<16> > data_1_V_read_2_reg_112;
    sc_signal< sc_lv<16> > grp_fu_79_p4;
    sc_signal< sc_lv<16> > trunc_ln_reg_117;
    sc_signal< sc_lv<6> > w4_V_load_1_reg_122;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0_reg;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_lv<16> > ap_port_reg_data_0_V_read;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<16> > ap_port_reg_data_1_V_read;
    sc_signal< sc_lv<16> > grp_fu_65_p0;
    sc_signal< sc_lv<21> > sext_ln1118_fu_89_p1;
    sc_signal< sc_lv<21> > sext_ln1118_4_fu_99_p1;
    sc_signal< sc_lv<6> > grp_fu_65_p1;
    sc_signal< sc_lv<21> > sext_ln1118_3_fu_94_p1;
    sc_signal< sc_lv<21> > sext_ln1118_5_fu_103_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<21> > grp_fu_65_p2;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to0;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_idle_pp0_1to1;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_pp0_stage0;
    static const sc_lv<2> ap_ST_fsm_pp0_stage1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_14;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage1_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to0();
    void thread_ap_idle_pp0_1to1();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return();
    void thread_grp_fu_65_p0();
    void thread_grp_fu_65_p1();
    void thread_grp_fu_65_p2();
    void thread_grp_fu_79_p4();
    void thread_sext_ln1118_3_fu_94_p1();
    void thread_sext_ln1118_4_fu_99_p1();
    void thread_sext_ln1118_5_fu_103_p1();
    void thread_sext_ln1118_fu_89_p1();
    void thread_w4_V_address0();
    void thread_w4_V_address1();
    void thread_w4_V_ce0();
    void thread_w4_V_ce1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
