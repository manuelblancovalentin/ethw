// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic myproject::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic myproject::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> myproject::ap_ST_fsm_state1 = "1";
const sc_lv<32> myproject::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<16> myproject::ap_const_lv16_0 = "0000000000000000";
const sc_lv<16> myproject::ap_const_lv16_1 = "1";
const bool myproject::ap_const_boolean_1 = true;

myproject::myproject(sc_module_name name) : sc_module(name), mVcdFile(0) {
    layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69 = new dense_latency_ap_fixed_ap_fixed_config2_0_0("layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69");
    layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69->ap_ready(layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69_ap_ready);
    layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69->data_V_read(fc1_input_V_in_sig);
    layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69->ap_return(layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69_ap_return);
    call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75 = new linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s("call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75");
    call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75->ap_ready(call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_ready);
    call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75->data_V_read(layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69_ap_return);
    call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75->ap_return(call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_return);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_const_size_in_1);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_const_size_in_1_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_const_size_out_1);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_const_size_out_1_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_fc1_input_V_ap_vld_in_sig);
    sensitive << ( fc1_input_V_ap_vld );
    sensitive << ( fc1_input_V_ap_vld_preg );

    SC_METHOD(thread_fc1_input_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld );

    SC_METHOD(thread_fc1_input_V_in_sig);
    sensitive << ( fc1_input_V );
    sensitive << ( fc1_input_V_preg );
    sensitive << ( fc1_input_V_ap_vld );

    SC_METHOD(thread_layer3_out_0_V);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );
    sensitive << ( call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_return );

    SC_METHOD(thread_layer3_out_0_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( fc1_input_V_ap_vld_in_sig );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "1";
    fc1_input_V_preg = "0000000000000000";
    fc1_input_V_ap_vld_preg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "myproject_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, fc1_input_V, "(port)fc1_input_V");
    sc_trace(mVcdFile, fc1_input_V_ap_vld, "(port)fc1_input_V_ap_vld");
    sc_trace(mVcdFile, layer3_out_0_V, "(port)layer3_out_0_V");
    sc_trace(mVcdFile, layer3_out_0_V_ap_vld, "(port)layer3_out_0_V_ap_vld");
    sc_trace(mVcdFile, const_size_in_1, "(port)const_size_in_1");
    sc_trace(mVcdFile, const_size_in_1_ap_vld, "(port)const_size_in_1_ap_vld");
    sc_trace(mVcdFile, const_size_out_1, "(port)const_size_out_1");
    sc_trace(mVcdFile, const_size_out_1_ap_vld, "(port)const_size_out_1_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, fc1_input_V_preg, "fc1_input_V_preg");
    sc_trace(mVcdFile, fc1_input_V_in_sig, "fc1_input_V_in_sig");
    sc_trace(mVcdFile, fc1_input_V_ap_vld_preg, "fc1_input_V_ap_vld_preg");
    sc_trace(mVcdFile, fc1_input_V_ap_vld_in_sig, "fc1_input_V_ap_vld_in_sig");
    sc_trace(mVcdFile, fc1_input_V_blk_n, "fc1_input_V_blk_n");
    sc_trace(mVcdFile, layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69_ap_ready, "layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69_ap_ready");
    sc_trace(mVcdFile, layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69_ap_return, "layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69_ap_return");
    sc_trace(mVcdFile, call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_ready, "call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_ready");
    sc_trace(mVcdFile, call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_return, "call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_return");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("myproject.hdltvin.dat");
    mHdltvoutHandle.open("myproject.hdltvout.dat");
}

myproject::~myproject() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_fu_69;
    delete call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75;
}

void myproject::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        fc1_input_V_ap_vld_preg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, fc1_input_V_ap_vld_in_sig.read())))) {
            fc1_input_V_ap_vld_preg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, fc1_input_V_ap_vld.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())))) {
            fc1_input_V_ap_vld_preg = fc1_input_V_ap_vld.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        fc1_input_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, fc1_input_V_ap_vld.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())))) {
            fc1_input_V_preg = fc1_input_V.read();
        }
    }
}

void myproject::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void myproject::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, fc1_input_V_ap_vld_in_sig.read()));
}

void myproject::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, fc1_input_V_ap_vld_in_sig.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void myproject::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void myproject::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, fc1_input_V_ap_vld_in_sig.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void myproject::thread_const_size_in_1() {
    const_size_in_1 = ap_const_lv16_1;
}

void myproject::thread_const_size_in_1_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, fc1_input_V_ap_vld_in_sig.read())))) {
        const_size_in_1_ap_vld = ap_const_logic_1;
    } else {
        const_size_in_1_ap_vld = ap_const_logic_0;
    }
}

void myproject::thread_const_size_out_1() {
    const_size_out_1 = ap_const_lv16_1;
}

void myproject::thread_const_size_out_1_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, fc1_input_V_ap_vld_in_sig.read())))) {
        const_size_out_1_ap_vld = ap_const_logic_1;
    } else {
        const_size_out_1_ap_vld = ap_const_logic_0;
    }
}

void myproject::thread_fc1_input_V_ap_vld_in_sig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, fc1_input_V_ap_vld.read())) {
        fc1_input_V_ap_vld_in_sig = fc1_input_V_ap_vld.read();
    } else {
        fc1_input_V_ap_vld_in_sig = fc1_input_V_ap_vld_preg.read();
    }
}

void myproject::thread_fc1_input_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        fc1_input_V_blk_n = fc1_input_V_ap_vld.read();
    } else {
        fc1_input_V_blk_n = ap_const_logic_1;
    }
}

void myproject::thread_fc1_input_V_in_sig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, fc1_input_V_ap_vld.read())) {
        fc1_input_V_in_sig = fc1_input_V.read();
    } else {
        fc1_input_V_in_sig = fc1_input_V_preg.read();
    }
}

void myproject::thread_layer3_out_0_V() {
    layer3_out_0_V = esl_sext<16,15>(call_ret6_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_75_ap_return.read());
}

void myproject::thread_layer3_out_0_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, fc1_input_V_ap_vld_in_sig.read())))) {
        layer3_out_0_V_ap_vld = ap_const_logic_1;
    } else {
        layer3_out_0_V_ap_vld = ap_const_logic_0;
    }
}

void myproject::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state1;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

void myproject::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fc1_input_V\" :  \"" << fc1_input_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fc1_input_V_ap_vld\" :  \"" << fc1_input_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer3_out_0_V\" :  \"" << layer3_out_0_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer3_out_0_V_ap_vld\" :  \"" << layer3_out_0_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_in_1\" :  \"" << const_size_in_1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_in_1_ap_vld\" :  \"" << const_size_in_1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_out_1\" :  \"" << const_size_out_1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_out_1_ap_vld\" :  \"" << const_size_out_1_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
