#include "detection_head.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void detection_head::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void detection_head::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void detection_head::thread_ap_CS_fsm_pp0_stage10() {
    ap_CS_fsm_pp0_stage10 = ap_CS_fsm.read()[11];
}

void detection_head::thread_ap_CS_fsm_pp0_stage11() {
    ap_CS_fsm_pp0_stage11 = ap_CS_fsm.read()[12];
}

void detection_head::thread_ap_CS_fsm_pp0_stage12() {
    ap_CS_fsm_pp0_stage12 = ap_CS_fsm.read()[13];
}

void detection_head::thread_ap_CS_fsm_pp0_stage13() {
    ap_CS_fsm_pp0_stage13 = ap_CS_fsm.read()[14];
}

void detection_head::thread_ap_CS_fsm_pp0_stage14() {
    ap_CS_fsm_pp0_stage14 = ap_CS_fsm.read()[15];
}

void detection_head::thread_ap_CS_fsm_pp0_stage15() {
    ap_CS_fsm_pp0_stage15 = ap_CS_fsm.read()[16];
}

void detection_head::thread_ap_CS_fsm_pp0_stage16() {
    ap_CS_fsm_pp0_stage16 = ap_CS_fsm.read()[17];
}

void detection_head::thread_ap_CS_fsm_pp0_stage17() {
    ap_CS_fsm_pp0_stage17 = ap_CS_fsm.read()[18];
}

void detection_head::thread_ap_CS_fsm_pp0_stage18() {
    ap_CS_fsm_pp0_stage18 = ap_CS_fsm.read()[19];
}

void detection_head::thread_ap_CS_fsm_pp0_stage19() {
    ap_CS_fsm_pp0_stage19 = ap_CS_fsm.read()[20];
}

void detection_head::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void detection_head::thread_ap_CS_fsm_pp0_stage20() {
    ap_CS_fsm_pp0_stage20 = ap_CS_fsm.read()[21];
}

void detection_head::thread_ap_CS_fsm_pp0_stage21() {
    ap_CS_fsm_pp0_stage21 = ap_CS_fsm.read()[22];
}

void detection_head::thread_ap_CS_fsm_pp0_stage22() {
    ap_CS_fsm_pp0_stage22 = ap_CS_fsm.read()[23];
}

void detection_head::thread_ap_CS_fsm_pp0_stage23() {
    ap_CS_fsm_pp0_stage23 = ap_CS_fsm.read()[24];
}

void detection_head::thread_ap_CS_fsm_pp0_stage24() {
    ap_CS_fsm_pp0_stage24 = ap_CS_fsm.read()[25];
}

void detection_head::thread_ap_CS_fsm_pp0_stage25() {
    ap_CS_fsm_pp0_stage25 = ap_CS_fsm.read()[26];
}

void detection_head::thread_ap_CS_fsm_pp0_stage26() {
    ap_CS_fsm_pp0_stage26 = ap_CS_fsm.read()[27];
}

void detection_head::thread_ap_CS_fsm_pp0_stage27() {
    ap_CS_fsm_pp0_stage27 = ap_CS_fsm.read()[28];
}

void detection_head::thread_ap_CS_fsm_pp0_stage28() {
    ap_CS_fsm_pp0_stage28 = ap_CS_fsm.read()[29];
}

void detection_head::thread_ap_CS_fsm_pp0_stage29() {
    ap_CS_fsm_pp0_stage29 = ap_CS_fsm.read()[30];
}

void detection_head::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[4];
}

void detection_head::thread_ap_CS_fsm_pp0_stage30() {
    ap_CS_fsm_pp0_stage30 = ap_CS_fsm.read()[31];
}

void detection_head::thread_ap_CS_fsm_pp0_stage31() {
    ap_CS_fsm_pp0_stage31 = ap_CS_fsm.read()[32];
}

void detection_head::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[5];
}

void detection_head::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[6];
}

void detection_head::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[7];
}

void detection_head::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[8];
}

void detection_head::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[9];
}

void detection_head::thread_ap_CS_fsm_pp0_stage9() {
    ap_CS_fsm_pp0_stage9 = ap_CS_fsm.read()[10];
}

void detection_head::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void detection_head::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[33];
}

