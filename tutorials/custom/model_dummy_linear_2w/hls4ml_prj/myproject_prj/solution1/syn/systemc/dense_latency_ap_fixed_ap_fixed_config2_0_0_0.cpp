// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "dense_latency_ap_fixed_ap_fixed_config2_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_ST_fsm_pp0_stage0 = "1";
const sc_lv<2> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_ST_fsm_pp0_stage1 = "10";
const bool dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_boolean_1 = true;
const sc_lv<32> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_boolean_0 = false;
const sc_lv<32> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_lv32_1 = "1";
const sc_lv<1> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_lv1_0 = "0";
const sc_lv<1> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_lv1_1 = "1";
const sc_lv<32> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_lv32_5 = "101";
const sc_lv<32> dense_latency_ap_fixed_ap_fixed_config2_0_0_0::ap_const_lv32_14 = "10100";

dense_latency_ap_fixed_ap_fixed_config2_0_0_0::dense_latency_ap_fixed_ap_fixed_config2_0_0_0(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_block_pp0_stage1);

    SC_METHOD(thread_ap_block_pp0_stage1_11001);

    SC_METHOD(thread_ap_block_pp0_stage1_subdone);
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_block_state1_pp0_stage0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_block_state2_pp0_stage1_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter1);

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0_reg );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_idle_pp0_0to0);
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_idle_pp0_1to1);
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_reset_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_idle_pp0_0to0 );

    SC_METHOD(thread_ap_return_0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( res_0_V_write_assign_reg_113 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( grp_fu_59_p2 );

    SC_METHOD(thread_grp_fu_59_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( sext_ln1118_fu_83_p1 );
    sensitive << ( sext_ln1118_reg_108 );
    sensitive << ( ap_block_pp0_stage1 );

    SC_METHOD(thread_grp_fu_59_p1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( sext_ln1118_1_fu_88_p1 );
    sensitive << ( sext_ln1118_2_fu_93_p1 );
    sensitive << ( ap_block_pp0_stage1 );

    SC_METHOD(thread_grp_fu_59_p2);
    sensitive << ( grp_fu_59_p0 );
    sensitive << ( grp_fu_59_p1 );

    SC_METHOD(thread_sext_ln1118_1_fu_88_p1);
    sensitive << ( w2_V_q0 );

    SC_METHOD(thread_sext_ln1118_2_fu_93_p1);
    sensitive << ( w2_V_load_1_reg_118 );

    SC_METHOD(thread_sext_ln1118_fu_83_p1);
    sensitive << ( ap_port_reg_data_V_read );

    SC_METHOD(thread_w2_V_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_w2_V_address1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_w2_V_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_w2_V_ce1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_block_pp0_stage1_subdone );
    sensitive << ( ap_reset_idle_pp0 );
    sensitive << ( ap_idle_pp0_1to1 );

    ap_CS_fsm = "01";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "dense_latency_ap_fixed_ap_fixed_config2_0_0_0_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
    sc_trace(mVcdFile, data_V_read, "(port)data_V_read");
    sc_trace(mVcdFile, w2_V_address0, "(port)w2_V_address0");
    sc_trace(mVcdFile, w2_V_ce0, "(port)w2_V_ce0");
    sc_trace(mVcdFile, w2_V_q0, "(port)w2_V_q0");
    sc_trace(mVcdFile, w2_V_address1, "(port)w2_V_address1");
    sc_trace(mVcdFile, w2_V_ce1, "(port)w2_V_ce1");
    sc_trace(mVcdFile, w2_V_q1, "(port)w2_V_q1");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage1, "ap_CS_fsm_pp0_stage1");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage1_iter0, "ap_block_state2_pp0_stage1_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage1_11001, "ap_block_pp0_stage1_11001");
    sc_trace(mVcdFile, sext_ln1118_fu_83_p1, "sext_ln1118_fu_83_p1");
    sc_trace(mVcdFile, sext_ln1118_reg_108, "sext_ln1118_reg_108");
    sc_trace(mVcdFile, res_0_V_write_assign_reg_113, "res_0_V_write_assign_reg_113");
    sc_trace(mVcdFile, w2_V_load_1_reg_118, "w2_V_load_1_reg_118");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0_reg, "ap_enable_reg_pp0_iter0_reg");
    sc_trace(mVcdFile, ap_block_state1_pp0_stage0_iter0, "ap_block_state1_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter1, "ap_block_state3_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_block_pp0_stage1_subdone, "ap_block_pp0_stage1_subdone");
    sc_trace(mVcdFile, ap_port_reg_data_V_read, "ap_port_reg_data_V_read");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, grp_fu_59_p0, "grp_fu_59_p0");
    sc_trace(mVcdFile, grp_fu_59_p1, "grp_fu_59_p1");
    sc_trace(mVcdFile, sext_ln1118_1_fu_88_p1, "sext_ln1118_1_fu_88_p1");
    sc_trace(mVcdFile, sext_ln1118_2_fu_93_p1, "sext_ln1118_2_fu_93_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage1, "ap_block_pp0_stage1");
    sc_trace(mVcdFile, grp_fu_59_p2, "grp_fu_59_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0_0to0, "ap_idle_pp0_0to0");
    sc_trace(mVcdFile, ap_reset_idle_pp0, "ap_reset_idle_pp0");
    sc_trace(mVcdFile, ap_idle_pp0_1to1, "ap_idle_pp0_1to1");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

dense_latency_ap_fixed_ap_fixed_config2_0_0_0::~dense_latency_ap_fixed_ap_fixed_config2_0_0_0() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_port_reg_data_V_read = data_V_read.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        res_0_V_write_assign_reg_113 = grp_fu_59_p2.read().range(20, 5);
        w2_V_load_1_reg_118 = w2_V_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        sext_ln1118_reg_108 = sext_ln1118_fu_83_p1.read();
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())));
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_enable_reg_pp0_iter0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
        ap_enable_reg_pp0_iter0 = ap_start.read();
    } else {
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg.read();
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_idle_pp0_0to0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read())) {
        ap_idle_pp0_0to0 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to0 = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_idle_pp0_1to1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read())) {
        ap_idle_pp0_1to1 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to1 = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to0.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_return_0() {
    ap_return_0 = res_0_V_write_assign_reg_113.read();
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_return_1() {
    ap_return_1 = grp_fu_59_p2.read().range(20, 5);
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_grp_fu_59_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_59_p0 =  (sc_lv<16>) (sext_ln1118_reg_108.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_59_p0 =  (sc_lv<16>) (sext_ln1118_fu_83_p1.read());
    } else {
        grp_fu_59_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_grp_fu_59_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_59_p1 =  (sc_lv<6>) (sext_ln1118_2_fu_93_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_59_p1 =  (sc_lv<6>) (sext_ln1118_1_fu_88_p1.read());
    } else {
        grp_fu_59_p1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_grp_fu_59_p2() {
    grp_fu_59_p2 = (!grp_fu_59_p0.read().is_01() || !grp_fu_59_p1.read().is_01())? sc_lv<21>(): sc_bigint<16>(grp_fu_59_p0.read()) * sc_bigint<6>(grp_fu_59_p1.read());
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_sext_ln1118_1_fu_88_p1() {
    sext_ln1118_1_fu_88_p1 = esl_sext<21,6>(w2_V_q0.read());
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_sext_ln1118_2_fu_93_p1() {
    sext_ln1118_2_fu_93_p1 = esl_sext<21,6>(w2_V_load_1_reg_118.read());
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_sext_ln1118_fu_83_p1() {
    sext_ln1118_fu_83_p1 = esl_sext<21,16>(ap_port_reg_data_V_read.read());
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_w2_V_address0() {
    w2_V_address0 = ap_const_lv1_0;
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_w2_V_address1() {
    w2_V_address1 = ap_const_lv1_1;
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_w2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        w2_V_ce0 = ap_const_logic_1;
    } else {
        w2_V_ce0 = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_w2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        w2_V_ce1 = ap_const_logic_1;
    } else {
        w2_V_ce1 = ap_const_logic_0;
    }
}

void dense_latency_ap_fixed_ap_fixed_config2_0_0_0::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to1.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<2>) ("XX");
            break;
    }
}

}

