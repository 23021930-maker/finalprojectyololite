#include "conv5.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv5::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void conv5::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void conv5::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void conv5::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void conv5::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void conv5::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void conv5::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void conv5::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void conv5::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void conv5::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void conv5::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void conv5::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void conv5::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void conv5::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void conv5::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void conv5::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void conv5::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void conv5::thread_ap_block_state3() {
    ap_block_state3 = ((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())));
}

void conv5::thread_ap_block_state4() {
    ap_block_state4 = (esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()));
}

void conv5::thread_ap_block_state5() {
    ap_block_state5 = (esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()));
}

void conv5::thread_ap_block_state6() {
    ap_block_state6 = (esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()));
}

void conv5::thread_ap_block_state8() {
    ap_block_state8 = ((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read())));
}

void conv5::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_i_fu_5902_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void conv5::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void conv5::thread_ap_predicate_op1595_write_state8() {
    ap_predicate_op1595_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_6));
}

void conv5::thread_ap_predicate_op1597_write_state8() {
    ap_predicate_op1597_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_5));
}

void conv5::thread_ap_predicate_op1599_write_state8() {
    ap_predicate_op1599_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_4));
}

void conv5::thread_ap_predicate_op1601_write_state8() {
    ap_predicate_op1601_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_3));
}

void conv5::thread_ap_predicate_op1603_write_state8() {
    ap_predicate_op1603_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_2));
}

void conv5::thread_ap_predicate_op1605_write_state8() {
    ap_predicate_op1605_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_1));
}

void conv5::thread_ap_predicate_op1607_write_state8() {
    ap_predicate_op1607_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_0));
}

void conv5::thread_ap_predicate_op1609_write_state8() {
    ap_predicate_op1609_write_state8 = (esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_7));
}

void conv5::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void conv5::thread_c_fu_6260_p2() {
    c_fu_6260_p2 = (!c_i_reg_5779.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(c_i_reg_5779.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void conv5::thread_exitcond1_i_fu_7524_p2() {
    exitcond1_i_fu_7524_p2 = (!kc_i_reg_5834.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(kc_i_reg_5834.read() == ap_const_lv2_3);
}

void conv5::thread_exitcond2_i_fu_7490_p2() {
    exitcond2_i_fu_7490_p2 = (!kr_i_reg_5803.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(kr_i_reg_5803.read() == ap_const_lv2_3);
}

void conv5::thread_exitcond3_i_fu_6707_p2() {
    exitcond3_i_fu_6707_p2 = (!oc_i_reg_5791.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(oc_i_reg_5791.read() == ap_const_lv6_20);
}

void conv5::thread_exitcond5_i_fu_6254_p2() {
    exitcond5_i_fu_6254_p2 = (!c_i_reg_5779.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(c_i_reg_5779.read() == ap_const_lv4_A);
}

void conv5::thread_exitcond6_i_fu_5902_p2() {
    exitcond6_i_fu_5902_p2 = (!r_i_reg_5768.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(r_i_reg_5768.read() == ap_const_lv4_A);
}

void conv5::thread_exitcond_i_fu_7545_p2() {
    exitcond_i_fu_7545_p2 = (!ic_1_i_reg_5857.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(ic_1_i_reg_5857.read() == ap_const_lv6_20);
}

void conv5::thread_f4_0_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_0_blk_n = f4_0_empty_n.read();
    } else {
        f4_0_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_0_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_0_read = ap_const_logic_1;
    } else {
        f4_0_read = ap_const_logic_0;
    }
}

void conv5::thread_f4_1_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_1_blk_n = f4_1_empty_n.read();
    } else {
        f4_1_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_1_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_1_read = ap_const_logic_1;
    } else {
        f4_1_read = ap_const_logic_0;
    }
}

void conv5::thread_f4_2_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_2_blk_n = f4_2_empty_n.read();
    } else {
        f4_2_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_2_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_2_read = ap_const_logic_1;
    } else {
        f4_2_read = ap_const_logic_0;
    }
}

void conv5::thread_f4_3_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_3_blk_n = f4_3_empty_n.read();
    } else {
        f4_3_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_3_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_3_read = ap_const_logic_1;
    } else {
        f4_3_read = ap_const_logic_0;
    }
}

void conv5::thread_f4_4_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_4_blk_n = f4_4_empty_n.read();
    } else {
        f4_4_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_4_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_4_read = ap_const_logic_1;
    } else {
        f4_4_read = ap_const_logic_0;
    }
}

void conv5::thread_f4_5_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_5_blk_n = f4_5_empty_n.read();
    } else {
        f4_5_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_5_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_5_read = ap_const_logic_1;
    } else {
        f4_5_read = ap_const_logic_0;
    }
}

void conv5::thread_f4_6_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_6_blk_n = f4_6_empty_n.read();
    } else {
        f4_6_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_6_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_6_read = ap_const_logic_1;
    } else {
        f4_6_read = ap_const_logic_0;
    }
}

void conv5::thread_f4_7_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f4_7_blk_n = f4_7_empty_n.read();
    } else {
        f4_7_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_f4_7_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        f4_7_read = ap_const_logic_1;
    } else {
        f4_7_read = ap_const_logic_0;
    }
}

