#pragma once
#include <tahr.h>
#define MAX_RED_SYM 6
extern int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_daddiu_r_m_to_load_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,daddiu_r_m_t* daddiu_r_m_5);

extern int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_dw_lab_to_load_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,load_dw_lab_t* load_dw_lab_5);

extern int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_w_lab_to_load_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,load_w_lab_t* load_w_lab_5);

extern int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_d_lab_to_store_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,store_d_lab_t* store_d_lab_5);

extern int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_w_lab_to_store_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,store_w_lab_t* store_w_lab_5);

