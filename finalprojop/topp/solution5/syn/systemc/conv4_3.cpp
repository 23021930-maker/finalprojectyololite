#include "conv4.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv4::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void conv4::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void conv4::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void conv4::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void conv4::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void conv4::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void conv4::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void conv4::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void conv4::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void conv4::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void conv4::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void conv4::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void conv4::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void conv4::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void conv4::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void conv4::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void conv4::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void conv4::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void conv4::thread_ap_block_state21() {
    ap_block_state21 = ((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read())));
}

void conv4::thread_ap_block_state3() {
    ap_block_state3 = ((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())));
}

void conv4::thread_ap_block_state4() {
    ap_block_state4 = (esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()));
}

void conv4::thread_ap_block_state5() {
    ap_block_state5 = (esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()));
}

void conv4::thread_ap_block_state6() {
    ap_block_state6 = (esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()));
}

void conv4::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond6_i_fu_5910_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void conv4::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void conv4::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void conv4::thread_c_fu_6268_p2() {
    c_fu_6268_p2 = (!c_i_reg_5789.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(c_i_reg_5789.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void conv4::thread_exitcond1_i_fu_7582_p2() {
    exitcond1_i_fu_7582_p2 = (!kc_i_reg_5836.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(kc_i_reg_5836.read() == ap_const_lv2_3);
}

void conv4::thread_exitcond2_i_fu_7498_p2() {
    exitcond2_i_fu_7498_p2 = (!kr_i_reg_5813.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(kr_i_reg_5813.read() == ap_const_lv2_3);
}

void conv4::thread_exitcond3_i_fu_6715_p2() {
    exitcond3_i_fu_6715_p2 = (!oc_i_reg_5801.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(oc_i_reg_5801.read() == ap_const_lv6_20);
}

void conv4::thread_exitcond5_i_fu_6262_p2() {
    exitcond5_i_fu_6262_p2 = (!c_i_reg_5789.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(c_i_reg_5789.read() == ap_const_lv4_C);
}

void conv4::thread_exitcond6_i_fu_5910_p2() {
    exitcond6_i_fu_5910_p2 = (!r_i_reg_5778.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(r_i_reg_5778.read() == ap_const_lv4_C);
}

void conv4::thread_exitcond_i_fu_7603_p2() {
    exitcond_i_fu_7603_p2 = (!ic_1_i_reg_5859.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(ic_1_i_reg_5859.read() == ap_const_lv6_20);
}

void conv4::thread_f3_0_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_0_blk_n = f3_0_empty_n.read();
    } else {
        f3_0_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_0_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_0_read = ap_const_logic_1;
    } else {
        f3_0_read = ap_const_logic_0;
    }
}

void conv4::thread_f3_1_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_1_blk_n = f3_1_empty_n.read();
    } else {
        f3_1_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_1_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_1_read = ap_const_logic_1;
    } else {
        f3_1_read = ap_const_logic_0;
    }
}

void conv4::thread_f3_2_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_2_blk_n = f3_2_empty_n.read();
    } else {
        f3_2_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_2_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_2_read = ap_const_logic_1;
    } else {
        f3_2_read = ap_const_logic_0;
    }
}

void conv4::thread_f3_3_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_3_blk_n = f3_3_empty_n.read();
    } else {
        f3_3_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_3_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_3_read = ap_const_logic_1;
    } else {
        f3_3_read = ap_const_logic_0;
    }
}

void conv4::thread_f3_4_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_4_blk_n = f3_4_empty_n.read();
    } else {
        f3_4_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_4_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_4_read = ap_const_logic_1;
    } else {
        f3_4_read = ap_const_logic_0;
    }
}

void conv4::thread_f3_5_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_5_blk_n = f3_5_empty_n.read();
    } else {
        f3_5_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_5_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_5_read = ap_const_logic_1;
    } else {
        f3_5_read = ap_const_logic_0;
    }
}

void conv4::thread_f3_6_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_6_blk_n = f3_6_empty_n.read();
    } else {
        f3_6_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_6_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_6_read = ap_const_logic_1;
    } else {
        f3_6_read = ap_const_logic_0;
    }
}

void conv4::thread_f3_7_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        f3_7_blk_n = f3_7_empty_n.read();
    } else {
        f3_7_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_f3_7_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        f3_7_read = ap_const_logic_1;
    } else {
        f3_7_read = ap_const_logic_0;
    }
}