void conv5::thread_ic_fu_7551_p2() {
    ic_fu_7551_p2 = (!ic_1_i_reg_5857.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ic_1_i_reg_5857.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void conv5::thread_icmp1_fu_6696_p2() {
    icmp1_fu_6696_p2 = (!tmp_48_fu_6686_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_48_fu_6686_p4.read() != ap_const_lv3_0);
}

void conv5::thread_icmp_fu_5924_p2() {
    icmp_fu_5924_p2 = (!tmp_47_fu_5914_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_47_fu_5914_p4.read() != ap_const_lv3_0);
}

void conv5::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_i_fu_5902_p2.read()))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void conv5::thread_kc_fu_7530_p2() {
    kc_fu_7530_p2 = (!kc_i_reg_5834.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(kc_i_reg_5834.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void conv5::thread_kr_fu_7496_p2() {
    kr_fu_7496_p2 = (!kr_i_reg_5803.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(kr_i_reg_5803.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void conv5::thread_linbu_0_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_0_0_address0 = linbu_0_0_0_addr_reg_11013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_0_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_0_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_0_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_0_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_0_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_0_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_0_1_address0 = linbu_0_0_1_addr_reg_11093.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_0_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_0_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_0_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_0_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_0_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_0_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_0_2_address0 = linbu_0_0_2_addr_reg_11385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_0_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_0_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_0_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_0_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_0_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_0_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_0_3_address0 = linbu_0_0_3_addr_reg_11513.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_0_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_0_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_0_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_0_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_0_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_0_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_1_0_address0 = linbu_0_1_0_addr_reg_11023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_1_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_1_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_1_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_1_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_1_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_1_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_1_1_address0 = linbu_0_1_1_addr_reg_11109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_1_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_1_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_1_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_1_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_1_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_1_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_1_2_address0 = linbu_0_1_2_addr_reg_11401.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_1_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_1_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_1_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_1_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_1_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_1_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_1_3_address0 = linbu_0_1_3_addr_reg_11523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_1_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_1_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_1_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_1_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_1_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_1_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_2_0_address0 = linbu_0_2_0_addr_reg_11033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_2_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_2_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_2_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_2_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_2_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_2_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_2_1_address0 = linbu_0_2_1_addr_reg_11125.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_2_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_2_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_2_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_2_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_2_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_2_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_2_2_address0 = linbu_0_2_2_addr_reg_11417.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_2_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_2_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_2_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_2_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_2_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_2_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_2_3_address0 = linbu_0_2_3_addr_reg_11533.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_2_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_2_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_2_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_2_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_2_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_2_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_3_0_address0 = linbu_0_3_0_addr_reg_11043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_3_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_3_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_3_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_3_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_3_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_3_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_3_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_3_1_address0 = linbu_0_3_1_addr_reg_11141.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_3_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_3_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_3_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_3_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_3_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_3_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_3_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_3_2_address0 = linbu_0_3_2_addr_reg_11433.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_3_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_3_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_3_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_3_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_3_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_3_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_3_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_3_3_address0 = linbu_0_3_3_addr_reg_11543.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_3_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_3_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_3_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_3_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_3_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_3_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_3_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_3_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_4_0_address0 = linbu_0_4_0_addr_reg_11053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_4_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_4_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_4_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_4_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_4_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_4_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_4_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_4_1_address0 = linbu_0_4_1_addr_reg_11157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_4_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_4_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_4_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_4_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_4_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_4_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_4_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_4_2_address0 = linbu_0_4_2_addr_reg_11449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_4_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_4_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_4_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_4_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_4_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_4_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_4_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_4_3_address0 = linbu_0_4_3_addr_reg_11553.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_4_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_4_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_4_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_4_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_4_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_4_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_4_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_4_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_5_0_address0 = linbu_0_5_0_addr_reg_11063.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_5_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_5_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_5_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_5_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_5_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_5_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_5_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_5_1_address0 = linbu_0_5_1_addr_reg_11173.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_5_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_5_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_5_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_5_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_5_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_5_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_5_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_5_2_address0 = linbu_0_5_2_addr_reg_11465.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_5_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_5_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_5_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_5_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_5_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_5_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_5_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_5_3_address0 = linbu_0_5_3_addr_reg_11563.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_5_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_5_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_5_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_5_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_5_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_5_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_5_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_5_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_6_0_address0 = linbu_0_6_0_addr_reg_11073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_6_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_6_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_6_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_6_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_6_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_6_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_6_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_6_1_address0 = linbu_0_6_1_addr_reg_11189.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_6_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_6_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_6_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_6_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_6_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_6_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_6_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_6_2_address0 = linbu_0_6_2_addr_reg_11481.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_6_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_6_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_6_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_6_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_6_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_6_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_6_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_6_3_address0 = linbu_0_6_3_addr_reg_11573.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_6_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_6_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_6_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_6_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_6_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_6_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_6_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_6_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_7_0_address0 = linbu_0_7_0_addr_reg_11083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_7_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_7_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_7_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_7_0_ce0 = ap_const_logic_1;
    } else {
        linbu_0_7_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_7_0_we0 = ap_const_logic_1;
    } else {
        linbu_0_7_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_7_1_address0 = linbu_0_7_1_addr_reg_11205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_0_7_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_0_7_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_7_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_7_1_ce0 = ap_const_logic_1;
    } else {
        linbu_0_7_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_7_1_we0 = ap_const_logic_1;
    } else {
        linbu_0_7_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_7_2_address0 = linbu_0_7_2_addr_reg_11497.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_7_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_7_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_7_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_7_2_ce0 = ap_const_logic_1;
    } else {
        linbu_0_7_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_7_2_we0 = ap_const_logic_1;
    } else {
        linbu_0_7_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_0_7_3_address0 = linbu_0_7_3_addr_reg_11583.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_0_7_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_0_7_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_0_7_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_0_7_3_ce0 = ap_const_logic_1;
    } else {
        linbu_0_7_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_0_7_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_0_7_3_we0 = ap_const_logic_1;
    } else {
        linbu_0_7_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_0_0_address0 = linbu_1_0_0_addr_reg_11018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_0_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_0_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_0_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_0_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_0_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_0_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_0_1_address0 = linbu_1_0_1_addr_reg_11098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_0_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_0_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_0_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_0_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_0_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_0_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_0_2_address0 = linbu_1_0_2_addr_reg_11390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_0_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_0_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_0_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_0_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_0_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_0_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_0_3_address0 = linbu_1_0_3_addr_reg_11518.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_0_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_0_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_0_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_0_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_0_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_0_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_1_0_address0 = linbu_1_1_0_addr_reg_11028.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_1_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_1_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_1_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_1_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_1_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_1_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_1_1_address0 = linbu_1_1_1_addr_reg_11114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_1_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_1_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_1_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_1_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_1_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_1_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_1_2_address0 = linbu_1_1_2_addr_reg_11406.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_1_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_1_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_1_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_1_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_1_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_1_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_1_3_address0 = linbu_1_1_3_addr_reg_11528.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_1_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_1_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_1_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_1_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_1_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_1_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_2_0_address0 = linbu_1_2_0_addr_reg_11038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_2_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_2_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_2_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_2_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_2_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_2_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_2_1_address0 = linbu_1_2_1_addr_reg_11130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_2_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_2_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_2_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_2_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_2_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_2_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_2_2_address0 = linbu_1_2_2_addr_reg_11422.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_2_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_2_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_2_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_2_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_2_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_2_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_2_3_address0 = linbu_1_2_3_addr_reg_11538.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_2_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_2_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_2_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_2_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_2_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_2_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_3_0_address0 = linbu_1_3_0_addr_reg_11048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_3_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_3_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_3_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_3_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_3_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_3_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_3_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_3_1_address0 = linbu_1_3_1_addr_reg_11146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_3_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_3_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_3_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_3_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_3_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_3_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_3_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_3_2_address0 = linbu_1_3_2_addr_reg_11438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_3_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_3_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_3_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_3_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_3_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_3_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_3_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_3_3_address0 = linbu_1_3_3_addr_reg_11548.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_3_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_3_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_3_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_3_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_3_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_3_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_3_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_3_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_4_0_address0 = linbu_1_4_0_addr_reg_11058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_4_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_4_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_4_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_4_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_4_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_4_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_4_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_4_1_address0 = linbu_1_4_1_addr_reg_11162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_4_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_4_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_4_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_4_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_4_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_4_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_4_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_4_2_address0 = linbu_1_4_2_addr_reg_11454.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_4_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_4_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_4_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_4_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_4_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_4_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_4_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_4_3_address0 = linbu_1_4_3_addr_reg_11558.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_4_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_4_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_4_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_4_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_4_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_4_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_4_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_4_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_5_0_address0 = linbu_1_5_0_addr_reg_11068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_5_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_5_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_5_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_5_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_5_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_5_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_5_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_5_1_address0 = linbu_1_5_1_addr_reg_11178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_5_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_5_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_5_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_5_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_5_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_5_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_5_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_5_2_address0 = linbu_1_5_2_addr_reg_11470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_5_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_5_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_5_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_5_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_5_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_5_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_5_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_5_3_address0 = linbu_1_5_3_addr_reg_11568.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_5_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_5_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_5_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_5_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_5_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_5_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_5_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_5_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_6_0_address0 = linbu_1_6_0_addr_reg_11078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_6_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_6_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_6_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_6_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_6_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_6_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_6_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_6_1_address0 = linbu_1_6_1_addr_reg_11194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_6_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_6_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_6_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_6_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_6_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_6_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_6_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_6_2_address0 = linbu_1_6_2_addr_reg_11486.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_6_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_6_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_6_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_6_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_6_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_6_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_6_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_6_3_address0 = linbu_1_6_3_addr_reg_11578.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_6_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_6_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_6_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_6_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_6_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_6_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_6_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_6_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_7_0_address0 = linbu_1_7_0_addr_reg_11088.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_7_0_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_7_0_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_7_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_7_0_ce0 = ap_const_logic_1;
    } else {
        linbu_1_7_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_7_0_we0 = ap_const_logic_1;
    } else {
        linbu_1_7_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_7_1_address0 = linbu_1_7_1_addr_reg_11210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_1_7_1_address0 =  (sc_lv<4>) (tmp_13_i_fu_6650_p1.read());
    } else {
        linbu_1_7_1_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_7_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_7_1_ce0 = ap_const_logic_1;
    } else {
        linbu_1_7_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_7_1_we0 = ap_const_logic_1;
    } else {
        linbu_1_7_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_7_2_address0 = linbu_1_7_2_addr_reg_11502.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_7_2_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_7_2_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_7_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_7_2_ce0 = ap_const_logic_1;
    } else {
        linbu_1_7_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_7_2_we0 = ap_const_logic_1;
    } else {
        linbu_1_7_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_1_7_3_address0 = linbu_1_7_3_addr_reg_11588.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_1_7_3_address0 =  (sc_lv<4>) (tmp_13_i_reg_10977.read());
    } else {
        linbu_1_7_3_address0 = "XXXX";
    }
}

void conv5::thread_linbu_1_7_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        linbu_1_7_3_ce0 = ap_const_logic_1;
    } else {
        linbu_1_7_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_linbu_1_7_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) {
        linbu_1_7_3_we0 = ap_const_logic_1;
    } else {
        linbu_1_7_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_newIndex29_i_fu_7561_p4() {
    newIndex29_i_fu_7561_p4 = ic_1_i_reg_5857.read().range(5, 3);
}

void conv5::thread_newIndex30_i_fu_7571_p1() {
    newIndex30_i_fu_7571_p1 = esl_zext<64,3>(newIndex29_i_fu_7561_p4.read());
}

void conv5::thread_oc_fu_6713_p2() {
    oc_fu_6713_p2 = (!oc_i_reg_5791.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(oc_i_reg_5791.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void conv5::thread_or_cond_i_fu_6702_p2() {
    or_cond_i_fu_6702_p2 = (icmp_reg_10403.read() & icmp1_fu_6696_p2.read());
}

void conv5::thread_out_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_0))) {
        out_0_blk_n = out_0_full_n.read();
    } else {
        out_0_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_0_din() {
    out_0_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_0_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_0_write = ap_const_logic_1;
    } else {
        out_0_write = ap_const_logic_0;
    }
}

void conv5::thread_out_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_1))) {
        out_1_blk_n = out_1_full_n.read();
    } else {
        out_1_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_1_din() {
    out_1_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_1_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_1_write = ap_const_logic_1;
    } else {
        out_1_write = ap_const_logic_0;
    }
}

void conv5::thread_out_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_2))) {
        out_2_blk_n = out_2_full_n.read();
    } else {
        out_2_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_2_din() {
    out_2_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_2_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_2_write = ap_const_logic_1;
    } else {
        out_2_write = ap_const_logic_0;
    }
}

