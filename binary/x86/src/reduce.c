#include <reduce.h>
#include <ag_parser.h>
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_daddiu_r_m_to_lea_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,daddiu_r_m_t* daddiu_r_m_5){
	lea_label_t *res = malloc(sizeof(lea_label_t));
symbol_init(res,"lea_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,daddiu_r_m_5->lab) == 0)){
                free(res);
return 1;
        }
        res->dest = map_register(daddiu_r_m_5->dest,64);
        res->lab = lui_r_m_0->lab;
        res->suffix = suf_values[0];

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_dw_lab_to_load_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,load_dw_lab_t* load_dw_lab_5){
	load_data_label_t *res = malloc(sizeof(load_data_label_t));
symbol_init(res,"load_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,load_dw_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->dest = map_register(load_dw_lab_5->dest,64);
        res->lab = lui_r_m_0->lab;
        res->base = empty_string();
        res->suffix = suf_values[0];

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_w_lab_to_load_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,load_w_lab_t* load_w_lab_5){
	load_data_label_t *res = malloc(sizeof(load_data_label_t));
symbol_init(res,"load_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,load_w_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->dest = map_register(load_w_lab_5->dest,32);
        res->lab = lui_r_m_0->lab;
        res->base = empty_string();
        res->suffix = suf_values[1];

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_d_lab_to_store_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,store_d_lab_t* store_d_lab_5){
	store_data_label_t *res = malloc(sizeof(store_data_label_t));
symbol_init(res,"store_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,store_d_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->src = map_register(store_d_lab_5->src,64);
        res->lab = lui_r_m_0->lab;
        res->base = empty_string();
        res->suffix = suf_values[0];

	return save_and_fix(res,6);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_w_lab_to_store_data_label(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,store_w_lab_t* store_w_lab_5){
	store_data_label_t *res = malloc(sizeof(store_data_label_t));
symbol_init(res,"store_data_label",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,store_w_lab_5->lab) == 0)){
                free(res);
return 1;
        }
        res->src = map_register(store_w_lab_5->src,32);
        res->lab = lui_r_m_0->lab;
        res->base = empty_string();
        res->suffix = suf_values[1];

	return save_and_fix(res,6);


}
int from_cmpconfmt_bc1eqz_to_cmp_jmp(cmpconfmt_t* cmpconfmt_0,bc1eqz_t* bc1eqz_1){
	cmp_jmp_t *res = malloc(sizeof(cmp_jmp_t));
symbol_init(res,"cmp_jmp",0);
	
        res->reg1 = fp_map_register(cmpconfmt_0->reg1);
        res->reg2 = fp_map_register(cmpconfmt_0->reg2);
        res->con = cmpconfmt_0->con;
        res->fmt = cmpconfmt_0->fmt;
        res->target = bc1eqz_1->target;

	return save_and_fix(res,2);


}
int from_cmpconfmt_bc1nez_to_cmp_neg(cmpconfmt_t* cmpconfmt_0,bc1nez_t* bc1nez_1){
	cmp_neg_t *res = malloc(sizeof(cmp_neg_t));
symbol_init(res,"cmp_neg",0);
	
        printf("Con is %s and fmt is %s\n",cmpconfmt_0->con,cmpconfmt_0->fmt);
        res->reg1 = fp_map_register(cmpconfmt_0->reg1);
        res->reg2 = fp_map_register(cmpconfmt_0->reg2);
        res->con = cmpconfmt_0->con;
        res->fmt = cmpconfmt_0->fmt;
        res->target = bc1nez_1->target;

	return save_and_fix(res,2);


}
int from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_ldc1_r_m_d_to_imovsd_lab_r(lui_r_m_t* lui_r_m_0,daddiu_r_m_t* daddiu_r_m_1,dsll_t* dsll_2,daddiu_r_m_t* daddiu_r_m_3,dsll_t* dsll_4,ldc1_r_m_d_t* ldc1_r_m_d_5){
	imovsd_lab_r_t *res = malloc(sizeof(imovsd_lab_r_t));
symbol_init(res,"imovsd_lab_r",0);
	
        if (!(strcmp(lui_r_m_0->lab,daddiu_r_m_1->lab) == 0  && strcmp(daddiu_r_m_3->lab,ldc1_r_m_d_5->offset) == 0)){
                free(res);
return 1;
        }
        res->dest = fp_map_register(ldc1_r_m_d_5->dest);
        res->offset = lui_r_m_0->lab;
        res->base = empty_string();

	return save_and_fix(res,6);


}