void conv4::thread_ic_fu_7609_p2() {
    ic_fu_7609_p2 = (!ic_1_i_reg_5859.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ic_1_i_reg_5859.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void conv4::thread_icmp2_fu_6704_p2() {
    icmp2_fu_6704_p2 = (!tmp_52_fu_6694_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_52_fu_6694_p4.read() != ap_const_lv3_0);
}

void conv4::thread_icmp_fu_5932_p2() {
    icmp_fu_5932_p2 = (!tmp_51_fu_5922_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_5922_p4.read() != ap_const_lv3_0);
}

void conv4::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond6_i_fu_5910_p2.read(), ap_const_lv1_1))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void conv4::thread_kc_fu_7588_p2() {
    kc_fu_7588_p2 = (!kc_i_reg_5836.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(kc_i_reg_5836.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void conv4::thread_kr_fu_7504_p2() {
    kr_fu_7504_p2 = (!kr_i_reg_5813.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(kr_i_reg_5813.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void conv4::thread_linbu_7_0_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_0_0_address0 = linbu_7_0_0_0_addr_reg_11071.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_0_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_0_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_0_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_0_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_0_1_address0 = linbu_7_0_0_1_addr_reg_11151.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_0_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_0_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_0_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_0_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_0_2_address0 = linbu_7_0_0_2_addr_reg_11443.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_0_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_0_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_0_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_0_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_0_3_address0 = linbu_7_0_0_3_addr_reg_11571.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_0_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_0_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_0_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_0_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_0_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_1_0_address0 = linbu_7_0_1_0_addr_reg_11081.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_1_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_1_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_1_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_1_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_1_1_address0 = linbu_7_0_1_1_addr_reg_11167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_1_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_1_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_1_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_1_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_1_2_address0 = linbu_7_0_1_2_addr_reg_11459.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_1_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_1_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_1_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_1_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_1_3_address0 = linbu_7_0_1_3_addr_reg_11581.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_1_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_1_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_1_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_1_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_1_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_2_0_address0 = linbu_7_0_2_0_addr_reg_11091.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_2_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_2_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_2_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_2_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_2_1_address0 = linbu_7_0_2_1_addr_reg_11183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_2_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_2_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_2_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_2_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_2_2_address0 = linbu_7_0_2_2_addr_reg_11475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_2_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_2_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_2_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_2_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_2_3_address0 = linbu_7_0_2_3_addr_reg_11591.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_2_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_2_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_2_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_2_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_2_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_3_0_address0 = linbu_7_0_3_0_addr_reg_11101.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_3_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_3_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_3_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_3_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_3_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_3_1_address0 = linbu_7_0_3_1_addr_reg_11199.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_3_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_3_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_3_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_3_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_3_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_3_2_address0 = linbu_7_0_3_2_addr_reg_11491.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_3_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_3_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_3_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_3_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_3_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_3_3_address0 = linbu_7_0_3_3_addr_reg_11601.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_3_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_3_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_3_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_3_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_3_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_3_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_3_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_4_0_address0 = linbu_7_0_4_0_addr_reg_11111.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_4_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_4_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_4_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_4_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_4_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_4_1_address0 = linbu_7_0_4_1_addr_reg_11215.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_4_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_4_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_4_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_4_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_4_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_4_2_address0 = linbu_7_0_4_2_addr_reg_11507.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_4_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_4_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_4_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_4_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_4_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_4_3_address0 = linbu_7_0_4_3_addr_reg_11611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_4_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_4_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_4_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_4_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_4_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_4_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_4_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_5_0_address0 = linbu_7_0_5_0_addr_reg_11121.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_5_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_5_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_5_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_5_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_5_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_5_1_address0 = linbu_7_0_5_1_addr_reg_11231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_5_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_5_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_5_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_5_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_5_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_5_2_address0 = linbu_7_0_5_2_addr_reg_11523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_5_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_5_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_5_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_5_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_5_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_5_3_address0 = linbu_7_0_5_3_addr_reg_11621.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_5_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_5_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_5_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_5_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_5_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_5_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_5_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_6_0_address0 = linbu_7_0_6_0_addr_reg_11131.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_6_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_6_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_6_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_6_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_6_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_6_1_address0 = linbu_7_0_6_1_addr_reg_11247.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_6_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_6_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_6_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_6_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_6_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_6_2_address0 = linbu_7_0_6_2_addr_reg_11539.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_6_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_6_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_6_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_6_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_6_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_6_3_address0 = linbu_7_0_6_3_addr_reg_11631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_6_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_6_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_6_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_6_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_6_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_6_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_6_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_7_0_address0 = linbu_7_0_7_0_addr_reg_11141.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_7_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_7_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_7_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_7_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_7_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_7_1_address0 = linbu_7_0_7_1_addr_reg_11263.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_0_7_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_0_7_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_7_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_7_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_7_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_7_2_address0 = linbu_7_0_7_2_addr_reg_11555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_7_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_7_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_7_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_7_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_7_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_0_7_3_address0 = linbu_7_0_7_3_addr_reg_11641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_0_7_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_0_7_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_0_7_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_0_7_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_0_7_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_0_7_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_0_7_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_0_0_address0 = linbu_7_1_0_0_addr_reg_11076.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_0_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_0_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_0_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_0_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_0_1_address0 = linbu_7_1_0_1_addr_reg_11156.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_0_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_0_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_0_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_0_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_0_2_address0 = linbu_7_1_0_2_addr_reg_11448.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_0_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_0_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_0_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_0_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_0_3_address0 = linbu_7_1_0_3_addr_reg_11576.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_0_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_0_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_0_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_0_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_0_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_1_0_address0 = linbu_7_1_1_0_addr_reg_11086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_1_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_1_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_1_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_1_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_1_1_address0 = linbu_7_1_1_1_addr_reg_11172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_1_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_1_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_1_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_1_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_1_2_address0 = linbu_7_1_1_2_addr_reg_11464.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_1_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_1_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_1_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_1_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_1_3_address0 = linbu_7_1_1_3_addr_reg_11586.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_1_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_1_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_1_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_1_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_1_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_2_0_address0 = linbu_7_1_2_0_addr_reg_11096.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_2_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_2_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_2_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_2_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_2_1_address0 = linbu_7_1_2_1_addr_reg_11188.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_2_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_2_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_2_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_2_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_2_2_address0 = linbu_7_1_2_2_addr_reg_11480.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_2_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_2_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_2_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_2_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_2_3_address0 = linbu_7_1_2_3_addr_reg_11596.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_2_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_2_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_2_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_2_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_2_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_3_0_address0 = linbu_7_1_3_0_addr_reg_11106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_3_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_3_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_3_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_3_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_3_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_3_1_address0 = linbu_7_1_3_1_addr_reg_11204.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_3_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_3_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_3_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_3_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_3_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_3_2_address0 = linbu_7_1_3_2_addr_reg_11496.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_3_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_3_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_3_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_3_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_3_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_3_3_address0 = linbu_7_1_3_3_addr_reg_11606.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_3_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_3_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_3_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_3_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_3_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_3_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_3_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_4_0_address0 = linbu_7_1_4_0_addr_reg_11116.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_4_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_4_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_4_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_4_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_4_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_4_1_address0 = linbu_7_1_4_1_addr_reg_11220.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_4_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_4_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_4_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_4_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_4_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_4_2_address0 = linbu_7_1_4_2_addr_reg_11512.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_4_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_4_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_4_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_4_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_4_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_4_3_address0 = linbu_7_1_4_3_addr_reg_11616.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_4_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_4_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_4_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_4_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_4_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_4_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_4_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_5_0_address0 = linbu_7_1_5_0_addr_reg_11126.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_5_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_5_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_5_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_5_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_5_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_5_1_address0 = linbu_7_1_5_1_addr_reg_11236.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_5_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_5_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_5_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_5_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_5_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_5_2_address0 = linbu_7_1_5_2_addr_reg_11528.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_5_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_5_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_5_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_5_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_5_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_5_3_address0 = linbu_7_1_5_3_addr_reg_11626.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_5_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_5_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_5_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_5_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_5_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_5_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_5_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_6_0_address0 = linbu_7_1_6_0_addr_reg_11136.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_6_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_6_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_6_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_6_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_6_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_6_1_address0 = linbu_7_1_6_1_addr_reg_11252.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_6_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_6_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_6_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_6_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_6_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_6_2_address0 = linbu_7_1_6_2_addr_reg_11544.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_6_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_6_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_6_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_6_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_6_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_6_3_address0 = linbu_7_1_6_3_addr_reg_11636.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_6_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_6_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_6_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_6_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_6_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_6_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_6_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_7_0_address0 = linbu_7_1_7_0_addr_reg_11146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_7_0_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_7_0_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_7_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_7_0_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_7_0_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_7_1_address0 = linbu_7_1_7_1_addr_reg_11268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        linbu_7_1_7_1_address0 =  (sc_lv<4>) (tmp_24_i_fu_6658_p1.read());
    } else {
        linbu_7_1_7_1_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_7_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_7_1_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_7_1_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_7_2_address0 = linbu_7_1_7_2_addr_reg_11560.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_7_2_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_7_2_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_7_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_7_2_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_7_2_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        linbu_7_1_7_3_address0 = linbu_7_1_7_3_addr_reg_11646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        linbu_7_1_7_3_address0 =  (sc_lv<4>) (tmp_24_i_reg_11035.read());
    } else {
        linbu_7_1_7_3_address0 = "XXXX";
    }
}

void conv4::thread_linbu_7_1_7_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        linbu_7_1_7_3_ce0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_linbu_7_1_7_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) {
        linbu_7_1_7_3_we0 = ap_const_logic_1;
    } else {
        linbu_7_1_7_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_newIndex32_i_fu_7619_p4() {
    newIndex32_i_fu_7619_p4 = ic_1_i_reg_5859.read().range(5, 3);
}

void conv4::thread_newIndex33_i_fu_7629_p1() {
    newIndex33_i_fu_7629_p1 = esl_zext<64,3>(newIndex32_i_fu_7619_p4.read());
}

void conv4::thread_notlhs_fu_7546_p2() {
    notlhs_fu_7546_p2 = (!tmp_fu_7532_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_7532_p4.read() != ap_const_lv8_FF);
}

void conv4::thread_notrhs_fu_7552_p2() {
    notrhs_fu_7552_p2 = (!tmp_53_fu_7542_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_53_fu_7542_p1.read() == ap_const_lv23_0);
}

void conv4::thread_oc_fu_6721_p2() {
    oc_fu_6721_p2 = (!oc_i_reg_5801.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(oc_i_reg_5801.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void conv4::thread_or_cond_i_fu_6710_p2() {
    or_cond_i_fu_6710_p2 = (icmp_reg_10461.read() & icmp2_fu_6704_p2.read());
}

void conv4::thread_out_0_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0))) {
        out_0_blk_n = out_0_full_n.read();
    } else {
        out_0_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_0_din() {
    out_0_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_0_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_0_write = ap_const_logic_1;
    } else {
        out_0_write = ap_const_logic_0;
    }
}

void conv4::thread_out_1_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1))) {
        out_1_blk_n = out_1_full_n.read();
    } else {
        out_1_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_1_din() {
    out_1_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_1_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_1_write = ap_const_logic_1;
    } else {
        out_1_write = ap_const_logic_0;
    }
}

void conv4::thread_out_2_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2))) {
        out_2_blk_n = out_2_full_n.read();
    } else {
        out_2_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_2_din() {
    out_2_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_2_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_2_write = ap_const_logic_1;
    } else {
        out_2_write = ap_const_logic_0;
    }
}