void conv5::thread_out_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_3))) {
        out_3_blk_n = out_3_full_n.read();
    } else {
        out_3_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_3_din() {
    out_3_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_3_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_3_write = ap_const_logic_1;
    } else {
        out_3_write = ap_const_logic_0;
    }
}

void conv5::thread_out_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_4))) {
        out_4_blk_n = out_4_full_n.read();
    } else {
        out_4_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_4_din() {
    out_4_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_4_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_4_write = ap_const_logic_1;
    } else {
        out_4_write = ap_const_logic_0;
    }
}

void conv5::thread_out_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_5))) {
        out_5_blk_n = out_5_full_n.read();
    } else {
        out_5_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_5_din() {
    out_5_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_5_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_5_write = ap_const_logic_1;
    } else {
        out_5_write = ap_const_logic_0;
    }
}

void conv5::thread_out_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_6))) {
        out_6_blk_n = out_6_full_n.read();
    } else {
        out_6_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_6_din() {
    out_6_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_6_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_6_write = ap_const_logic_1;
    } else {
        out_6_write = ap_const_logic_0;
    }
}

void conv5::thread_out_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(exitcond2_i_fu_7490_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,3,3>(tmp_49_fu_7520_p1.read(), ap_const_lv3_7))) {
        out_7_blk_n = out_7_full_n.read();
    } else {
        out_7_blk_n = ap_const_logic_1;
    }
}