void detection_head::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage10() {
    ap_block_pp0_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage10_11001() {
    ap_block_pp0_stage10_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage10_subdone() {
    ap_block_pp0_stage10_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage11() {
    ap_block_pp0_stage11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage11_11001() {
    ap_block_pp0_stage11_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage11_subdone() {
    ap_block_pp0_stage11_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage12() {
    ap_block_pp0_stage12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage12_11001() {
    ap_block_pp0_stage12_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage12_subdone() {
    ap_block_pp0_stage12_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage13() {
    ap_block_pp0_stage13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage13_11001() {
    ap_block_pp0_stage13_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage13_subdone() {
    ap_block_pp0_stage13_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage14() {
    ap_block_pp0_stage14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage14_11001() {
    ap_block_pp0_stage14_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage14_subdone() {
    ap_block_pp0_stage14_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage15() {
    ap_block_pp0_stage15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage15_11001() {
    ap_block_pp0_stage15_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage15_subdone() {
    ap_block_pp0_stage15_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage16() {
    ap_block_pp0_stage16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage16_11001() {
    ap_block_pp0_stage16_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage16_subdone() {
    ap_block_pp0_stage16_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage17() {
    ap_block_pp0_stage17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage17_11001() {
    ap_block_pp0_stage17_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage17_subdone() {
    ap_block_pp0_stage17_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage18() {
    ap_block_pp0_stage18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage18_11001() {
    ap_block_pp0_stage18_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage18_subdone() {
    ap_block_pp0_stage18_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage19() {
    ap_block_pp0_stage19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage19_11001() {
    ap_block_pp0_stage19_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage19_subdone() {
    ap_block_pp0_stage19_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage20() {
    ap_block_pp0_stage20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage20_11001() {
    ap_block_pp0_stage20_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage20_subdone() {
    ap_block_pp0_stage20_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage21() {
    ap_block_pp0_stage21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage21_11001() {
    ap_block_pp0_stage21_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage21_subdone() {
    ap_block_pp0_stage21_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage22() {
    ap_block_pp0_stage22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage22_11001() {
    ap_block_pp0_stage22_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage22_subdone() {
    ap_block_pp0_stage22_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage23() {
    ap_block_pp0_stage23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage23_11001() {
    ap_block_pp0_stage23_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage23_subdone() {
    ap_block_pp0_stage23_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage24() {
    ap_block_pp0_stage24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage24_11001() {
    ap_block_pp0_stage24_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage24_subdone() {
    ap_block_pp0_stage24_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage25() {
    ap_block_pp0_stage25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage25_11001() {
    ap_block_pp0_stage25_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage25_subdone() {
    ap_block_pp0_stage25_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage26() {
    ap_block_pp0_stage26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage26_11001() {
    ap_block_pp0_stage26_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage26_subdone() {
    ap_block_pp0_stage26_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage27() {
    ap_block_pp0_stage27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage27_11001() {
    ap_block_pp0_stage27_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage27_subdone() {
    ap_block_pp0_stage27_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage28() {
    ap_block_pp0_stage28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage28_11001() {
    ap_block_pp0_stage28_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage28_subdone() {
    ap_block_pp0_stage28_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage29() {
    ap_block_pp0_stage29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage29_11001() {
    ap_block_pp0_stage29_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage29_subdone() {
    ap_block_pp0_stage29_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage30() {
    ap_block_pp0_stage30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage30_11001() {
    ap_block_pp0_stage30_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage30_subdone() {
    ap_block_pp0_stage30_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage31() {
    ap_block_pp0_stage31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage31_11001() {
    ap_block_pp0_stage31_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage31_subdone() {
    ap_block_pp0_stage31_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage8() {
    ap_block_pp0_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage8_11001() {
    ap_block_pp0_stage8_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage8_subdone() {
    ap_block_pp0_stage8_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage9() {
    ap_block_pp0_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_pp0_stage9_11001() {
    ap_block_pp0_stage9_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_pp0_stage9_subdone() {
    ap_block_pp0_stage9_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read()))));
}

void detection_head::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void detection_head::thread_ap_block_state100_pp0_stage2_iter3() {
    ap_block_state100_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state101_pp0_stage3_iter3() {
    ap_block_state101_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state102_pp0_stage4_iter3() {
    ap_block_state102_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state103_pp0_stage5_iter3() {
    ap_block_state103_pp0_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state104_pp0_stage6_iter3() {
    ap_block_state104_pp0_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state105_pp0_stage7_iter3() {
    ap_block_state105_pp0_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state106_pp0_stage8_iter3() {
    ap_block_state106_pp0_stage8_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state107_pp0_stage9_iter3() {
    ap_block_state107_pp0_stage9_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state108_pp0_stage10_iter3() {
    ap_block_state108_pp0_stage10_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state109_pp0_stage11_iter3() {
    ap_block_state109_pp0_stage11_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state10_pp0_stage8_iter0() {
    ap_block_state10_pp0_stage8_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state110_pp0_stage12_iter3() {
    ap_block_state110_pp0_stage12_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state111_pp0_stage13_iter3() {
    ap_block_state111_pp0_stage13_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state112_pp0_stage14_iter3() {
    ap_block_state112_pp0_stage14_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state113_pp0_stage15_iter3() {
    ap_block_state113_pp0_stage15_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state114_pp0_stage16_iter3() {
    ap_block_state114_pp0_stage16_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state115_pp0_stage17_iter3() {
    ap_block_state115_pp0_stage17_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state116_pp0_stage18_iter3() {
    ap_block_state116_pp0_stage18_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state117_pp0_stage19_iter3() {
    ap_block_state117_pp0_stage19_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state118_pp0_stage20_iter3() {
    ap_block_state118_pp0_stage20_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state119_pp0_stage21_iter3() {
    ap_block_state119_pp0_stage21_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state11_pp0_stage9_iter0() {
    ap_block_state11_pp0_stage9_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state120_pp0_stage22_iter3() {
    ap_block_state120_pp0_stage22_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state121_pp0_stage23_iter3() {
    ap_block_state121_pp0_stage23_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state122_pp0_stage24_iter3() {
    ap_block_state122_pp0_stage24_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state123_pp0_stage25_iter3() {
    ap_block_state123_pp0_stage25_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state124_pp0_stage26_iter3() {
    ap_block_state124_pp0_stage26_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state125_pp0_stage27_iter3() {
    ap_block_state125_pp0_stage27_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state126_pp0_stage28_iter3() {
    ap_block_state126_pp0_stage28_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state127_pp0_stage29_iter3() {
    ap_block_state127_pp0_stage29_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state128_pp0_stage30_iter3() {
    ap_block_state128_pp0_stage30_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state129_pp0_stage31_iter3() {
    ap_block_state129_pp0_stage31_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state12_pp0_stage10_iter0() {
    ap_block_state12_pp0_stage10_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state130_pp0_stage0_iter4() {
    ap_block_state130_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state131_pp0_stage1_iter4() {
    ap_block_state131_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state132_pp0_stage2_iter4() {
    ap_block_state132_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state133_pp0_stage3_iter4() {
    ap_block_state133_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state134_pp0_stage4_iter4() {
    ap_block_state134_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state135_pp0_stage5_iter4() {
    ap_block_state135_pp0_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state136_pp0_stage6_iter4() {
    ap_block_state136_pp0_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state137_pp0_stage7_iter4() {
    ap_block_state137_pp0_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state138_pp0_stage8_iter4() {
    ap_block_state138_pp0_stage8_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state139_pp0_stage9_iter4() {
    ap_block_state139_pp0_stage9_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state13_pp0_stage11_iter0() {
    ap_block_state13_pp0_stage11_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state140_pp0_stage10_iter4() {
    ap_block_state140_pp0_stage10_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state141_pp0_stage11_iter4() {
    ap_block_state141_pp0_stage11_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state142_pp0_stage12_iter4() {
    ap_block_state142_pp0_stage12_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state143_pp0_stage13_iter4() {
    ap_block_state143_pp0_stage13_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state144_pp0_stage14_iter4() {
    ap_block_state144_pp0_stage14_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state145_pp0_stage15_iter4() {
    ap_block_state145_pp0_stage15_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state146_pp0_stage16_iter4() {
    ap_block_state146_pp0_stage16_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state147_pp0_stage17_iter4() {
    ap_block_state147_pp0_stage17_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state148_pp0_stage18_iter4() {
    ap_block_state148_pp0_stage18_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state149_pp0_stage19_iter4() {
    ap_block_state149_pp0_stage19_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state14_pp0_stage12_iter0() {
    ap_block_state14_pp0_stage12_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state150_pp0_stage20_iter4() {
    ap_block_state150_pp0_stage20_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state151_pp0_stage21_iter4() {
    ap_block_state151_pp0_stage21_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state152_pp0_stage22_iter4() {
    ap_block_state152_pp0_stage22_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state153_pp0_stage23_iter4() {
    ap_block_state153_pp0_stage23_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state154_pp0_stage24_iter4() {
    ap_block_state154_pp0_stage24_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state155_pp0_stage25_iter4() {
    ap_block_state155_pp0_stage25_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state156_pp0_stage26_iter4() {
    ap_block_state156_pp0_stage26_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state157_pp0_stage27_iter4() {
    ap_block_state157_pp0_stage27_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state158_pp0_stage28_iter4() {
    ap_block_state158_pp0_stage28_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state159_pp0_stage29_iter4() {
    ap_block_state159_pp0_stage29_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state15_pp0_stage13_iter0() {
    ap_block_state15_pp0_stage13_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state160_pp0_stage30_iter4() {
    ap_block_state160_pp0_stage30_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state161_pp0_stage31_iter4() {
    ap_block_state161_pp0_stage31_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state162_pp0_stage0_iter5() {
    ap_block_state162_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state163_pp0_stage1_iter5() {
    ap_block_state163_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state164_pp0_stage2_iter5() {
    ap_block_state164_pp0_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state165_pp0_stage3_iter5() {
    ap_block_state165_pp0_stage3_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state166_pp0_stage4_iter5() {
    ap_block_state166_pp0_stage4_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state167_pp0_stage5_iter5() {
    ap_block_state167_pp0_stage5_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state168_pp0_stage6_iter5() {
    ap_block_state168_pp0_stage6_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state169_pp0_stage7_iter5() {
    ap_block_state169_pp0_stage7_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state16_pp0_stage14_iter0() {
    ap_block_state16_pp0_stage14_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state170_pp0_stage8_iter5() {
    ap_block_state170_pp0_stage8_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state171_pp0_stage9_iter5() {
    ap_block_state171_pp0_stage9_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state172_pp0_stage10_iter5() {
    ap_block_state172_pp0_stage10_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state173_pp0_stage11_iter5() {
    ap_block_state173_pp0_stage11_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state174_pp0_stage12_iter5() {
    ap_block_state174_pp0_stage12_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state175_pp0_stage13_iter5() {
    ap_block_state175_pp0_stage13_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state176_pp0_stage14_iter5() {
    ap_block_state176_pp0_stage14_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state177_pp0_stage15_iter5() {
    ap_block_state177_pp0_stage15_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state178_pp0_stage16_iter5() {
    ap_block_state178_pp0_stage16_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state179_pp0_stage17_iter5() {
    ap_block_state179_pp0_stage17_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state17_pp0_stage15_iter0() {
    ap_block_state17_pp0_stage15_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state180_pp0_stage18_iter5() {
    ap_block_state180_pp0_stage18_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state181_pp0_stage19_iter5() {
    ap_block_state181_pp0_stage19_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state182_pp0_stage20_iter5() {
    ap_block_state182_pp0_stage20_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state183_pp0_stage21_iter5() {
    ap_block_state183_pp0_stage21_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state184_pp0_stage22_iter5() {
    ap_block_state184_pp0_stage22_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state185_pp0_stage23_iter5() {
    ap_block_state185_pp0_stage23_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state186_pp0_stage24_iter5() {
    ap_block_state186_pp0_stage24_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state187_pp0_stage25_iter5() {
    ap_block_state187_pp0_stage25_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state188_pp0_stage26_iter5() {
    ap_block_state188_pp0_stage26_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state189_pp0_stage27_iter5() {
    ap_block_state189_pp0_stage27_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state18_pp0_stage16_iter0() {
    ap_block_state18_pp0_stage16_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state190_pp0_stage28_iter5() {
    ap_block_state190_pp0_stage28_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state191_pp0_stage29_iter5() {
    ap_block_state191_pp0_stage29_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state192_pp0_stage30_iter5() {
    ap_block_state192_pp0_stage30_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state193_pp0_stage31_iter5() {
    ap_block_state193_pp0_stage31_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state194_pp0_stage0_iter6() {
    ap_block_state194_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state195_pp0_stage1_iter6() {
    ap_block_state195_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state196_pp0_stage2_iter6() {
    ap_block_state196_pp0_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state197_pp0_stage3_iter6() {
    ap_block_state197_pp0_stage3_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state198_pp0_stage4_iter6() {
    ap_block_state198_pp0_stage4_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state199_pp0_stage5_iter6() {
    ap_block_state199_pp0_stage5_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state19_pp0_stage17_iter0() {
    ap_block_state19_pp0_stage17_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state200_pp0_stage6_iter6() {
    ap_block_state200_pp0_stage6_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state201_pp0_stage7_iter6() {
    ap_block_state201_pp0_stage7_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state202_pp0_stage8_iter6() {
    ap_block_state202_pp0_stage8_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state203_pp0_stage9_iter6() {
    ap_block_state203_pp0_stage9_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state204_pp0_stage10_iter6() {
    ap_block_state204_pp0_stage10_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state205_pp0_stage11_iter6() {
    ap_block_state205_pp0_stage11_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state206_pp0_stage12_iter6() {
    ap_block_state206_pp0_stage12_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state207_pp0_stage13_iter6() {
    ap_block_state207_pp0_stage13_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state208_pp0_stage14_iter6() {
    ap_block_state208_pp0_stage14_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state209_pp0_stage15_iter6() {
    ap_block_state209_pp0_stage15_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state20_pp0_stage18_iter0() {
    ap_block_state20_pp0_stage18_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state210_pp0_stage16_iter6() {
    ap_block_state210_pp0_stage16_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state211_pp0_stage17_iter6() {
    ap_block_state211_pp0_stage17_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state212_pp0_stage18_iter6() {
    ap_block_state212_pp0_stage18_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state213_pp0_stage19_iter6() {
    ap_block_state213_pp0_stage19_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state214_pp0_stage20_iter6() {
    ap_block_state214_pp0_stage20_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state215_pp0_stage21_iter6() {
    ap_block_state215_pp0_stage21_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state216_pp0_stage22_iter6() {
    ap_block_state216_pp0_stage22_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state217_pp0_stage23_iter6() {
    ap_block_state217_pp0_stage23_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state218_pp0_stage24_iter6() {
    ap_block_state218_pp0_stage24_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state219_pp0_stage25_iter6() {
    ap_block_state219_pp0_stage25_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state21_pp0_stage19_iter0() {
    ap_block_state21_pp0_stage19_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state220_pp0_stage26_iter6() {
    ap_block_state220_pp0_stage26_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state221_pp0_stage27_iter6() {
    ap_block_state221_pp0_stage27_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state222_pp0_stage28_iter6() {
    ap_block_state222_pp0_stage28_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state223_pp0_stage29_iter6() {
    ap_block_state223_pp0_stage29_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state224_pp0_stage30_iter6() {
    ap_block_state224_pp0_stage30_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state225_pp0_stage31_iter6() {
    ap_block_state225_pp0_stage31_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state226_pp0_stage0_iter7() {
    ap_block_state226_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state22_pp0_stage20_iter0() {
    ap_block_state22_pp0_stage20_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state23_pp0_stage21_iter0() {
    ap_block_state23_pp0_stage21_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state24_pp0_stage22_iter0() {
    ap_block_state24_pp0_stage22_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state25_pp0_stage23_iter0() {
    ap_block_state25_pp0_stage23_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state26_pp0_stage24_iter0() {
    ap_block_state26_pp0_stage24_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state27_pp0_stage25_iter0() {
    ap_block_state27_pp0_stage25_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state28_pp0_stage26_iter0() {
    ap_block_state28_pp0_stage26_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state29_pp0_stage27_iter0() {
    ap_block_state29_pp0_stage27_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state30_pp0_stage28_iter0() {
    ap_block_state30_pp0_stage28_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state31_pp0_stage29_iter0() {
    ap_block_state31_pp0_stage29_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state32_pp0_stage30_iter0() {
    ap_block_state32_pp0_stage30_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state33_pp0_stage31_iter0() {
    ap_block_state33_pp0_stage31_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state34_pp0_stage0_iter1() {
    ap_block_state34_pp0_stage0_iter1 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state35_pp0_stage1_iter1() {
    ap_block_state35_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state36_pp0_stage2_iter1() {
    ap_block_state36_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state37_pp0_stage3_iter1() {
    ap_block_state37_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state38_pp0_stage4_iter1() {
    ap_block_state38_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state39_pp0_stage5_iter1() {
    ap_block_state39_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state40_pp0_stage6_iter1() {
    ap_block_state40_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state41_pp0_stage7_iter1() {
    ap_block_state41_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state42_pp0_stage8_iter1() {
    ap_block_state42_pp0_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state43_pp0_stage9_iter1() {
    ap_block_state43_pp0_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state44_pp0_stage10_iter1() {
    ap_block_state44_pp0_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state45_pp0_stage11_iter1() {
    ap_block_state45_pp0_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state46_pp0_stage12_iter1() {
    ap_block_state46_pp0_stage12_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state47_pp0_stage13_iter1() {
    ap_block_state47_pp0_stage13_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state48_pp0_stage14_iter1() {
    ap_block_state48_pp0_stage14_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state49_pp0_stage15_iter1() {
    ap_block_state49_pp0_stage15_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state50_pp0_stage16_iter1() {
    ap_block_state50_pp0_stage16_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state51_pp0_stage17_iter1() {
    ap_block_state51_pp0_stage17_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state52_pp0_stage18_iter1() {
    ap_block_state52_pp0_stage18_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state53_pp0_stage19_iter1() {
    ap_block_state53_pp0_stage19_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state54_pp0_stage20_iter1() {
    ap_block_state54_pp0_stage20_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state55_pp0_stage21_iter1() {
    ap_block_state55_pp0_stage21_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state56_pp0_stage22_iter1() {
    ap_block_state56_pp0_stage22_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state57_pp0_stage23_iter1() {
    ap_block_state57_pp0_stage23_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state58_pp0_stage24_iter1() {
    ap_block_state58_pp0_stage24_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state59_pp0_stage25_iter1() {
    ap_block_state59_pp0_stage25_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state60_pp0_stage26_iter1() {
    ap_block_state60_pp0_stage26_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state61_pp0_stage27_iter1() {
    ap_block_state61_pp0_stage27_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state62_pp0_stage28_iter1() {
    ap_block_state62_pp0_stage28_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state63_pp0_stage29_iter1() {
    ap_block_state63_pp0_stage29_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state64_pp0_stage30_iter1() {
    ap_block_state64_pp0_stage30_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state65_pp0_stage31_iter1() {
    ap_block_state65_pp0_stage31_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state66_pp0_stage0_iter2() {
    ap_block_state66_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state67_pp0_stage1_iter2() {
    ap_block_state67_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state68_pp0_stage2_iter2() {
    ap_block_state68_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state69_pp0_stage3_iter2() {
    ap_block_state69_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state70_pp0_stage4_iter2() {
    ap_block_state70_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state71_pp0_stage5_iter2() {
    ap_block_state71_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state72_pp0_stage6_iter2() {
    ap_block_state72_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state73_pp0_stage7_iter2() {
    ap_block_state73_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state74_pp0_stage8_iter2() {
    ap_block_state74_pp0_stage8_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state75_pp0_stage9_iter2() {
    ap_block_state75_pp0_stage9_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state76_pp0_stage10_iter2() {
    ap_block_state76_pp0_stage10_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state77_pp0_stage11_iter2() {
    ap_block_state77_pp0_stage11_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state78_pp0_stage12_iter2() {
    ap_block_state78_pp0_stage12_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state79_pp0_stage13_iter2() {
    ap_block_state79_pp0_stage13_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state7_pp0_stage5_iter0() {
    ap_block_state7_pp0_stage5_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state80_pp0_stage14_iter2() {
    ap_block_state80_pp0_stage14_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state81_pp0_stage15_iter2() {
    ap_block_state81_pp0_stage15_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state82_pp0_stage16_iter2() {
    ap_block_state82_pp0_stage16_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state83_pp0_stage17_iter2() {
    ap_block_state83_pp0_stage17_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state84_pp0_stage18_iter2() {
    ap_block_state84_pp0_stage18_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state85_pp0_stage19_iter2() {
    ap_block_state85_pp0_stage19_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state86_pp0_stage20_iter2() {
    ap_block_state86_pp0_stage20_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state87_pp0_stage21_iter2() {
    ap_block_state87_pp0_stage21_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state88_pp0_stage22_iter2() {
    ap_block_state88_pp0_stage22_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state89_pp0_stage23_iter2() {
    ap_block_state89_pp0_stage23_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state8_pp0_stage6_iter0() {
    ap_block_state8_pp0_stage6_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_block_state90_pp0_stage24_iter2() {
    ap_block_state90_pp0_stage24_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state91_pp0_stage25_iter2() {
    ap_block_state91_pp0_stage25_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state92_pp0_stage26_iter2() {
    ap_block_state92_pp0_stage26_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state93_pp0_stage27_iter2() {
    ap_block_state93_pp0_stage27_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state94_pp0_stage28_iter2() {
    ap_block_state94_pp0_stage28_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state95_pp0_stage29_iter2() {
    ap_block_state95_pp0_stage29_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state96_pp0_stage30_iter2() {
    ap_block_state96_pp0_stage30_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state97_pp0_stage31_iter2() {
    ap_block_state97_pp0_stage31_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state98_pp0_stage0_iter3() {
    ap_block_state98_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state99_pp0_stage1_iter3() {
    ap_block_state99_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void detection_head::thread_ap_block_state9_pp0_stage7_iter0() {
    ap_block_state9_pp0_stage7_iter0 = ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_0_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_1_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_2_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_3_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_4_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_5_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_6_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, f5_7_empty_n.read())));
}

void detection_head::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten_fu_854_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void detection_head::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void detection_head::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void detection_head::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void detection_head::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void detection_head::thread_ap_phi_mux_indvar_flatten_phi_fu_225_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvar_flatten_phi_fu_225_p4 = indvar_flatten_next_reg_1181.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_225_p4 = indvar_flatten_reg_221.read();
    }
}

void detection_head::thread_ap_phi_mux_oc_i_phi_fu_236_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_oc_i_phi_fu_236_p4 = tmp_i_mid2_v_reg_1193.read();
    } else {
        ap_phi_mux_oc_i_phi_fu_236_p4 = oc_i_reg_232.read();
    }
}

void detection_head::thread_ap_phi_mux_r_i_phi_fu_247_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_r_i_phi_fu_247_p4 = r_reg_2180.read();
    } else {
        ap_phi_mux_r_i_phi_fu_247_p4 = r_i_reg_243.read();
    }
}

void detection_head::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void detection_head::thread_exitcond2_i_fu_872_p2() {
    exitcond2_i_fu_872_p2 = (!ap_phi_mux_r_i_phi_fu_247_p4.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_r_i_phi_fu_247_p4.read() == ap_const_lv4_8);
}

void detection_head::thread_exitcond_flatten_fu_854_p2() {
    exitcond_flatten_fu_854_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_225_p4.read().is_01() || !ap_const_lv8_80.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_225_p4.read() == ap_const_lv8_80);
}

void detection_head::thread_f5_0_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_0_blk_n = f5_0_empty_n.read();
    } else {
        f5_0_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_0_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_0_read = ap_const_logic_1;
    } else {
        f5_0_read = ap_const_logic_0;
    }
}

void detection_head::thread_f5_1_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_1_blk_n = f5_1_empty_n.read();
    } else {
        f5_1_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_1_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_1_read = ap_const_logic_1;
    } else {
        f5_1_read = ap_const_logic_0;
    }
}

void detection_head::thread_f5_2_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_2_blk_n = f5_2_empty_n.read();
    } else {
        f5_2_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_2_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_2_read = ap_const_logic_1;
    } else {
        f5_2_read = ap_const_logic_0;
    }
}

void detection_head::thread_f5_3_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_3_blk_n = f5_3_empty_n.read();
    } else {
        f5_3_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_3_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_3_read = ap_const_logic_1;
    } else {
        f5_3_read = ap_const_logic_0;
    }
}

void detection_head::thread_f5_4_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_4_blk_n = f5_4_empty_n.read();
    } else {
        f5_4_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_4_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_4_read = ap_const_logic_1;
    } else {
        f5_4_read = ap_const_logic_0;
    }
}

void detection_head::thread_f5_5_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_5_blk_n = f5_5_empty_n.read();
    } else {
        f5_5_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_5_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_5_read = ap_const_logic_1;
    } else {
        f5_5_read = ap_const_logic_0;
    }
}

void detection_head::thread_f5_6_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_6_blk_n = f5_6_empty_n.read();
    } else {
        f5_6_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_6_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_6_read = ap_const_logic_1;
    } else {
        f5_6_read = ap_const_logic_0;
    }
}

void detection_head::thread_f5_7_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        f5_7_blk_n = f5_7_empty_n.read();
    } else {
        f5_7_blk_n = ap_const_logic_1;
    }
}

void detection_head::thread_f5_7_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(exitcond_flatten_reg_1177.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        f5_7_read = ap_const_logic_1;
    } else {
        f5_7_read = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_254_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_254_ce = ap_const_logic_1;
    } else {
        grp_fu_254_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_254_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p0 = reg_600.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_254_p0 = reg_576.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_254_p0 = reg_570.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_254_p0 = reg_565.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_254_p0 = reg_554.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_254_p0 = reg_537.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)))) {
        grp_fu_254_p0 = reg_520.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)))) {
        grp_fu_254_p0 = reg_504.read();
    } else {
        grp_fu_254_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_254_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_2_7_i_reg_1510_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_1_7_i_reg_1365_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_2_6_i_reg_1505.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_0_7_i_reg_1220_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_1_6_i_reg_1360.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_2_5_i_reg_1500.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_4_3_i_reg_1780.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_0_6_i_reg_1215.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_1_5_i_reg_1355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_2_4_i_reg_1495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_254_p1 = tmp_27_3_3_i_reg_1635.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = tmp_27_0_5_i_reg_1210.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = tmp_27_1_4_i_reg_1350.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = tmp_27_2_3_i_reg_1490.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = reg_559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = tmp_27_0_4_i_reg_1205.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = tmp_27_1_3_i_reg_1345.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = reg_548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = tmp_27_0_3_i_reg_1200.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = reg_531.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0))) {
        grp_fu_254_p1 = reg_542.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_254_p1 = reg_515.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)))) {
        grp_fu_254_p1 = reg_526.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)))) {
        grp_fu_254_p1 = reg_510.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)))) {
        grp_fu_254_p1 = ap_const_lv32_0;
    } else {
        grp_fu_254_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_259_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_259_ce = ap_const_logic_1;
    } else {
        grp_fu_259_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_259_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p0 = reg_636.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_259_p0 = reg_612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p0 = reg_600.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_259_p0 = reg_606.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_259_p0 = reg_576.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_259_p0 = reg_594.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_259_p0 = reg_570.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_259_p0 = reg_588.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_259_p0 = reg_582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0))) {
        grp_fu_259_p0 = reg_504.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_259_p0 = reg_520.read();
    } else {
        grp_fu_259_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_259_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_259_p1 = tmp_27_2_10_i_reg_1530_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_259_p1 = tmp_27_1_10_i_reg_1385_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_259_p1 = tmp_27_2_i_288_reg_1525_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_0_10_i_reg_1240_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_1_i_286_reg_1380_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_2_9_i_reg_1520_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_4_7_i_reg_1800_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_0_i_284_reg_1235_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_1_9_i_reg_1375_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_2_8_i_reg_1515_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_3_7_i_reg_1655_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_4_6_i_reg_1795.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_0_9_i_reg_1230_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_1_8_i_reg_1370_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_7_3_i_reg_2230.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_3_6_i_reg_1650.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_4_5_i_reg_1790.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_0_8_i_reg_1225_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_6_3_i_reg_2075.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = reg_559.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_3_5_i_reg_1645.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_4_4_i_reg_1785.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_5_3_i_reg_1925.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = reg_548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_7_1_i_reg_2225.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_3_4_i_reg_1640.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = reg_531.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_259_p1 = tmp_27_6_1_i_reg_2070.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0))) {
        grp_fu_259_p1 = reg_542.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_259_p1 = ap_const_lv32_0;
    } else {
        grp_fu_259_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_264_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_264_ce = ap_const_logic_1;
    } else {
        grp_fu_264_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_264_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p0 = reg_672.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_264_p0 = reg_648.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p0 = reg_636.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_264_p0 = reg_642.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_264_p0 = reg_612.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_264_p0 = reg_630.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_264_p0 = reg_606.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_264_p0 = reg_624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p0 = reg_594.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_264_p0 = reg_618.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p0 = reg_588.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p0 = reg_582.read();
    } else {
        grp_fu_264_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_264_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_2_14_i_reg_1550_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_1_14_i_reg_1405_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_2_13_i_reg_1545_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_0_14_i_reg_1260_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_1_13_i_reg_1400_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_2_12_i_reg_1540_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_4_10_i_reg_1820_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_0_13_i_reg_1255_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_1_12_i_reg_1395_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_2_11_i_reg_1535_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_3_10_i_reg_1675_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_4_i_292_reg_1815_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_0_12_i_reg_1250_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_1_11_i_reg_1390_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_7_7_i_reg_2250_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_3_i_290_reg_1670_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_4_9_i_reg_1810_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_0_11_i_reg_1245_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_6_7_i_reg_2095_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_264_p1 = tmp_27_7_6_i_reg_2245.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_3_9_i_reg_1665_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_4_8_i_reg_1805_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_5_7_i_reg_1945_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_6_6_i_reg_2090.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_7_5_i_reg_2240.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_3_8_i_reg_1660_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_5_6_i_reg_1940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_6_5_i_reg_2085.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_7_4_i_reg_2235.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_5_5_i_reg_1935.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_6_4_i_reg_2080.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_264_p1 = tmp_27_5_4_i_reg_1930.read();
    } else {
        grp_fu_264_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_268_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_268_ce = ap_const_logic_1;
    } else {
        grp_fu_268_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_268_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p0 = reg_708.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_268_p0 = reg_684.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p0 = reg_672.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_268_p0 = reg_678.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_268_p0 = reg_648.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_268_p0 = reg_666.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        grp_fu_268_p0 = reg_642.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_268_p0 = reg_660.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p0 = reg_630.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_268_p0 = reg_654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p0 = reg_624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p0 = reg_618.read();
    } else {
        grp_fu_268_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_268_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_2_18_i_reg_1570_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_1_18_i_reg_1425_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_2_17_i_reg_1565_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_0_18_i_reg_1280_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_1_17_i_reg_1420_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_2_16_i_reg_1560_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_4_14_i_reg_1840_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_268_p1 = tmp_27_0_17_i_reg_1275_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_1_16_i_reg_1415_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_2_15_i_reg_1555_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_3_14_i_reg_1695_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_4_13_i_reg_1835_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_0_16_i_reg_1270_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_1_15_i_reg_1410_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_7_10_i_reg_2270_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_3_13_i_reg_1690_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_4_12_i_reg_1830_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_0_15_i_reg_1265_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_6_10_i_reg_2115_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_7_i_298_reg_2265_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_3_12_i_reg_1685_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_4_11_i_reg_1825_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_5_10_i_reg_1965_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_6_i_296_reg_2110_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_7_9_i_reg_2260_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_3_11_i_reg_1680_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_5_i_294_reg_1960_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_6_9_i_reg_2105_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_7_8_i_reg_2255_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_5_9_i_reg_1955_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_6_8_i_reg_2100_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_268_p1 = tmp_27_5_8_i_reg_1950_pp0_iter1_reg.read();
    } else {
        grp_fu_268_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_272_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_272_ce = ap_const_logic_1;
    } else {
        grp_fu_272_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_272_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p0 = reg_744.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_272_p0 = reg_720.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p0 = reg_708.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_272_p0 = reg_714.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_272_p0 = reg_684.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_272_p0 = reg_702.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_272_p0 = reg_678.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_272_p0 = reg_696.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p0 = reg_666.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        grp_fu_272_p0 = reg_690.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p0 = reg_660.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p0 = reg_654.read();
    } else {
        grp_fu_272_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_272_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_272_p1 = tmp_27_2_22_i_reg_1590_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_1_22_i_reg_1445_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_2_21_i_reg_1585_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_0_22_i_reg_1300_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_1_21_i_reg_1440_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_2_20_i_reg_1580_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_4_18_i_reg_1860_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_0_21_i_reg_1295_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_1_20_i_reg_1435_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_2_19_i_reg_1575_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_3_18_i_reg_1715_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_4_17_i_reg_1855_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_0_20_i_reg_1290_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_1_19_i_reg_1430_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_7_14_i_reg_2290_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_3_17_i_reg_1710_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_4_16_i_reg_1850_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_0_19_i_reg_1285_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_6_14_i_reg_2135_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_7_13_i_reg_2285_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_3_16_i_reg_1705_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_4_15_i_reg_1845_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_5_14_i_reg_1985_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_6_13_i_reg_2130_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_7_12_i_reg_2280_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_3_15_i_reg_1700_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_272_p1 = tmp_27_5_13_i_reg_1980_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p1 = tmp_27_6_12_i_reg_2125_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p1 = tmp_27_7_11_i_reg_2275_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p1 = tmp_27_5_12_i_reg_1975_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p1 = tmp_27_6_11_i_reg_2120_pp0_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_fu_272_p1 = tmp_27_5_11_i_reg_1970_pp0_iter1_reg.read();
    } else {
        grp_fu_272_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_276_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_276_ce = ap_const_logic_1;
    } else {
        grp_fu_276_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_276_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p0 = reg_780.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_276_p0 = reg_756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p0 = reg_744.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_276_p0 = reg_750.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_276_p0 = reg_720.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_276_p0 = reg_738.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_276_p0 = reg_714.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_276_p0 = reg_732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p0 = reg_702.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_276_p0 = reg_726.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p0 = reg_696.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p0 = reg_690.read();
    } else {
        grp_fu_276_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_276_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_2_26_i_reg_1610_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_1_26_i_reg_1465_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_2_25_i_reg_1605_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_0_26_i_reg_1320_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_1_25_i_reg_1460_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_2_24_i_reg_1600_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_4_22_i_reg_1880_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_0_25_i_reg_1315_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_1_24_i_reg_1455_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_2_23_i_reg_1595_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_3_22_i_reg_1735_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_4_21_i_reg_1875_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_0_24_i_reg_1310_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_1_23_i_reg_1450_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_7_18_i_reg_2310_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_276_p1 = tmp_27_3_21_i_reg_1730_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_4_20_i_reg_1870_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_0_23_i_reg_1305_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_6_18_i_reg_2155_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_7_17_i_reg_2305_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_3_20_i_reg_1725_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_4_19_i_reg_1865_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_5_18_i_reg_2005_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_6_17_i_reg_2150_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_7_16_i_reg_2300_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_3_19_i_reg_1720_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_5_17_i_reg_2000_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_6_16_i_reg_2145_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_7_15_i_reg_2295_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_5_16_i_reg_1995_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_6_15_i_reg_2140_pp0_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_276_p1 = tmp_27_5_15_i_reg_1990_pp0_iter2_reg.read();
    } else {
        grp_fu_276_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_280_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_280_ce = ap_const_logic_1;
    } else {
        grp_fu_280_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_280_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_280_p0 = sum_1_0_29_i_reg_2375.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_280_p0 = reg_792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p0 = reg_780.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_280_p0 = reg_786.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_280_p0 = reg_756.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_280_p0 = reg_774.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_280_p0 = reg_750.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_280_p0 = reg_768.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p0 = reg_738.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        grp_fu_280_p0 = reg_762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p0 = reg_732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_280_p0 = reg_726.read();
    } else {
        grp_fu_280_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_280_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_280_p1 = tmp_27_2_30_i_reg_1630_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_280_p1 = tmp_27_1_30_i_reg_1485_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_280_p1 = tmp_27_2_29_i_reg_1625_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_280_p1 = tmp_27_0_30_i_reg_1340_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_280_p1 = tmp_27_1_29_i_reg_1480_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_2_28_i_reg_1620_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_4_26_i_reg_1900_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_0_29_i_reg_1335_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_1_28_i_reg_1475_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_2_27_i_reg_1615_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_3_26_i_reg_1755_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_4_25_i_reg_1895_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_0_28_i_reg_1330_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_1_27_i_reg_1470_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_7_22_i_reg_2330_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_3_25_i_reg_1750_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_4_24_i_reg_1890_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_0_27_i_reg_1325_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_6_22_i_reg_2175_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_7_21_i_reg_2325_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_3_24_i_reg_1745_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_4_23_i_reg_1885_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_5_22_i_reg_2025_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_6_21_i_reg_2170_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_7_20_i_reg_2320_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_3_23_i_reg_1740_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_5_21_i_reg_2020_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_6_20_i_reg_2165_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_7_19_i_reg_2315_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_5_20_i_reg_2015_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_280_p1 = tmp_27_6_19_i_reg_2160_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_fu_280_p1 = tmp_27_5_19_i_reg_2010_pp0_iter3_reg.read();
    } else {
        grp_fu_280_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_284_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_284_ce = ap_const_logic_1;
    } else {
        grp_fu_284_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_284_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p0 = reg_843.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p0 = reg_837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p0 = reg_831.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p0 = reg_825.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_284_p0 = reg_820.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_284_p0 = reg_815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p0 = reg_792.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_284_p0 = reg_809.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p0 = reg_786.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_284_p0 = reg_803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p0 = reg_774.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_284_p0 = reg_798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p0 = reg_768.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p0 = reg_762.read();
    } else {
        grp_fu_284_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_284_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_7_30_i_reg_2370_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_6_30_i_reg_2220_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_7_29_i_reg_2365_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_5_30_i_reg_2065_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_6_29_i_reg_2215_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_4_30_i_reg_1920_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_5_29_i_reg_2060_pp0_iter4_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        grp_fu_284_p1 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_7_27_i_reg_2355_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_3_30_i_reg_1775_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_4_29_i_reg_1915_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_5_28_i_reg_2055_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_6_27_i_reg_2205_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_7_26_i_reg_2350_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_3_29_i_reg_1770_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_4_28_i_reg_1910_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_5_27_i_reg_2050_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_6_26_i_reg_2200_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_7_25_i_reg_2345_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_3_28_i_reg_1765_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_4_27_i_reg_1905_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_5_26_i_reg_2045_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_284_p1 = tmp_27_6_25_i_reg_2195_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_7_24_i_reg_2340_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_3_27_i_reg_1760_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_5_25_i_reg_2040_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_6_24_i_reg_2190_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_7_23_i_reg_2335_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_5_24_i_reg_2035_pp0_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_6_23_i_reg_2185_pp0_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_284_p1 = tmp_27_5_23_i_reg_2030_pp0_iter3_reg.read();
    } else {
        grp_fu_284_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_289_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_289_ce = ap_const_logic_1;
    } else {
        grp_fu_289_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_289_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())))) {
        grp_fu_289_p0 = reg_831.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())))) {
        grp_fu_289_p0 = reg_825.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_289_p0 = reg_809.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_289_p0 = reg_803.read();
    } else {
        grp_fu_289_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_289_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())))) {
        grp_fu_289_p1 = ap_const_lv32_3F800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_289_p1 = tmp_27_7_28_i_reg_2360_pp0_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_289_p1 = tmp_27_6_28_i_reg_2210_pp0_iter5_reg.read();
    } else {
        grp_fu_289_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_294_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_294_ce = ap_const_logic_1;
    } else {
        grp_fu_294_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_294_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_294_p0 = reg_464.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_294_p0 = reg_424.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_294_p0 = reg_384.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_294_p0 = reg_344.read();
    } else {
        grp_fu_294_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_299_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_299_ce = ap_const_logic_1;
    } else {
        grp_fu_299_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_299_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_299_p0 = reg_469.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_299_p0 = reg_429.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_299_p0 = reg_389.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_299_p0 = reg_349.read();
    } else {
        grp_fu_299_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_304_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_304_ce = ap_const_logic_1;
    } else {
        grp_fu_304_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_304_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_304_p0 = reg_474.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_304_p0 = reg_434.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_304_p0 = reg_394.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_304_p0 = reg_354.read();
    } else {
        grp_fu_304_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_309_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_309_ce = ap_const_logic_1;
    } else {
        grp_fu_309_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_309_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_309_p0 = reg_479.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_309_p0 = reg_439.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_309_p0 = reg_399.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_309_p0 = reg_359.read();
    } else {
        grp_fu_309_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_314_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_314_ce = ap_const_logic_1;
    } else {
        grp_fu_314_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_314_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_314_p0 = reg_484.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_314_p0 = reg_444.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_314_p0 = reg_404.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_314_p0 = reg_364.read();
    } else {
        grp_fu_314_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_319_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_319_ce = ap_const_logic_1;
    } else {
        grp_fu_319_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_319_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_319_p0 = reg_489.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_319_p0 = reg_449.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_319_p0 = reg_409.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_319_p0 = reg_369.read();
    } else {
        grp_fu_319_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_324_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_324_ce = ap_const_logic_1;
    } else {
        grp_fu_324_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_324_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_324_p0 = reg_494.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_324_p0 = reg_454.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_324_p0 = reg_414.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_324_p0 = reg_374.read();
    } else {
        grp_fu_324_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_329_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_329_ce = ap_const_logic_1;
    } else {
        grp_fu_329_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_329_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_329_p0 = reg_499.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_329_p0 = reg_459.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage27.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage31.read(), ap_const_boolean_0)))) {
        grp_fu_329_p0 = reg_419.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0)))) {
        grp_fu_329_p0 = reg_379.read();
    } else {
        grp_fu_329_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_334_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_334_ce = ap_const_logic_1;
    } else {
        grp_fu_334_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_334_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_334_p1 = tmp_24_7_i_reg_2466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_334_p1 = tmp_24_6_i_reg_2461.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_334_p1 = tmp_24_5_i_reg_2442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_334_p1 = tmp_24_4_i_reg_2430.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_334_p1 = reg_843.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_334_p1 = reg_837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_334_p1 = tmp_24_1_i_reg_2410.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_334_p1 = tmp_24_i_reg_2400.read();
    } else {
        grp_fu_334_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_grp_fu_339_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        grp_fu_339_ce = ap_const_logic_1;
    } else {
        grp_fu_339_ce = ap_const_logic_0;
    }
}

void detection_head::thread_grp_fu_339_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_339_p1 = tmp_22_7_i_fu_1014_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage30.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_339_p1 = tmp_22_6_i_fu_999_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_339_p1 = tmp_22_5_i_fu_984_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage22.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_339_p1 = tmp_22_4_i_fu_969_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_339_p1 = tmp_22_3_i_fu_954_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_339_p1 = tmp_22_2_i_fu_939_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_339_p1 = tmp_22_1_i_fu_924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        grp_fu_339_p1 = tmp_22_i_fu_909_p1.read();
    } else {
        grp_fu_339_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void detection_head::thread_indvar_flatten_next_fu_860_p2() {
    indvar_flatten_next_fu_860_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_225_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_indvar_flatten_phi_fu_225_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void detection_head::thread_oc_fu_866_p2() {
    oc_fu_866_p2 = (!ap_phi_mux_oc_i_phi_fu_236_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_oc_i_phi_fu_236_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void detection_head::thread_out_r_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_20_cast_fu_1173_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage28.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_13_fu_1164_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_15_cast_fu_1136_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage20.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_9_fu_1109_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_10_cast_fu_1099_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_7_fu_1072_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_5_cast_fu_1062_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        out_r_address0 =  (sc_lv<10>) (tmp_2_fu_1027_p1.read());
    } else {
        out_r_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void detection_head::thread_out_r_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read())))) {
        out_r_ce0 = ap_const_logic_1;
    } else {
        out_r_ce0 = ap_const_logic_0;
    }
}

void detection_head::thread_out_r_d0() {
    out_r_d0 = reg_849.read();
}

void detection_head::thread_out_r_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1177_pp0_iter6_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read())))) {
        out_r_we0 = ap_const_logic_1;
    } else {
        out_r_we0 = ap_const_logic_0;
    }
}

void detection_head::thread_r_fu_894_p2() {
    r_fu_894_p2 = (!r_i_mid2_reg_1186.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(r_i_mid2_reg_1186.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void detection_head::thread_r_i_mid2_fu_878_p3() {
    r_i_mid2_fu_878_p3 = (!exitcond2_i_fu_872_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond2_i_fu_872_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_r_i_phi_fu_247_p4.read());
}

void detection_head::thread_tmp_10_cast_fu_1099_p1() {
    tmp_10_cast_fu_1099_p1 = esl_zext<64,12>(tmp_s_fu_1094_p2.read());
}

void detection_head::thread_tmp_10_fu_1118_p2() {
    tmp_10_fu_1118_p2 = (tmp_reg_2454.read() | ap_const_lv11_50);
}

void detection_head::thread_tmp_11_fu_1131_p2() {
    tmp_11_fu_1131_p2 = (!tmp_14_cast_fu_1123_p3.read().is_01() || !tmp_i_mid2_cast_reg_2447.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_14_cast_fu_1123_p3.read()) + sc_biguint<12>(tmp_i_mid2_cast_reg_2447.read()));
}

void detection_head::thread_tmp_12_fu_1159_p2() {
    tmp_12_fu_1159_p2 = (tmp_1_reg_2435.read() | ap_const_lv11_60);
}

void detection_head::thread_tmp_13_fu_1164_p3() {
    tmp_13_fu_1164_p3 = esl_concat<53,11>(ap_const_lv53_0, tmp_12_fu_1159_p2.read());
}

void detection_head::thread_tmp_14_cast_fu_1123_p3() {
    tmp_14_cast_fu_1123_p3 = esl_concat<1,11>(ap_const_lv1_0, tmp_10_fu_1118_p2.read());
}

void detection_head::thread_tmp_14_fu_1141_p2() {
    tmp_14_fu_1141_p2 = (tmp_reg_2454.read() | ap_const_lv11_70);
}

void detection_head::thread_tmp_15_cast_fu_1136_p1() {
    tmp_15_cast_fu_1136_p1 = esl_zext<64,12>(tmp_11_fu_1131_p2.read());
}

void detection_head::thread_tmp_15_fu_1154_p2() {
    tmp_15_fu_1154_p2 = (!tmp_19_cast_fu_1146_p3.read().is_01() || !tmp_i_mid2_cast_reg_2447.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_19_cast_fu_1146_p3.read()) + sc_biguint<12>(tmp_i_mid2_cast_reg_2447.read()));
}

void detection_head::thread_tmp_19_cast_fu_1146_p3() {
    tmp_19_cast_fu_1146_p3 = esl_concat<1,11>(ap_const_lv1_0, tmp_14_fu_1141_p2.read());
}

void detection_head::thread_tmp_1_fu_1019_p4() {
    tmp_1_fu_1019_p4 = esl_concat<6,5>(esl_concat<4,2>(r_i_mid2_reg_1186_pp0_iter6_reg.read(), ap_const_lv2_0), tmp_i_mid2_v_reg_1193_pp0_iter6_reg.read());
}

void detection_head::thread_tmp_20_cast_fu_1173_p1() {
    tmp_20_cast_fu_1173_p1 = esl_zext<64,12>(tmp_15_reg_2471.read());
}

void detection_head::thread_tmp_22_1_i_fu_924_p1() {
    tmp_22_1_i_fu_924_p1 = tmp_22_neg_1_i_fu_918_p2.read();
}

void detection_head::thread_tmp_22_2_i_fu_939_p1() {
    tmp_22_2_i_fu_939_p1 = tmp_22_neg_2_i_fu_933_p2.read();
}

void detection_head::thread_tmp_22_3_i_fu_954_p1() {
    tmp_22_3_i_fu_954_p1 = tmp_22_neg_3_i_fu_948_p2.read();
}

void detection_head::thread_tmp_22_4_i_fu_969_p1() {
    tmp_22_4_i_fu_969_p1 = tmp_22_neg_4_i_fu_963_p2.read();
}

void detection_head::thread_tmp_22_5_i_fu_984_p1() {
    tmp_22_5_i_fu_984_p1 = tmp_22_neg_5_i_fu_978_p2.read();
}

void detection_head::thread_tmp_22_6_i_fu_999_p1() {
    tmp_22_6_i_fu_999_p1 = tmp_22_neg_6_i_fu_993_p2.read();
}

void detection_head::thread_tmp_22_7_i_fu_1014_p1() {
    tmp_22_7_i_fu_1014_p1 = tmp_22_neg_7_i_fu_1008_p2.read();
}

void detection_head::thread_tmp_22_i_fu_909_p1() {
    tmp_22_i_fu_909_p1 = tmp_22_neg_i_fu_903_p2.read();
}

void detection_head::thread_tmp_22_neg_1_i_fu_918_p2() {
    tmp_22_neg_1_i_fu_918_p2 = (tmp_22_to_int_1_i_fu_914_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_neg_2_i_fu_933_p2() {
    tmp_22_neg_2_i_fu_933_p2 = (tmp_22_to_int_2_i_fu_929_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_neg_3_i_fu_948_p2() {
    tmp_22_neg_3_i_fu_948_p2 = (tmp_22_to_int_3_i_fu_944_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_neg_4_i_fu_963_p2() {
    tmp_22_neg_4_i_fu_963_p2 = (tmp_22_to_int_4_i_fu_959_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_neg_5_i_fu_978_p2() {
    tmp_22_neg_5_i_fu_978_p2 = (tmp_22_to_int_5_i_fu_974_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_neg_6_i_fu_993_p2() {
    tmp_22_neg_6_i_fu_993_p2 = (tmp_22_to_int_6_i_fu_989_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_neg_7_i_fu_1008_p2() {
    tmp_22_neg_7_i_fu_1008_p2 = (tmp_22_to_int_7_i_fu_1004_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_neg_i_fu_903_p2() {
    tmp_22_neg_i_fu_903_p2 = (tmp_22_to_int_i_fu_899_p1.read() ^ ap_const_lv32_80000000);
}

void detection_head::thread_tmp_22_to_int_1_i_fu_914_p1() {
    tmp_22_to_int_1_i_fu_914_p1 = reg_774.read();
}

void detection_head::thread_tmp_22_to_int_2_i_fu_929_p1() {
    tmp_22_to_int_2_i_fu_929_p1 = reg_786.read();
}

void detection_head::thread_tmp_22_to_int_3_i_fu_944_p1() {
    tmp_22_to_int_3_i_fu_944_p1 = reg_815.read();
}

void detection_head::thread_tmp_22_to_int_4_i_fu_959_p1() {
    tmp_22_to_int_4_i_fu_959_p1 = reg_798.read();
}

void detection_head::thread_tmp_22_to_int_5_i_fu_974_p1() {
    tmp_22_to_int_5_i_fu_974_p1 = reg_803.read();
}

void detection_head::thread_tmp_22_to_int_6_i_fu_989_p1() {
    tmp_22_to_int_6_i_fu_989_p1 = reg_809.read();
}

void detection_head::thread_tmp_22_to_int_7_i_fu_1004_p1() {
    tmp_22_to_int_7_i_fu_1004_p1 = reg_815.read();
}

void detection_head::thread_tmp_22_to_int_i_fu_899_p1() {
    tmp_22_to_int_i_fu_899_p1 = reg_768.read();
}

void detection_head::thread_tmp_2_fu_1027_p1() {
    tmp_2_fu_1027_p1 = esl_zext<64,11>(tmp_1_fu_1019_p4.read());
}

void detection_head::thread_tmp_3_fu_1042_p2() {
    tmp_3_fu_1042_p2 = (tmp_fu_1035_p3.read() | ap_const_lv11_10);
}

void detection_head::thread_tmp_4_cast_fu_1048_p3() {
    tmp_4_cast_fu_1048_p3 = esl_concat<1,11>(ap_const_lv1_0, tmp_3_fu_1042_p2.read());
}

void detection_head::thread_tmp_4_fu_1104_p2() {
    tmp_4_fu_1104_p2 = (tmp_1_reg_2435.read() | ap_const_lv11_40);
}

void detection_head::thread_tmp_5_cast_fu_1062_p1() {
    tmp_5_cast_fu_1062_p1 = esl_zext<64,12>(tmp_5_fu_1056_p2.read());
}

void detection_head::thread_tmp_5_fu_1056_p2() {
    tmp_5_fu_1056_p2 = (!tmp_4_cast_fu_1048_p3.read().is_01() || !tmp_i_mid2_cast_fu_1032_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_4_cast_fu_1048_p3.read()) + sc_biguint<12>(tmp_i_mid2_cast_fu_1032_p1.read()));
}

void detection_head::thread_tmp_6_fu_1067_p2() {
    tmp_6_fu_1067_p2 = (tmp_1_reg_2435.read() | ap_const_lv11_20);
}

void detection_head::thread_tmp_7_fu_1072_p3() {
    tmp_7_fu_1072_p3 = esl_concat<53,11>(ap_const_lv53_0, tmp_6_fu_1067_p2.read());
}

void detection_head::thread_tmp_8_fu_1081_p2() {
    tmp_8_fu_1081_p2 = (tmp_reg_2454.read() | ap_const_lv11_30);
}

void detection_head::thread_tmp_9_cast_fu_1086_p3() {
    tmp_9_cast_fu_1086_p3 = esl_concat<1,11>(ap_const_lv1_0, tmp_8_fu_1081_p2.read());
}

void detection_head::thread_tmp_9_fu_1109_p3() {
    tmp_9_fu_1109_p3 = esl_concat<53,11>(ap_const_lv53_0, tmp_4_fu_1104_p2.read());
}

void detection_head::thread_tmp_fu_1035_p3() {
    tmp_fu_1035_p3 = esl_concat<4,7>(r_i_mid2_reg_1186_pp0_iter6_reg.read(), ap_const_lv7_0);
}

void detection_head::thread_tmp_i_mid2_cast_fu_1032_p1() {
    tmp_i_mid2_cast_fu_1032_p1 = esl_zext<12,5>(tmp_i_mid2_v_reg_1193_pp0_iter6_reg.read());
}

void detection_head::thread_tmp_i_mid2_v_fu_886_p3() {
    tmp_i_mid2_v_fu_886_p3 = (!exitcond2_i_fu_872_p2.read()[0].is_01())? sc_lv<5>(): ((exitcond2_i_fu_872_p2.read()[0].to_bool())? oc_fu_866_p2.read(): ap_phi_mux_oc_i_phi_fu_236_p4.read());
}

void detection_head::thread_tmp_s_fu_1094_p2() {
    tmp_s_fu_1094_p2 = (!tmp_9_cast_fu_1086_p3.read().is_01() || !tmp_i_mid2_cast_reg_2447.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_9_cast_fu_1086_p3.read()) + sc_biguint<12>(tmp_i_mid2_cast_reg_2447.read()));
}

}