void conv4::thread_out_3_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3))) {
        out_3_blk_n = out_3_full_n.read();
    } else {
        out_3_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_3_din() {
    out_3_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_3_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_3_write = ap_const_logic_1;
    } else {
        out_3_write = ap_const_logic_0;
    }
}

void conv4::thread_out_4_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4))) {
        out_4_blk_n = out_4_full_n.read();
    } else {
        out_4_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_4_din() {
    out_4_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_4_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_4_write = ap_const_logic_1;
    } else {
        out_4_write = ap_const_logic_0;
    }
}

void conv4::thread_out_5_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5))) {
        out_5_blk_n = out_5_full_n.read();
    } else {
        out_5_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_5_din() {
    out_5_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_5_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_5_write = ap_const_logic_1;
    } else {
        out_5_write = ap_const_logic_0;
    }
}

void conv4::thread_out_6_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6))) {
        out_6_blk_n = out_6_full_n.read();
    } else {
        out_6_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_6_din() {
    out_6_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_6_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_6_write = ap_const_logic_1;
    } else {
        out_6_write = ap_const_logic_0;
    }
}

void conv4::thread_out_7_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7))) {
        out_7_blk_n = out_7_full_n.read();
    } else {
        out_7_blk_n = ap_const_logic_1;
    }
}