void conv5::thread_out_7_din() {
    out_7_din = sum1_i_reg_5814.read();
}

void conv5::thread_out_7_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()) && 
         !((esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1595_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1597_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1599_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1601_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1603_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1605_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1607_write_state8.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1609_write_state8.read()))))) {
        out_7_write = ap_const_logic_1;
    } else {
        out_7_write = ap_const_logic_0;
    }
}

void conv5::thread_p_shl_i_fu_7506_p3() {
    p_shl_i_fu_7506_p3 = esl_concat<2,2>(kr_i_reg_5803.read(), ap_const_lv2_0);
}

void conv5::thread_r_fu_5908_p2() {
    r_fu_5908_p2 = (!r_i_reg_5768.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(r_i_reg_5768.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void conv5::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void conv5::thread_start_out() {
    start_out = real_start.read();
}

void conv5::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void conv5::thread_tmp_13_i_fu_6650_p1() {
    tmp_13_i_fu_6650_p1 = esl_zext<64,4>(c_i_reg_5779.read());
}

void conv5::thread_tmp_235_i_fu_7502_p1() {
    tmp_235_i_fu_7502_p1 = esl_zext<4,2>(kr_i_reg_5803.read());
}

void conv5::thread_tmp_236_i_fu_7514_p2() {
    tmp_236_i_fu_7514_p2 = (!p_shl_i_fu_7506_p3.read().is_01() || !tmp_235_i_fu_7502_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(p_shl_i_fu_7506_p3.read()) - sc_biguint<4>(tmp_235_i_fu_7502_p1.read()));
}

void conv5::thread_tmp_237_i_fu_7536_p1() {
    tmp_237_i_fu_7536_p1 = esl_zext<4,2>(kc_i_reg_5834.read());
}

void conv5::thread_tmp_238_i_fu_7540_p2() {
    tmp_238_i_fu_7540_p2 = (!tmp_236_i_reg_11809.read().is_01() || !tmp_237_i_fu_7536_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_236_i_reg_11809.read()) + sc_biguint<4>(tmp_237_i_fu_7536_p1.read()));
}

void conv5::thread_tmp_47_fu_5914_p4() {
    tmp_47_fu_5914_p4 = r_i_reg_5768.read().range(3, 1);
}

void conv5::thread_tmp_48_fu_6686_p4() {
    tmp_48_fu_6686_p4 = c_i_reg_5779.read().range(3, 1);
}

void conv5::thread_tmp_49_fu_7520_p1() {
    tmp_49_fu_7520_p1 = oc_i_reg_5791.read().range(3-1, 0);
}

void conv5::thread_tmp_50_fu_7557_p1() {
    tmp_50_fu_7557_p1 = ic_1_i_reg_5857.read().range(3-1, 0);
}

void conv5::thread_tmp_fu_7653_p73() {
    tmp_fu_7653_p73 = esl_concat<4,3>(tmp_238_i_reg_11825.read(), tmp_50_reg_11838.read());
}

void conv5::thread_win_buf_0_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_d0 = win_buf_load_41_i_fu_612.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_d0 = win_buf_load_i_fu_996.read();
    } else {
        win_buf_0_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_d1 = win_buf_load_33_i_fu_804.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_d1 = win_buf_load_49_i_fu_420.read();
    } else {
        win_buf_0_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_0_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_0_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_d0 = win_buf_load_40_i_fu_636.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_d0 = win_buf_load_56_i_fu_252.read();
    } else {
        win_buf_0_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_d1 = win_buf_load_32_i_fu_828.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_d1 = win_buf_load_48_i_fu_444.read();
    } else {
        win_buf_0_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_1_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_1_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_d0 = win_buf_load_39_i_fu_660.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_d0 = win_buf_load_55_i_fu_276.read();
    } else {
        win_buf_0_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_d1 = win_buf_load_6_i_fu_852.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_d1 = win_buf_load_47_i_fu_468.read();
    } else {
        win_buf_0_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_2_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_2_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_d0 = win_buf_load_38_i_fu_684.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_d0 = win_buf_load_54_i_fu_300.read();
    } else {
        win_buf_0_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_d1 = win_buf_load_5_i_fu_876.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_d1 = win_buf_load_46_i_fu_492.read();
    } else {
        win_buf_0_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_3_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_3_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_d0 = win_buf_load_37_i_fu_708.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_d0 = win_buf_load_53_i_fu_324.read();
    } else {
        win_buf_0_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_d1 = win_buf_load_4_i_fu_900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_d1 = win_buf_load_45_i_fu_516.read();
    } else {
        win_buf_0_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_4_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_4_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_d0 = win_buf_load_36_i_fu_732.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_d0 = win_buf_load_52_i_fu_348.read();
    } else {
        win_buf_0_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_d1 = win_buf_load_3_i_fu_924.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_d1 = win_buf_load_44_i_fu_540.read();
    } else {
        win_buf_0_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_5_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_5_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_d0 = win_buf_load_35_i_fu_756.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_d0 = win_buf_load_51_i_fu_372.read();
    } else {
        win_buf_0_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_d1 = win_buf_load_2_i_fu_948.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_d1 = win_buf_load_43_i_fu_564.read();
    } else {
        win_buf_0_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_6_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_6_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_d0 = win_buf_load_34_i_fu_780.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_d0 = win_buf_load_50_i_fu_396.read();
    } else {
        win_buf_0_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_d1 = win_buf_load_1_i_fu_972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_d1 = win_buf_load_42_i_fu_588.read();
    } else {
        win_buf_0_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_0_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_7_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_0_7_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_d0 = win_buf_load_45_reg_10633.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_d0 = win_buf_load_1_024_i_fu_240.read();
    } else {
        win_buf_0_1_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_d1 = win_buf_load_69_reg_10777.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_d1 = win_buf_load_1_54_i_fu_424.read();
    } else {
        win_buf_0_1_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_0_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_0_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_d0 = win_buf_load_48_reg_10651.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_d0 = win_buf_load_1_61_i_fu_256.read();
    } else {
        win_buf_0_1_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_d1 = win_buf_load_72_reg_10795.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_d1 = win_buf_load_1_53_i_fu_448.read();
    } else {
        win_buf_0_1_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_1_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_1_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_d0 = win_buf_load_51_reg_10669.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_d0 = win_buf_load_1_60_i_fu_280.read();
    } else {
        win_buf_0_1_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_d1 = win_buf_load_75_reg_10813.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_d1 = win_buf_load_1_52_i_fu_472.read();
    } else {
        win_buf_0_1_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_2_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_2_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_d0 = win_buf_load_54_reg_10687.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_d0 = win_buf_load_1_59_i_fu_304.read();
    } else {
        win_buf_0_1_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_d1 = win_buf_load_78_reg_10831.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_d1 = win_buf_load_1_51_i_fu_496.read();
    } else {
        win_buf_0_1_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_3_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_3_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_d0 = win_buf_load_57_reg_10705.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_d0 = win_buf_load_1_58_i_fu_328.read();
    } else {
        win_buf_0_1_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_d1 = win_buf_load_81_reg_10849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_d1 = win_buf_load_1_50_i_fu_520.read();
    } else {
        win_buf_0_1_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_4_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_4_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_d0 = win_buf_load_60_reg_10723.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_d0 = win_buf_load_1_57_i_fu_352.read();
    } else {
        win_buf_0_1_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_d1 = win_buf_load_84_reg_10867.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_d1 = win_buf_load_1_49_i_fu_544.read();
    } else {
        win_buf_0_1_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_5_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_5_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_d0 = win_buf_load_63_reg_10741.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_d0 = win_buf_load_1_56_i_fu_376.read();
    } else {
        win_buf_0_1_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_d1 = win_buf_load_87_reg_10885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_d1 = win_buf_load_1_48_i_fu_568.read();
    } else {
        win_buf_0_1_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_6_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_6_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_d0 = win_buf_load_66_reg_10759.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_d0 = win_buf_load_1_55_i_fu_400.read();
    } else {
        win_buf_0_1_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_d1 = win_buf_load_90_reg_10903.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_d1 = win_buf_load_1_47_i_fu_592.read();
    } else {
        win_buf_0_1_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_1_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_7_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_1_7_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_d0 = linbu_0_0_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_d0 = linbu_0_0_0_q0.read();
    } else {
        win_buf_0_2_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_d1 = linbu_0_0_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_d1 = linbu_0_0_1_q0.read();
    } else {
        win_buf_0_2_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_0_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_0_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_d0 = linbu_0_1_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_d0 = linbu_0_1_0_q0.read();
    } else {
        win_buf_0_2_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_d1 = linbu_0_1_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_d1 = linbu_0_1_1_q0.read();
    } else {
        win_buf_0_2_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_1_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_1_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_d0 = linbu_0_2_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_d0 = linbu_0_2_0_q0.read();
    } else {
        win_buf_0_2_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_d1 = linbu_0_2_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_d1 = linbu_0_2_1_q0.read();
    } else {
        win_buf_0_2_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_2_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_2_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_d0 = linbu_0_3_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_d0 = linbu_0_3_0_q0.read();
    } else {
        win_buf_0_2_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_d1 = linbu_0_3_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_d1 = linbu_0_3_1_q0.read();
    } else {
        win_buf_0_2_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_3_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_3_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_d0 = linbu_0_4_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_d0 = linbu_0_4_0_q0.read();
    } else {
        win_buf_0_2_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_d1 = linbu_0_4_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_d1 = linbu_0_4_1_q0.read();
    } else {
        win_buf_0_2_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_4_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_4_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_d0 = linbu_0_5_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_d0 = linbu_0_5_0_q0.read();
    } else {
        win_buf_0_2_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_d1 = linbu_0_5_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_d1 = linbu_0_5_1_q0.read();
    } else {
        win_buf_0_2_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_5_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_5_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_d0 = linbu_0_6_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_d0 = linbu_0_6_0_q0.read();
    } else {
        win_buf_0_2_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_d1 = linbu_0_6_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_d1 = linbu_0_6_1_q0.read();
    } else {
        win_buf_0_2_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_6_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_6_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_0_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_d0 = linbu_0_7_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_d0 = linbu_0_7_0_q0.read();
    } else {
        win_buf_0_2_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_d1 = linbu_0_7_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_d1 = linbu_0_7_1_q0.read();
    } else {
        win_buf_0_2_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_0_2_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_7_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_0_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_0_2_7_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_d0 = win_buf_load_2_47_i_fu_620.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_d0 = win_buf_load_2_i_748_fu_1000.read();
    } else {
        win_buf_1_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_d1 = win_buf_load_2_39_i_fu_812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_d1 = win_buf_load_2_55_i_fu_428.read();
    } else {
        win_buf_1_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_0_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_0_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_d0 = win_buf_load_2_46_i_fu_644.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_d0 = win_buf_load_2_62_i_fu_260.read();
    } else {
        win_buf_1_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_d1 = win_buf_load_2_38_i_fu_836.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_d1 = win_buf_load_2_54_i_fu_452.read();
    } else {
        win_buf_1_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_1_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_1_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_d0 = win_buf_load_2_45_i_fu_668.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_d0 = win_buf_load_2_61_i_fu_284.read();
    } else {
        win_buf_1_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_d1 = win_buf_load_2_37_i_fu_860.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_d1 = win_buf_load_2_53_i_fu_476.read();
    } else {
        win_buf_1_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_2_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_2_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_d0 = win_buf_load_2_44_i_fu_692.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_d0 = win_buf_load_2_60_i_fu_308.read();
    } else {
        win_buf_1_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_d1 = win_buf_load_2_36_i_fu_884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_d1 = win_buf_load_2_52_i_fu_500.read();
    } else {
        win_buf_1_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_3_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_3_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_d0 = win_buf_load_2_43_i_fu_716.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_d0 = win_buf_load_2_59_i_fu_332.read();
    } else {
        win_buf_1_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_d1 = win_buf_load_2_35_i_fu_908.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_d1 = win_buf_load_2_51_i_fu_524.read();
    } else {
        win_buf_1_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_4_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_4_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_d0 = win_buf_load_2_42_i_fu_740.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_d0 = win_buf_load_2_58_i_fu_356.read();
    } else {
        win_buf_1_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_d1 = win_buf_load_2_34_i_fu_932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_d1 = win_buf_load_2_50_i_fu_548.read();
    } else {
        win_buf_1_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_5_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_5_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_d0 = win_buf_load_2_41_i_fu_764.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_d0 = win_buf_load_2_57_i_fu_380.read();
    } else {
        win_buf_1_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_d1 = win_buf_load_2_33_i_fu_956.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_d1 = win_buf_load_2_49_i_fu_572.read();
    } else {
        win_buf_1_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_6_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_6_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_d0 = win_buf_load_2_40_i_fu_788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_d0 = win_buf_load_2_56_i_fu_404.read();
    } else {
        win_buf_1_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_d1 = win_buf_load_2_32_i_fu_980.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_d1 = win_buf_load_2_48_i_fu_596.read();
    } else {
        win_buf_1_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_0_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_7_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_0_7_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_d0 = win_buf_load_46_reg_10639.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_d0 = win_buf_load_3_026_i_fu_244.read();
    } else {
        win_buf_1_1_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_d1 = win_buf_load_70_reg_10783.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_d1 = win_buf_load_3_54_i_fu_432.read();
    } else {
        win_buf_1_1_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_0_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_0_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_d0 = win_buf_load_49_reg_10657.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_d0 = win_buf_load_3_61_i_fu_264.read();
    } else {
        win_buf_1_1_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_d1 = win_buf_load_73_reg_10801.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_d1 = win_buf_load_3_53_i_fu_456.read();
    } else {
        win_buf_1_1_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_1_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_1_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_d0 = win_buf_load_52_reg_10675.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_d0 = win_buf_load_3_60_i_fu_288.read();
    } else {
        win_buf_1_1_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_d1 = win_buf_load_76_reg_10819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_d1 = win_buf_load_3_52_i_fu_480.read();
    } else {
        win_buf_1_1_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_2_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_2_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_d0 = win_buf_load_55_reg_10693.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_d0 = win_buf_load_3_59_i_fu_312.read();
    } else {
        win_buf_1_1_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_d1 = win_buf_load_79_reg_10837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_d1 = win_buf_load_3_51_i_fu_504.read();
    } else {
        win_buf_1_1_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_3_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_3_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_d0 = win_buf_load_58_reg_10711.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_d0 = win_buf_load_3_58_i_fu_336.read();
    } else {
        win_buf_1_1_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_d1 = win_buf_load_82_reg_10855.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_d1 = win_buf_load_3_50_i_fu_528.read();
    } else {
        win_buf_1_1_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_4_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_4_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_d0 = win_buf_load_61_reg_10729.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_d0 = win_buf_load_3_57_i_fu_360.read();
    } else {
        win_buf_1_1_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_d1 = win_buf_load_85_reg_10873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_d1 = win_buf_load_3_49_i_fu_552.read();
    } else {
        win_buf_1_1_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_5_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_5_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_d0 = win_buf_load_64_reg_10747.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_d0 = win_buf_load_3_56_i_fu_384.read();
    } else {
        win_buf_1_1_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_d1 = win_buf_load_88_reg_10891.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_d1 = win_buf_load_3_48_i_fu_576.read();
    } else {
        win_buf_1_1_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_6_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_6_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_d0 = win_buf_load_67_reg_10765.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_d0 = win_buf_load_3_55_i_fu_408.read();
    } else {
        win_buf_1_1_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_d1 = win_buf_load_91_reg_10909.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_d1 = win_buf_load_3_47_i_fu_600.read();
    } else {
        win_buf_1_1_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_1_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_7_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_1_7_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_d0 = linbu_1_0_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_d0 = linbu_1_0_0_q0.read();
    } else {
        win_buf_1_2_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_d1 = linbu_1_0_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_d1 = linbu_1_0_1_q0.read();
    } else {
        win_buf_1_2_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_0_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_0_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_d0 = linbu_1_1_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_d0 = linbu_1_1_0_q0.read();
    } else {
        win_buf_1_2_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_d1 = linbu_1_1_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_d1 = linbu_1_1_1_q0.read();
    } else {
        win_buf_1_2_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_1_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_1_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_d0 = linbu_1_2_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_d0 = linbu_1_2_0_q0.read();
    } else {
        win_buf_1_2_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_d1 = linbu_1_2_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_d1 = linbu_1_2_1_q0.read();
    } else {
        win_buf_1_2_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_2_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_2_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_d0 = linbu_1_3_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_d0 = linbu_1_3_0_q0.read();
    } else {
        win_buf_1_2_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_d1 = linbu_1_3_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_d1 = linbu_1_3_1_q0.read();
    } else {
        win_buf_1_2_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_3_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_3_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_d0 = linbu_1_4_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_d0 = linbu_1_4_0_q0.read();
    } else {
        win_buf_1_2_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_d1 = linbu_1_4_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_d1 = linbu_1_4_1_q0.read();
    } else {
        win_buf_1_2_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_4_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_4_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_d0 = linbu_1_5_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_d0 = linbu_1_5_0_q0.read();
    } else {
        win_buf_1_2_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_d1 = linbu_1_5_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_d1 = linbu_1_5_1_q0.read();
    } else {
        win_buf_1_2_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_5_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_5_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_d0 = linbu_1_6_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_d0 = linbu_1_6_0_q0.read();
    } else {
        win_buf_1_2_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_d1 = linbu_1_6_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_d1 = linbu_1_6_1_q0.read();
    } else {
        win_buf_1_2_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_6_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_6_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_1_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_d0 = linbu_1_7_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_d0 = linbu_1_7_0_q0.read();
    } else {
        win_buf_1_2_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_d1 = linbu_1_7_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_d1 = linbu_1_7_1_q0.read();
    } else {
        win_buf_1_2_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_1_2_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_7_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_1_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_1_2_7_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_d0 = win_buf_load_4_47_i_fu_628.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_d0 = win_buf_load_4_i_749_fu_1004.read();
    } else {
        win_buf_2_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_d1 = win_buf_load_4_39_i_fu_820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_d1 = win_buf_load_4_55_i_fu_436.read();
    } else {
        win_buf_2_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_0_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_0_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_d0 = win_buf_load_4_46_i_fu_652.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_d0 = win_buf_load_4_62_i_fu_268.read();
    } else {
        win_buf_2_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_d1 = win_buf_load_4_38_i_fu_844.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_d1 = win_buf_load_4_54_i_fu_460.read();
    } else {
        win_buf_2_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_1_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_1_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_d0 = win_buf_load_4_45_i_fu_676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_d0 = win_buf_load_4_61_i_fu_292.read();
    } else {
        win_buf_2_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_d1 = win_buf_load_4_37_i_fu_868.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_d1 = win_buf_load_4_53_i_fu_484.read();
    } else {
        win_buf_2_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_2_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_2_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_d0 = win_buf_load_4_44_i_fu_700.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_d0 = win_buf_load_4_60_i_fu_316.read();
    } else {
        win_buf_2_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_d1 = win_buf_load_4_36_i_fu_892.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_d1 = win_buf_load_4_52_i_fu_508.read();
    } else {
        win_buf_2_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_3_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_3_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_d0 = win_buf_load_4_43_i_fu_724.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_d0 = win_buf_load_4_59_i_fu_340.read();
    } else {
        win_buf_2_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_d1 = win_buf_load_4_35_i_fu_916.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_d1 = win_buf_load_4_51_i_fu_532.read();
    } else {
        win_buf_2_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_4_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_4_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_d0 = win_buf_load_4_42_i_fu_748.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_d0 = win_buf_load_4_58_i_fu_364.read();
    } else {
        win_buf_2_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_d1 = win_buf_load_4_34_i_fu_940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_d1 = win_buf_load_4_50_i_fu_556.read();
    } else {
        win_buf_2_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_5_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_5_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_d0 = win_buf_load_4_41_i_fu_772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_d0 = win_buf_load_4_57_i_fu_388.read();
    } else {
        win_buf_2_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_d1 = win_buf_load_4_33_i_fu_964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_d1 = win_buf_load_4_49_i_fu_580.read();
    } else {
        win_buf_2_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_6_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_6_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_d0 = win_buf_load_4_40_i_fu_796.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_d0 = win_buf_load_4_56_i_fu_412.read();
    } else {
        win_buf_2_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_d1 = win_buf_load_4_32_i_fu_988.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_d1 = win_buf_load_4_48_i_fu_604.read();
    } else {
        win_buf_2_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_0_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_7_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_0_7_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_d0 = win_buf_load_47_reg_10645.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_d0 = win_buf_load_5_028_i_fu_248.read();
    } else {
        win_buf_2_1_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_d1 = win_buf_load_71_reg_10789.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_d1 = win_buf_load_5_54_i_fu_440.read();
    } else {
        win_buf_2_1_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_0_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_0_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_d0 = win_buf_load_50_reg_10663.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_d0 = win_buf_load_5_61_i_fu_272.read();
    } else {
        win_buf_2_1_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_d1 = win_buf_load_74_reg_10807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_d1 = win_buf_load_5_53_i_fu_464.read();
    } else {
        win_buf_2_1_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_1_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_1_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_d0 = win_buf_load_53_reg_10681.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_d0 = win_buf_load_5_60_i_fu_296.read();
    } else {
        win_buf_2_1_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_d1 = win_buf_load_77_reg_10825.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_d1 = win_buf_load_5_52_i_fu_488.read();
    } else {
        win_buf_2_1_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_2_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_2_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_d0 = win_buf_load_56_reg_10699.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_d0 = win_buf_load_5_59_i_fu_320.read();
    } else {
        win_buf_2_1_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_d1 = win_buf_load_80_reg_10843.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_d1 = win_buf_load_5_51_i_fu_512.read();
    } else {
        win_buf_2_1_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_3_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_3_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_d0 = win_buf_load_59_reg_10717.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_d0 = win_buf_load_5_58_i_fu_344.read();
    } else {
        win_buf_2_1_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_d1 = win_buf_load_83_reg_10861.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_d1 = win_buf_load_5_50_i_fu_536.read();
    } else {
        win_buf_2_1_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_4_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_4_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_d0 = win_buf_load_62_reg_10735.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_d0 = win_buf_load_5_57_i_fu_368.read();
    } else {
        win_buf_2_1_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_d1 = win_buf_load_86_reg_10879.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_d1 = win_buf_load_5_49_i_fu_560.read();
    } else {
        win_buf_2_1_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_5_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_5_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_d0 = win_buf_load_65_reg_10753.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_d0 = win_buf_load_5_56_i_fu_392.read();
    } else {
        win_buf_2_1_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_d1 = win_buf_load_89_reg_10897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_d1 = win_buf_load_5_48_i_fu_584.read();
    } else {
        win_buf_2_1_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_6_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_6_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_ce1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_d0 = win_buf_load_68_reg_10771.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_d0 = win_buf_load_5_55_i_fu_416.read();
    } else {
        win_buf_2_1_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_d1 = win_buf_load_92_reg_10915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_d1 = win_buf_load_5_47_i_fu_608.read();
    } else {
        win_buf_2_1_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv5::thread_win_buf_2_1_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_7_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_1_7_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_we1 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_0_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_0_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_0_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_0_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_1_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_1_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_1_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_1_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_2_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_2_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_2_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_2_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_3_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_3_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_3_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_3_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_4_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_4_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_4_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_4_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_5_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_5_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_5_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_5_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_6_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_6_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_6_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_6_we0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_7_address0 =  (sc_lv<2>) (newIndex30_i_fu_7571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_2_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_2_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_2_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv5::thread_win_buf_2_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_7_ce0 = ap_const_logic_0;
    }
}

void conv5::thread_win_buf_2_2_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6254_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f4_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f4_7_empty_n.read()))))) {
        win_buf_2_2_7_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_7_we0 = ap_const_logic_0;
    }
}

}

