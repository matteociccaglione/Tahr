#include <reduce.h>
#include <ag_parser.h>
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_daddiu_r_m_to_load_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,daddiu_r_m_t* daddiu_r_m_5){
	load_label_t *res = malloc(sizeof(load_label_t));
symbol_init(res,"load_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,daddiu_r_m_5->lab) == 0)){
                free(res);
return 1;
        }
        res->dest = map_register(daddiu_r_m_5->dest);
        res->lab = lui_r_m_0->lab;

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_dw_lab_to_load_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,load_dw_lab_t* load_dw_lab_5){
	load_data_label_t *res = malloc(sizeof(load_data_label_t));
symbol_init(res,"load_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,load_dw_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->dest = map_register(load_dw_lab_5->dest);
        res->lab = lui_r_m_0->lab;
        res->size = 64;

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_w_lab_to_load_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,load_w_lab_t* load_w_lab_5){
	load_data_label_t *res = malloc(sizeof(load_data_label_t));
symbol_init(res,"load_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,load_w_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->dest = map_register(load_w_lab_5->dest);
        res->lab = lui_r_m_0->lab;
        res->size = 32;

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_d_lab_to_store_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,store_d_lab_t* store_d_lab_5){
	store_data_label_t *res = malloc(sizeof(store_data_label_t));
symbol_init(res,"store_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,store_d_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->src = map_register(store_d_lab_5->src);
        res->lab = lui_r_m_0->lab;
        res->size = 64;

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_w_lab_to_store_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,store_w_lab_t* store_w_lab_5){
	store_data_label_t *res = malloc(sizeof(store_data_label_t));
symbol_init(res,"store_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,store_w_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->src = map_register(store_w_lab_5->src);
        res->lab = lui_r_m_0->lab;
        res->size = 32;

	return save_and_fix(res,6);


}