void conv4::thread_out_7_din() {
    out_7_din = sum_3_i_reg_11872.read();
}

void conv4::thread_out_7_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
         !((esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_6) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_6_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_5) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_5_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_4) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_4_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_3) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_3_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_2) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_2_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_1_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_0_full_n.read())) || (esl_seteq<1,3,3>(tmp_54_reg_11884.read(), ap_const_lv3_7) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_7_full_n.read()))))) {
        out_7_write = ap_const_logic_1;
    } else {
        out_7_write = ap_const_logic_0;
    }
}

void conv4::thread_p_shl_i_fu_7514_p3() {
    p_shl_i_fu_7514_p3 = esl_concat<2,2>(kr_i_reg_5813.read(), ap_const_lv2_0);
}

void conv4::thread_r_fu_5916_p2() {
    r_fu_5916_p2 = (!r_i_reg_5778.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(r_i_reg_5778.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void conv4::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void conv4::thread_start_out() {
    start_out = real_start.read();
}

void conv4::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void conv4::thread_sum4_i_to_int_fu_7528_p1() {
    sum4_i_to_int_fu_7528_p1 = sum4_i_reg_5824.read();
}

void conv4::thread_sum_3_i_fu_7570_p3() {
    sum_3_i_fu_7570_p3 = (!tmp_4_fu_7564_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_4_fu_7564_p2.read()[0].to_bool())? ap_const_lv32_0: sum4_i_reg_5824.read());
}

void conv4::thread_tmp_245_i_fu_7510_p1() {
    tmp_245_i_fu_7510_p1 = esl_zext<4,2>(kr_i_reg_5813.read());
}

void conv4::thread_tmp_246_i_fu_7522_p2() {
    tmp_246_i_fu_7522_p2 = (!p_shl_i_fu_7514_p3.read().is_01() || !tmp_245_i_fu_7510_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(p_shl_i_fu_7514_p3.read()) - sc_biguint<4>(tmp_245_i_fu_7510_p1.read()));
}

void conv4::thread_tmp_247_i_fu_7594_p1() {
    tmp_247_i_fu_7594_p1 = esl_zext<4,2>(kc_i_reg_5836.read());
}

void conv4::thread_tmp_248_i_fu_7598_p2() {
    tmp_248_i_fu_7598_p2 = (!tmp_246_i_reg_11867.read().is_01() || !tmp_247_i_fu_7594_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_246_i_reg_11867.read()) + sc_biguint<4>(tmp_247_i_fu_7594_p1.read()));
}

void conv4::thread_tmp_24_i_fu_6658_p1() {
    tmp_24_i_fu_6658_p1 = esl_zext<64,4>(c_i_reg_5789.read());
}

void conv4::thread_tmp_2_fu_7558_p2() {
    tmp_2_fu_7558_p2 = (notrhs_fu_7552_p2.read() | notlhs_fu_7546_p2.read());
}

void conv4::thread_tmp_4_fu_7564_p2() {
    tmp_4_fu_7564_p2 = (tmp_2_fu_7558_p2.read() & tmp_3_fu_5892_p2.read());
}

void conv4::thread_tmp_51_fu_5922_p4() {
    tmp_51_fu_5922_p4 = r_i_reg_5778.read().range(3, 1);
}

void conv4::thread_tmp_52_fu_6694_p4() {
    tmp_52_fu_6694_p4 = c_i_reg_5789.read().range(3, 1);
}

void conv4::thread_tmp_53_fu_7542_p1() {
    tmp_53_fu_7542_p1 = sum4_i_to_int_fu_7528_p1.read().range(23-1, 0);
}

void conv4::thread_tmp_54_fu_7578_p1() {
    tmp_54_fu_7578_p1 = oc_i_reg_5801.read().range(3-1, 0);
}

void conv4::thread_tmp_55_fu_7615_p1() {
    tmp_55_fu_7615_p1 = ic_1_i_reg_5859.read().range(3-1, 0);
}

void conv4::thread_tmp_5_fu_7711_p73() {
    tmp_5_fu_7711_p73 = esl_concat<4,3>(tmp_248_i_reg_11896.read(), tmp_55_reg_11909.read());
}

void conv4::thread_tmp_fu_7532_p4() {
    tmp_fu_7532_p4 = sum4_i_to_int_fu_7528_p1.read().range(30, 23);
}

void conv4::thread_win_buf_0_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_d0 = win_buf_load_78_i_fu_622.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_d0 = win_buf_load_i_fu_1006.read();
    } else {
        win_buf_0_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_0_d1 = win_buf_load_70_i_fu_814.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_0_d1 = win_buf_load_86_i_fu_430.read();
    } else {
        win_buf_0_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_0_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_0_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_d0 = win_buf_load_77_i_fu_646.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_d0 = win_buf_load_93_i_fu_262.read();
    } else {
        win_buf_0_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_1_d1 = win_buf_load_69_i_fu_838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_1_d1 = win_buf_load_85_i_fu_454.read();
    } else {
        win_buf_0_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_1_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_1_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_d0 = win_buf_load_76_i_fu_670.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_d0 = win_buf_load_92_i_fu_286.read();
    } else {
        win_buf_0_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_2_d1 = win_buf_load_68_i_fu_862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_2_d1 = win_buf_load_84_i_fu_478.read();
    } else {
        win_buf_0_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_2_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_2_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_d0 = win_buf_load_75_i_fu_694.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_d0 = win_buf_load_91_i_fu_310.read();
    } else {
        win_buf_0_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_3_d1 = win_buf_load_67_i_fu_886.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_3_d1 = win_buf_load_83_i_fu_502.read();
    } else {
        win_buf_0_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_3_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_3_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_d0 = win_buf_load_74_i_fu_718.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_d0 = win_buf_load_90_i_fu_334.read();
    } else {
        win_buf_0_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_4_d1 = win_buf_load_66_i_fu_910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_4_d1 = win_buf_load_82_i_fu_526.read();
    } else {
        win_buf_0_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_4_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_4_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_d0 = win_buf_load_73_i_fu_742.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_d0 = win_buf_load_89_i_fu_358.read();
    } else {
        win_buf_0_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_5_d1 = win_buf_load_65_i_fu_934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_5_d1 = win_buf_load_81_i_fu_550.read();
    } else {
        win_buf_0_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_5_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_5_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_d0 = win_buf_load_72_i_fu_766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_d0 = win_buf_load_88_i_fu_382.read();
    } else {
        win_buf_0_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_6_d1 = win_buf_load_64_i_fu_958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_6_d1 = win_buf_load_80_i_fu_574.read();
    } else {
        win_buf_0_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_6_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_6_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_0_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_0_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_0_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_0_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_d0 = win_buf_load_71_i_fu_790.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_d0 = win_buf_load_87_i_fu_406.read();
    } else {
        win_buf_0_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_0_7_d1 = win_buf_load_63_i_fu_982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_0_7_d1 = win_buf_load_79_i_fu_598.read();
    } else {
        win_buf_0_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_0_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_7_we0 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_0_7_we1 = ap_const_logic_1;
    } else {
        win_buf_0_0_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_d0 = win_buf_load_239_reg_10691.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_d0 = win_buf_load_7_024_i_fu_250.read();
    } else {
        win_buf_0_1_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_0_d1 = win_buf_load_263_reg_10835.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_0_d1 = win_buf_load_7_54_i_fu_434.read();
    } else {
        win_buf_0_1_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_0_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_0_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_d0 = win_buf_load_242_reg_10709.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_d0 = win_buf_load_7_61_i_fu_266.read();
    } else {
        win_buf_0_1_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_1_d1 = win_buf_load_266_reg_10853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_1_d1 = win_buf_load_7_53_i_fu_458.read();
    } else {
        win_buf_0_1_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_1_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_1_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_d0 = win_buf_load_245_reg_10727.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_d0 = win_buf_load_7_60_i_fu_290.read();
    } else {
        win_buf_0_1_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_2_d1 = win_buf_load_269_reg_10871.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_2_d1 = win_buf_load_7_52_i_fu_482.read();
    } else {
        win_buf_0_1_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_2_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_2_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_d0 = win_buf_load_248_reg_10745.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_d0 = win_buf_load_7_59_i_fu_314.read();
    } else {
        win_buf_0_1_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_3_d1 = win_buf_load_272_reg_10889.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_3_d1 = win_buf_load_7_51_i_fu_506.read();
    } else {
        win_buf_0_1_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_3_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_3_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_d0 = win_buf_load_251_reg_10763.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_d0 = win_buf_load_7_58_i_fu_338.read();
    } else {
        win_buf_0_1_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_4_d1 = win_buf_load_275_reg_10907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_4_d1 = win_buf_load_7_50_i_fu_530.read();
    } else {
        win_buf_0_1_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_4_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_4_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_d0 = win_buf_load_254_reg_10781.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_d0 = win_buf_load_7_57_i_fu_362.read();
    } else {
        win_buf_0_1_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_5_d1 = win_buf_load_278_reg_10925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_5_d1 = win_buf_load_7_49_i_fu_554.read();
    } else {
        win_buf_0_1_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_5_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_5_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_d0 = win_buf_load_257_reg_10799.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_d0 = win_buf_load_7_56_i_fu_386.read();
    } else {
        win_buf_0_1_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_6_d1 = win_buf_load_281_reg_10943.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_6_d1 = win_buf_load_7_48_i_fu_578.read();
    } else {
        win_buf_0_1_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_6_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_6_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_1_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_1_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_1_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_1_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_d0 = win_buf_load_260_reg_10817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_d0 = win_buf_load_7_55_i_fu_410.read();
    } else {
        win_buf_0_1_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_0_1_7_d1 = win_buf_load_284_reg_10961.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_0_1_7_d1 = win_buf_load_7_47_i_fu_602.read();
    } else {
        win_buf_0_1_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_1_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_7_we0 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_1_7_we1 = ap_const_logic_1;
    } else {
        win_buf_0_1_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_d0 = linbu_7_0_0_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_d0 = linbu_7_0_0_0_q0.read();
    } else {
        win_buf_0_2_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_0_d1 = linbu_7_0_0_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_0_d1 = linbu_7_0_0_1_q0.read();
    } else {
        win_buf_0_2_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_0_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_0_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_d0 = linbu_7_0_1_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_d0 = linbu_7_0_1_0_q0.read();
    } else {
        win_buf_0_2_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_1_d1 = linbu_7_0_1_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_1_d1 = linbu_7_0_1_1_q0.read();
    } else {
        win_buf_0_2_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_1_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_1_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_d0 = linbu_7_0_2_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_d0 = linbu_7_0_2_0_q0.read();
    } else {
        win_buf_0_2_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_2_d1 = linbu_7_0_2_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_2_d1 = linbu_7_0_2_1_q0.read();
    } else {
        win_buf_0_2_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_2_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_2_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_d0 = linbu_7_0_3_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_d0 = linbu_7_0_3_0_q0.read();
    } else {
        win_buf_0_2_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_3_d1 = linbu_7_0_3_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_3_d1 = linbu_7_0_3_1_q0.read();
    } else {
        win_buf_0_2_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_3_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_3_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_d0 = linbu_7_0_4_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_d0 = linbu_7_0_4_0_q0.read();
    } else {
        win_buf_0_2_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_4_d1 = linbu_7_0_4_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_4_d1 = linbu_7_0_4_1_q0.read();
    } else {
        win_buf_0_2_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_4_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_4_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_d0 = linbu_7_0_5_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_d0 = linbu_7_0_5_0_q0.read();
    } else {
        win_buf_0_2_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_5_d1 = linbu_7_0_5_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_5_d1 = linbu_7_0_5_1_q0.read();
    } else {
        win_buf_0_2_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_5_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_5_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_d0 = linbu_7_0_6_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_d0 = linbu_7_0_6_0_q0.read();
    } else {
        win_buf_0_2_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_6_d1 = linbu_7_0_6_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_6_d1 = linbu_7_0_6_1_q0.read();
    } else {
        win_buf_0_2_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_6_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_6_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_0_2_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_0_2_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_0_2_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_0_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_0_2_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_d0 = linbu_7_0_7_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_d0 = linbu_7_0_7_0_q0.read();
    } else {
        win_buf_0_2_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_0_2_7_d1 = linbu_7_0_7_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_0_2_7_d1 = linbu_7_0_7_1_q0.read();
    } else {
        win_buf_0_2_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_0_2_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_7_we0 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_0_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_0_2_7_we1 = ap_const_logic_1;
    } else {
        win_buf_0_2_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_d0 = win_buf_load_8_47_i_fu_630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_d0 = win_buf_load_8_i_fu_1010.read();
    } else {
        win_buf_1_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_0_d1 = win_buf_load_8_39_i_fu_822.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_0_d1 = win_buf_load_8_55_i_fu_438.read();
    } else {
        win_buf_1_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_0_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_0_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_d0 = win_buf_load_8_46_i_fu_654.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_d0 = win_buf_load_8_62_i_fu_270.read();
    } else {
        win_buf_1_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_1_d1 = win_buf_load_8_38_i_fu_846.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_1_d1 = win_buf_load_8_54_i_fu_462.read();
    } else {
        win_buf_1_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_1_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_1_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_d0 = win_buf_load_8_45_i_fu_678.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_d0 = win_buf_load_8_61_i_fu_294.read();
    } else {
        win_buf_1_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_2_d1 = win_buf_load_8_37_i_fu_870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_2_d1 = win_buf_load_8_53_i_fu_486.read();
    } else {
        win_buf_1_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_2_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_2_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_d0 = win_buf_load_8_44_i_fu_702.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_d0 = win_buf_load_8_60_i_fu_318.read();
    } else {
        win_buf_1_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_3_d1 = win_buf_load_8_36_i_fu_894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_3_d1 = win_buf_load_8_52_i_fu_510.read();
    } else {
        win_buf_1_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_3_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_3_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_d0 = win_buf_load_8_43_i_fu_726.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_d0 = win_buf_load_8_59_i_fu_342.read();
    } else {
        win_buf_1_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_4_d1 = win_buf_load_8_35_i_fu_918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_4_d1 = win_buf_load_8_51_i_fu_534.read();
    } else {
        win_buf_1_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_4_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_4_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_d0 = win_buf_load_8_42_i_fu_750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_d0 = win_buf_load_8_58_i_fu_366.read();
    } else {
        win_buf_1_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_5_d1 = win_buf_load_8_34_i_fu_942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_5_d1 = win_buf_load_8_50_i_fu_558.read();
    } else {
        win_buf_1_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_5_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_5_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_d0 = win_buf_load_8_41_i_fu_774.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_d0 = win_buf_load_8_57_i_fu_390.read();
    } else {
        win_buf_1_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_6_d1 = win_buf_load_8_33_i_fu_966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_6_d1 = win_buf_load_8_49_i_fu_582.read();
    } else {
        win_buf_1_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_6_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_6_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_0_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_0_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_0_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_0_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_d0 = win_buf_load_8_40_i_fu_798.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_d0 = win_buf_load_8_56_i_fu_414.read();
    } else {
        win_buf_1_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_0_7_d1 = win_buf_load_8_32_i_fu_990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_0_7_d1 = win_buf_load_8_48_i_fu_606.read();
    } else {
        win_buf_1_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_0_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_7_we0 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_0_7_we1 = ap_const_logic_1;
    } else {
        win_buf_1_0_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_d0 = win_buf_load_240_reg_10697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_d0 = win_buf_load_9_026_i_fu_254.read();
    } else {
        win_buf_1_1_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_0_d1 = win_buf_load_264_reg_10841.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_0_d1 = win_buf_load_9_54_i_fu_442.read();
    } else {
        win_buf_1_1_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_0_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_0_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_d0 = win_buf_load_243_reg_10715.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_d0 = win_buf_load_9_61_i_fu_274.read();
    } else {
        win_buf_1_1_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_1_d1 = win_buf_load_267_reg_10859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_1_d1 = win_buf_load_9_53_i_fu_466.read();
    } else {
        win_buf_1_1_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_1_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_1_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_d0 = win_buf_load_246_reg_10733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_d0 = win_buf_load_9_60_i_fu_298.read();
    } else {
        win_buf_1_1_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_2_d1 = win_buf_load_270_reg_10877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_2_d1 = win_buf_load_9_52_i_fu_490.read();
    } else {
        win_buf_1_1_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_2_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_2_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_d0 = win_buf_load_249_reg_10751.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_d0 = win_buf_load_9_59_i_fu_322.read();
    } else {
        win_buf_1_1_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_3_d1 = win_buf_load_273_reg_10895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_3_d1 = win_buf_load_9_51_i_fu_514.read();
    } else {
        win_buf_1_1_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_3_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_3_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_d0 = win_buf_load_252_reg_10769.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_d0 = win_buf_load_9_58_i_fu_346.read();
    } else {
        win_buf_1_1_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_4_d1 = win_buf_load_276_reg_10913.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_4_d1 = win_buf_load_9_50_i_fu_538.read();
    } else {
        win_buf_1_1_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_4_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_4_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_d0 = win_buf_load_255_reg_10787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_d0 = win_buf_load_9_57_i_fu_370.read();
    } else {
        win_buf_1_1_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_5_d1 = win_buf_load_279_reg_10931.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_5_d1 = win_buf_load_9_49_i_fu_562.read();
    } else {
        win_buf_1_1_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_5_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_5_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_d0 = win_buf_load_258_reg_10805.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_d0 = win_buf_load_9_56_i_fu_394.read();
    } else {
        win_buf_1_1_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_6_d1 = win_buf_load_282_reg_10949.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_6_d1 = win_buf_load_9_48_i_fu_586.read();
    } else {
        win_buf_1_1_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_6_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_6_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_1_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_1_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_1_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_1_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_d0 = win_buf_load_261_reg_10823.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_d0 = win_buf_load_9_55_i_fu_418.read();
    } else {
        win_buf_1_1_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_1_1_7_d1 = win_buf_load_285_reg_10967.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_1_1_7_d1 = win_buf_load_9_47_i_fu_610.read();
    } else {
        win_buf_1_1_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_1_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_7_we0 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_1_7_we1 = ap_const_logic_1;
    } else {
        win_buf_1_1_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_d0 = linbu_7_1_0_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_d0 = linbu_7_1_0_0_q0.read();
    } else {
        win_buf_1_2_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_0_d1 = linbu_7_1_0_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_0_d1 = linbu_7_1_0_1_q0.read();
    } else {
        win_buf_1_2_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_0_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_0_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_d0 = linbu_7_1_1_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_d0 = linbu_7_1_1_0_q0.read();
    } else {
        win_buf_1_2_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_1_d1 = linbu_7_1_1_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_1_d1 = linbu_7_1_1_1_q0.read();
    } else {
        win_buf_1_2_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_1_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_1_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_d0 = linbu_7_1_2_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_d0 = linbu_7_1_2_0_q0.read();
    } else {
        win_buf_1_2_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_2_d1 = linbu_7_1_2_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_2_d1 = linbu_7_1_2_1_q0.read();
    } else {
        win_buf_1_2_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_2_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_2_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_d0 = linbu_7_1_3_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_d0 = linbu_7_1_3_0_q0.read();
    } else {
        win_buf_1_2_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_3_d1 = linbu_7_1_3_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_3_d1 = linbu_7_1_3_1_q0.read();
    } else {
        win_buf_1_2_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_3_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_3_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_d0 = linbu_7_1_4_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_d0 = linbu_7_1_4_0_q0.read();
    } else {
        win_buf_1_2_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_4_d1 = linbu_7_1_4_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_4_d1 = linbu_7_1_4_1_q0.read();
    } else {
        win_buf_1_2_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_4_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_4_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_d0 = linbu_7_1_5_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_d0 = linbu_7_1_5_0_q0.read();
    } else {
        win_buf_1_2_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_5_d1 = linbu_7_1_5_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_5_d1 = linbu_7_1_5_1_q0.read();
    } else {
        win_buf_1_2_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_5_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_5_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_d0 = linbu_7_1_6_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_d0 = linbu_7_1_6_0_q0.read();
    } else {
        win_buf_1_2_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_6_d1 = linbu_7_1_6_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_6_d1 = linbu_7_1_6_1_q0.read();
    } else {
        win_buf_1_2_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_6_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_6_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_1_2_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_1_2_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_1_2_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_1_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_1_2_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_d0 = linbu_7_1_7_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_d0 = linbu_7_1_7_0_q0.read();
    } else {
        win_buf_1_2_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        win_buf_1_2_7_d1 = linbu_7_1_7_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        win_buf_1_2_7_d1 = linbu_7_1_7_1_q0.read();
    } else {
        win_buf_1_2_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_1_2_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_7_we0 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_1_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_1_2_7_we1 = ap_const_logic_1;
    } else {
        win_buf_1_2_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_d0 = win_buf_load_10_47_i_fu_638.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_d0 = win_buf_load_10_i_fu_1014.read();
    } else {
        win_buf_2_0_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_0_d1 = win_buf_load_10_39_i_fu_830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_0_d1 = win_buf_load_10_55_i_fu_446.read();
    } else {
        win_buf_2_0_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_0_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_0_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_d0 = win_buf_load_10_46_i_fu_662.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_d0 = win_buf_load_10_62_i_fu_278.read();
    } else {
        win_buf_2_0_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_1_d1 = win_buf_load_10_38_i_fu_854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_1_d1 = win_buf_load_10_54_i_fu_470.read();
    } else {
        win_buf_2_0_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_1_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_1_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_d0 = win_buf_load_10_45_i_fu_686.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_d0 = win_buf_load_10_61_i_fu_302.read();
    } else {
        win_buf_2_0_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_2_d1 = win_buf_load_10_37_i_fu_878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_2_d1 = win_buf_load_10_53_i_fu_494.read();
    } else {
        win_buf_2_0_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_2_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_2_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_d0 = win_buf_load_10_44_i_fu_710.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_d0 = win_buf_load_10_60_i_fu_326.read();
    } else {
        win_buf_2_0_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_3_d1 = win_buf_load_10_36_i_fu_902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_3_d1 = win_buf_load_10_52_i_fu_518.read();
    } else {
        win_buf_2_0_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_3_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_3_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_d0 = win_buf_load_10_43_i_fu_734.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_d0 = win_buf_load_10_59_i_fu_350.read();
    } else {
        win_buf_2_0_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_4_d1 = win_buf_load_10_35_i_fu_926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_4_d1 = win_buf_load_10_51_i_fu_542.read();
    } else {
        win_buf_2_0_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_4_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_4_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_d0 = win_buf_load_10_42_i_fu_758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_d0 = win_buf_load_10_58_i_fu_374.read();
    } else {
        win_buf_2_0_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_5_d1 = win_buf_load_10_34_i_fu_950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_5_d1 = win_buf_load_10_50_i_fu_566.read();
    } else {
        win_buf_2_0_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_5_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_5_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_d0 = win_buf_load_10_41_i_fu_782.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_d0 = win_buf_load_10_57_i_fu_398.read();
    } else {
        win_buf_2_0_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_6_d1 = win_buf_load_10_33_i_fu_974.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_6_d1 = win_buf_load_10_49_i_fu_590.read();
    } else {
        win_buf_2_0_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_6_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_6_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_0_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_0_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_0_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_0_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_d0 = win_buf_load_10_40_i_fu_806.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_d0 = win_buf_load_10_56_i_fu_422.read();
    } else {
        win_buf_2_0_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_0_7_d1 = win_buf_load_10_32_i_fu_998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_0_7_d1 = win_buf_load_10_48_i_fu_614.read();
    } else {
        win_buf_2_0_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_0_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_7_we0 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_0_7_we1 = ap_const_logic_1;
    } else {
        win_buf_2_0_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_0_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_d0 = win_buf_load_241_reg_10703.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_d0 = win_buf_load_11_028_s_fu_258.read();
    } else {
        win_buf_2_1_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_0_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_0_d1 = win_buf_load_265_reg_10847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_0_d1 = win_buf_load_11_54_i_fu_450.read();
    } else {
        win_buf_2_1_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_0_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_0_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_0_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_1_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_d0 = win_buf_load_244_reg_10721.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_d0 = win_buf_load_11_61_i_fu_282.read();
    } else {
        win_buf_2_1_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_1_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_1_d1 = win_buf_load_268_reg_10865.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_1_d1 = win_buf_load_11_53_i_fu_474.read();
    } else {
        win_buf_2_1_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_1_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_1_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_1_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_2_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_d0 = win_buf_load_247_reg_10739.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_d0 = win_buf_load_11_60_i_fu_306.read();
    } else {
        win_buf_2_1_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_2_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_2_d1 = win_buf_load_271_reg_10883.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_2_d1 = win_buf_load_11_52_i_fu_498.read();
    } else {
        win_buf_2_1_2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_2_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_2_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_2_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_3_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_3_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_3_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_d0 = win_buf_load_250_reg_10757.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_d0 = win_buf_load_11_59_i_fu_330.read();
    } else {
        win_buf_2_1_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_3_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_3_d1 = win_buf_load_274_reg_10901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_3_d1 = win_buf_load_11_51_i_fu_522.read();
    } else {
        win_buf_2_1_3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_3_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_3_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_3_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_4_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_4_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_4_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_d0 = win_buf_load_253_reg_10775.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_d0 = win_buf_load_11_58_i_fu_354.read();
    } else {
        win_buf_2_1_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_4_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_4_d1 = win_buf_load_277_reg_10919.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_4_d1 = win_buf_load_11_50_i_fu_546.read();
    } else {
        win_buf_2_1_4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_4_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_4_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_4_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_5_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_5_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_5_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_d0 = win_buf_load_256_reg_10793.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_d0 = win_buf_load_11_57_i_fu_378.read();
    } else {
        win_buf_2_1_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_5_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_5_d1 = win_buf_load_280_reg_10937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_5_d1 = win_buf_load_11_49_i_fu_570.read();
    } else {
        win_buf_2_1_5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_5_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_5_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_5_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_6_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_6_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_6_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_d0 = win_buf_load_259_reg_10811.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_d0 = win_buf_load_11_56_i_fu_402.read();
    } else {
        win_buf_2_1_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_6_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_6_d1 = win_buf_load_283_reg_10955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_6_d1 = win_buf_load_11_48_i_fu_594.read();
    } else {
        win_buf_2_1_6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_6_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_6_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_6_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_1_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
    } else {
        win_buf_2_1_7_address0 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_address1 =  (sc_lv<2>) (ap_const_lv64_1);
    } else {
        win_buf_2_1_7_address1 =  (sc_lv<2>) ("XX");
    }
}

void conv4::thread_win_buf_2_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_1_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_7_ce1 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_ce1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_d0 = win_buf_load_262_reg_10829.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_d0 = win_buf_load_11_55_i_fu_426.read();
    } else {
        win_buf_2_1_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        win_buf_2_1_7_d1 = win_buf_load_286_reg_10973.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        win_buf_2_1_7_d1 = win_buf_load_11_47_i_fu_618.read();
    } else {
        win_buf_2_1_7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void conv4::thread_win_buf_2_1_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_7_we0 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_1_7_we1 = ap_const_logic_1;
    } else {
        win_buf_2_1_7_we1 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_0_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_0_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_0_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_0_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_0_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_1_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_1_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_1_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_1_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_1_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_2_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_2_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_2_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_2_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_2_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_3_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_3_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_3_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_3_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_3_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_4_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_4_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_4_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_4_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_4_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_5_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_5_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_5_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_5_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_5_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_6_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_6_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_6_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_6_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_6_we0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        win_buf_2_2_7_address0 =  (sc_lv<2>) (newIndex33_i_fu_7629_p1.read());
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

void conv4::thread_win_buf_2_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        win_buf_2_2_7_ce0 = ap_const_logic_1;
    } else {
        win_buf_2_2_7_ce0 = ap_const_logic_0;
    }
}

void conv4::thread_win_buf_2_2_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
          !((esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond5_i_fu_6262_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_0, f3_0_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_1_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_2_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_3_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_4_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_5_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_6_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, f3_7_empty_n.read()))))) {
        win_buf_2_2_7_we0 = ap_const_logic_1;
    } else {
        win_buf_2_2_7_we0 = ap_const_logic_0;
    }
}

}

