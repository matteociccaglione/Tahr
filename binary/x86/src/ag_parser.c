#include "ag_parser.h"
#include "ag_utils.h"
#include "lex.yy.h"
#include "tahr.h"

extern int yyparse (void);


void yyerror(char const *message)
{
        printf("Error: %s\n", message);
}
void **out_stream;
char *in_stream;

int out_size;

int cur_pos = 0;
int buf_set = 0;

int parse(){
        if(buf_set == 1){
                buf_set = 0;
                return yyparse();
        }
        return -1;
}

void set_buffer(char *buf){
        buf_set = 1;
        yy_switch_to_buffer(yy_scan_string(buf));
}

void set_file_buffer(char *file_path){
        buf_set = 1;
        yyin = fopen(file_path,"r");
}

void* get_next_sym(void *arr, void *old){
        //for first use old must be NULL
        if (old == NULL){
                return arr; 
        }else{
                return (unsigned char *)old+get_size(old);
        }
        
}

void no_start_space(char *str){

        int i = 0;
        while(str[i]==' ')
                i++;
        int c = 0;
        while(i<strlen(str)){
                str[c] = str[i];
                c++;
                i++;
        }
        str[c] = '\0';

}
size_t strip(char *dest, char *source, char the_char){
        int occ = 0;
        int i = 0;
        int j = 0;
        while (i < strlen(source)){
                if(source[i] == the_char && occ==0){
                        occ++;
                        dest[j] = source[i];
                        j++;
                }
                if (source[i] != the_char){
                        dest[j] = source[i];
                        occ = 0;
                        j++;
                }
                i++;
        }
        dest[j] = '\0';
        return j;
}

void set_out_stream(void **stream, int size){
        out_stream = stream;
        out_size = size;
}

int save_symbol(char *str, void *sym){
        if (cur_pos < out_size){
                out_stream[cur_pos] = sym;
                cur_pos++;
                return 1;
        }else{
                return 0;
        }
}

int save_and_fix(void *sym, int n){
        for (int i = 0; i < n; i++){
                out_stream[cur_pos-1] = NULL;
                cur_pos--;
        }
        out_stream[cur_pos] = sym;
        cur_pos++;
        if(cur_pos >= out_size)
                return 0;
        return 1;
}

void retrieve(void **out, int *n){
        int min = MAX_RED_SYM;
        if (cur_pos < min)
                min = cur_pos;
        *n = min;
        for (int i = 0; i < min; i++){
                out[i] = out_stream[cur_pos-min+i];
        }
}

void set_in_stream(char *stream){
        in_stream = stream;
        set_buffer(in_stream);
}

void set_in_file(char *file_name){
        in_stream = file_name;
        set_file_buffer(file_name);
}
int get_size(void *sym){
	int id = get_sym_id(sym);
	if (id == 0){
	 return sizeof(ADD_R_R_t);
}
	if (id == 1){
	 return sizeof(SUB_R_R_t);
}
	if (id == 2){
	 return sizeof(SUBU_R_R_t);
}
	if (id == 3){
	 return sizeof(ADD_R_I_t);
}
	if (id == 4){
	 return sizeof(MUL_R_R_t);
}
	if (id == 5){
	 return sizeof(DIV_R_R_t);
}
	if (id == 6){
	 return sizeof(LOAD_DW_t);
}
	if (id == 7){
	 return sizeof(LOAD_W_t);
}
	if (id == 8){
	 return sizeof(LOAD_H_t);
}
	if (id == 9){
	 return sizeof(LOAD_B_t);
}
	if (id == 10){
	 return sizeof(STORE_D_t);
}
	if (id == 11){
	 return sizeof(STORE_W_t);
}
	if (id == 12){
	 return sizeof(STORE_H_t);
}
	if (id == 13){
	 return sizeof(STORE_B_t);
}
	if (id == 14){
	 return sizeof(MOVE_H_t);
}
	if (id == 15){
	 return sizeof(MOVE_L_t);
}
	if (id == 16){
	 return sizeof(AND_R_R_t);
}
	if (id == 17){
	 return sizeof(AND_R_I_t);
}
	if (id == 18){
	 return sizeof(OR_R_R_t);
}
	if (id == 19){
	 return sizeof(OR_R_I_t);
}
	if (id == 20){
	 return sizeof(XOR_R_R_t);
}
	if (id == 21){
	 return sizeof(NOR_R_R_t);
}
	if (id == 22){
	 return sizeof(SET_L_R_R_t);
}
	if (id == 23){
	 return sizeof(SET_L_R_R_U_t);
}
	if (id == 24){
	 return sizeof(SET_L_R_I_t);
}
	if (id == 25){
	 return sizeof(SHIFT_L_t);
}
	if (id == 26){
	 return sizeof(SHIFT_R_t);
}
	if (id == 27){
	 return sizeof(BRANCH_EQ_R_R_t);
}
	if (id == 28){
	 return sizeof(BRANCH_NEQ_R_R_t);
}
	if (id == 29){
	 return sizeof(JUMP_t);
}
	if (id == 30){
	 return sizeof(JUMP_R_t);
}
	if (id == 31){
	 return sizeof(CALL_t);
}
	if (id == 32){
	 return sizeof(CODE_LABEL_t);
}
	if (id == 33){
	 return sizeof(SYSCALL_t);
}
	if (id == 34){
	 return sizeof(LA_R_A_t);
}
	if (id == 35){
	 return sizeof(DATA_t);
}
	if (id == 36){
	 return sizeof(ADDU_R_I_t);
}
	if (id == 37){
	 return sizeof(MOVE_t);
}
	if (id == 38){
	 return sizeof(SEH_t);
}
	if (id == 39){
	 return sizeof(ADDU_R_R_t);
}
	if (id == 40){
	 return sizeof(NOP_t);
}
	if (id == 41){
	 return sizeof(DADD_R_R_t);
}
	if (id == 42){
	 return sizeof(DADDU_R_R_t);
}
	if (id == 43){
	 return sizeof(DADD_R_I_t);
}
	if (id == 44){
	 return sizeof(DADDU_R_I_t);
}
	if (id == 45){
	 return sizeof(DECL_t);
}
	if (id == 46){
	 return sizeof(LUI_R_M_t);
}
	if (id == 47){
	 return sizeof(DADDIU_R_M_t);
}
	if (id == 48){
	 return sizeof(DSLL_t);
}
	if (id == 49){
	 return sizeof(BALC_t);
}
	if (id == 50){
	 return sizeof(LOAD_I_t);
}
	if (id == 51){
	 return sizeof(BRANCH_NEZ_C_t);
}
	if (id == 52){
	 return sizeof(BRANCH_COM_t);
}
	if (id == 53){
	 return sizeof(BRANCH_NEQ_C_t);
}
	if (id == 54){
	 return sizeof(BRANCH_GTZ_C_t);
}
	if (id == 55){
	 return sizeof(BRANCH_GE_C_t);
}
	if (id == 56){
	 return sizeof(SHIFT_R_ARIT_t);
}
	if (id == 57){
	 return sizeof(BRANCH_LT_C_t);
}
	if (id == 58){
	 return sizeof(BRANCH_EQZ_C_t);
}
	if (id == 59){
	 return sizeof(DSRL_t);
}
	if (id == 60){
	 return sizeof(BRANCH_LTZ_C_t);
}
	if (id == 61){
	 return sizeof(JUMP_R_C_t);
}
	if (id == 62){
	 return sizeof(BRANCH_GEZ_C_t);
}
	if (id == 63){
	 return sizeof(TEQ_t);
}
	if (id == 64){
	 return sizeof(DSUBU_R_R_t);
}
	if (id == 65){
	 return sizeof(MUH_R_R_t);
}
	if (id == 66){
	 return sizeof(OR_R_I_HEX_t);
}
	if (id == 67){
	 return sizeof(AND_R_I_HEX_t);
}
	if (id == 68){
	 return sizeof(LOAD_DW_LAB_t);
}
	if (id == 69){
	 return sizeof(LOAD_W_LAB_t);
}
	if (id == 70){
	 return sizeof(STORE_D_LAB_t);
}
	if (id == 71){
	 return sizeof(STORE_W_LAB_t);
}
	if (id == 72){
	 return sizeof(BRANCH_EQ_C_t);
}
	if (id == 73){
	 return sizeof(BRANCH_LTU_C_t);
}
	if (id == 74){
	 return sizeof(LOAD_B_U_t);
}
	if (id == 75){
	 return sizeof(BRANCH_GEU_C_t);
}
	if (id == 76){
	 return sizeof(jump_r_c_t);
}
	if (id == 77){
	 return sizeof(teq_t);
}
	if (id == 78){
	 return sizeof(branch_ltz_c_t);
}
	if (id == 79){
	 return sizeof(dsrl_t);
}
	if (id == 80){
	 return sizeof(branch_gez_c_t);
}
	if (id == 81){
	 return sizeof(branch_eqz_c_t);
}
	if (id == 82){
	 return sizeof(branch_eq_c_t);
}
	if (id == 83){
	 return sizeof(branch_lt_c_t);
}
	if (id == 84){
	 return sizeof(branch_ltu_c_t);
}
	if (id == 85){
	 return sizeof(shift_ra_t);
}
	if (id == 86){
	 return sizeof(branch_ge_c_t);
}
	if (id == 87){
	 return sizeof(branch_geu_c_t);
}
	if (id == 88){
	 return sizeof(branch_neq_c_t);
}
	if (id == 89){
	 return sizeof(branch_gtz_c_t);
}
	if (id == 90){
	 return sizeof(subu_r_r_t);
}
	if (id == 91){
	 return sizeof(branch_c_t);
}
	if (id == 92){
	 return sizeof(branch_nez_c_t);
}
	if (id == 93){
	 return sizeof(balc_t);
}
	if (id == 94){
	 return sizeof(load_i_t);
}
	if (id == 95){
	 return sizeof(add_r_r_t);
}
	if (id == 96){
	 return sizeof(dadd_r_r_t);
}
	if (id == 97){
	 return sizeof(addu_r_r_t);
}
	if (id == 98){
	 return sizeof(daddu_r_r_t);
}
	if (id == 99){
	 return sizeof(dsubu_r_r_t);
}
	if (id == 100){
	 return sizeof(la_r_a_t);
}
	if (id == 101){
	 return sizeof(sub_r_r_t);
}
	if (id == 102){
	 return sizeof(add_r_i_t);
}
	if (id == 103){
	 return sizeof(dadd_r_i_t);
}
	if (id == 104){
	 return sizeof(daddiu_r_m_t);
}
	if (id == 105){
	 return sizeof(lui_r_m_t);
}
	if (id == 106){
	 return sizeof(dsll_t);
}
	if (id == 107){
	 return sizeof(addu_r_i_t);
}
	if (id == 108){
	 return sizeof(daddu_r_i_t);
}
	if (id == 109){
	 return sizeof(mul_r_r_t);
}
	if (id == 110){
	 return sizeof(div_r_r_t);
}
	if (id == 111){
	 return sizeof(load_dw_t);
}
	if (id == 112){
	 return sizeof(load_dw_lab_t);
}
	if (id == 113){
	 return sizeof(load_w_t);
}
	if (id == 114){
	 return sizeof(load_w_lab_t);
}
	if (id == 115){
	 return sizeof(load_h_t);
}
	if (id == 116){
	 return sizeof(load_b_t);
}
	if (id == 117){
	 return sizeof(load_b_u_t);
}
	if (id == 118){
	 return sizeof(store_d_t);
}
	if (id == 119){
	 return sizeof(store_d_lab_t);
}
	if (id == 120){
	 return sizeof(store_w_t);
}
	if (id == 121){
	 return sizeof(store_w_lab_t);
}
	if (id == 122){
	 return sizeof(store_h_t);
}
	if (id == 123){
	 return sizeof(store_b_t);
}
	if (id == 124){
	 return sizeof(muh_r_r_t);
}
	if (id == 125){
	 return sizeof(move_t);
}
	if (id == 126){
	 return sizeof(move_h_t);
}
	if (id == 127){
	 return sizeof(move_l_t);
}
	if (id == 128){
	 return sizeof(and_r_r_t);
}
	if (id == 129){
	 return sizeof(and_r_i_t);
}
	if (id == 130){
	 return sizeof(and_r_i_hex_t);
}
	if (id == 131){
	 return sizeof(or_r_r_t);
}
	if (id == 132){
	 return sizeof(or_r_i_t);
}
	if (id == 133){
	 return sizeof(or_r_i_hex_t);
}
	if (id == 134){
	 return sizeof(xor_r_r_t);
}
	if (id == 135){
	 return sizeof(nor_r_r_t);
}
	if (id == 136){
	 return sizeof(seh_t);
}
	if (id == 137){
	 return sizeof(set_l_r_r_t);
}
	if (id == 138){
	 return sizeof(set_l_r_r_u_t);
}
	if (id == 139){
	 return sizeof(set_l_r_i_t);
}
	if (id == 140){
	 return sizeof(shift_l_t);
}
	if (id == 141){
	 return sizeof(shift_r_t);
}
	if (id == 142){
	 return sizeof(branch_eq_r_r_t);
}
	if (id == 143){
	 return sizeof(branch_neq_r_r_t);
}
	if (id == 144){
	 return sizeof(jump_t);
}
	if (id == 145){
	 return sizeof(jump_r_t);
}
	if (id == 146){
	 return sizeof(call_t);
}
	if (id == 147){
	 return sizeof(syscall_t);
}
	if (id == 148){
	 return sizeof(nop_t);
}
	if (id == 149){
	 return sizeof(code_label_t);
}
	if (id == 150){
	 return sizeof(decl_t);
}
	if (id == 151){
	 return sizeof(data_t);
}
	if (id == 152){
	 return sizeof(I_ADD_R_R_t);
}
	if (id == 153){
	 return sizeof(I_ADD_I_R_t);
}
	if (id == 154){
	 return sizeof(I_AND_R_R_t);
}
	if (id == 155){
	 return sizeof(I_AND_I_R_t);
}
	if (id == 156){
	 return sizeof(I_CALL_t);
}
	if (id == 157){
	 return sizeof(I_CALL_R_t);
}
	if (id == 158){
	 return sizeof(I_CMP_R_R_t);
}
	if (id == 159){
	 return sizeof(I_CMP_R_I_t);
}
	if (id == 160){
	 return sizeof(I_DIV_R_t);
}
	if (id == 161){
	 return sizeof(I_JB_t);
}
	if (id == 162){
	 return sizeof(I_JBE_t);
}
	if (id == 163){
	 return sizeof(I_JA_t);
}
	if (id == 164){
	 return sizeof(I_JAE_t);
}
	if (id == 165){
	 return sizeof(I_JMP_t);
}
	if (id == 166){
	 return sizeof(I_JMP_R_t);
}
	if (id == 167){
	 return sizeof(I_LEA_M_R_t);
}
	if (id == 168){
	 return sizeof(I_MOV_R_R_t);
}
	if (id == 169){
	 return sizeof(I_MOV_M_R_t);
}
	if (id == 170){
	 return sizeof(I_MOV_R_M_t);
}
	if (id == 171){
	 return sizeof(I_MUL_R_t);
}
	if (id == 172){
	 return sizeof(I_NEG_R_t);
}
	if (id == 173){
	 return sizeof(I_NOT_R_t);
}
	if (id == 174){
	 return sizeof(I_OR_R_R_t);
}
	if (id == 175){
	 return sizeof(I_SAR_I_R_t);
}
	if (id == 176){
	 return sizeof(I_SAL_I_R_t);
}
	if (id == 177){
	 return sizeof(I_SHL_I_R_t);
}
	if (id == 178){
	 return sizeof(I_SHR_I_R_t);
}
	if (id == 179){
	 return sizeof(I_SUB_R_R_t);
}
	if (id == 180){
	 return sizeof(I_JZ_t);
}
	if (id == 181){
	 return sizeof(I_JNZ_t);
}
	if (id == 182){
	 return sizeof(I_MOV_I_R_t);
}
	if (id == 183){
	 return sizeof(I_PUSH_R_t);
}
	if (id == 184){
	 return sizeof(I_POP_R_t);
}
	if (id == 185){
	 return sizeof(I_JP_t);
}
	if (id == 186){
	 return sizeof(I_JNP_t);
}
	if (id == 187){
	 return sizeof(I_RET_t);
}
	if (id == 188){
	 return sizeof(I_UD2_t);
}
	if (id == 189){
	 return sizeof(I_XOR_R_R_t);
}
	if (id == 190){
	 return sizeof(I_LEA_LAB_R_t);
}
	if (id == 191){
	 return sizeof(I_OR_I_R_t);
}
	if (id == 192){
	 return sizeof(I_MOV_R_M_LAB_t);
}
	if (id == 193){
	 return sizeof(I_MOV_M_R_LAB_t);
}
	if (id == 194){
	 return sizeof(I_JBU_t);
}
	if (id == 195){
	 return sizeof(I_JAE_U_t);
}
	if (id == 196){
	 return sizeof(i_ret_t);
}
	if (id == 197){
	 return sizeof(i_ud2_t);
}
	if (id == 198){
	 return sizeof(i_push_r_t);
}
	if (id == 199){
	 return sizeof(i_pop_r_t);
}
	if (id == 200){
	 return sizeof(i_add_r_r_t);
}
	if (id == 201){
	 return sizeof(i_sub_r_r_t);
}
	if (id == 202){
	 return sizeof(i_add_i_r_t);
}
	if (id == 203){
	 return sizeof(i_and_r_r_t);
}
	if (id == 204){
	 return sizeof(i_and_i_r_t);
}
	if (id == 205){
	 return sizeof(i_call_t);
}
	if (id == 206){
	 return sizeof(i_call_r_t);
}
	if (id == 207){
	 return sizeof(i_cmp_r_r_t);
}
	if (id == 208){
	 return sizeof(i_cmp_r_i_t);
}
	if (id == 209){
	 return sizeof(i_div_r_t);
}
	if (id == 210){
	 return sizeof(i_jb_t);
}
	if (id == 211){
	 return sizeof(i_jbu_t);
}
	if (id == 212){
	 return sizeof(i_jbe_t);
}
	if (id == 213){
	 return sizeof(i_ja_t);
}
	if (id == 214){
	 return sizeof(i_jz_t);
}
	if (id == 215){
	 return sizeof(i_jp_t);
}
	if (id == 216){
	 return sizeof(i_jnp_t);
}
	if (id == 217){
	 return sizeof(i_jnz_t);
}
	if (id == 218){
	 return sizeof(i_jae_t);
}
	if (id == 219){
	 return sizeof(i_jae_u_t);
}
	if (id == 220){
	 return sizeof(i_jmp_t);
}
	if (id == 221){
	 return sizeof(i_jmp_r_t);
}
	if (id == 222){
	 return sizeof(i_lea_lab_r_t);
}
	if (id == 223){
	 return sizeof(i_lea_m_r_t);
}
	if (id == 224){
	 return sizeof(i_mov_i_r_t);
}
	if (id == 225){
	 return sizeof(i_mov_r_r_t);
}
	if (id == 226){
	 return sizeof(i_mov_m_r_t);
}
	if (id == 227){
	 return sizeof(i_mov_m_r_lab_t);
}
	if (id == 228){
	 return sizeof(i_mov_r_m_t);
}
	if (id == 229){
	 return sizeof(i_mov_r_m_lab_t);
}
	if (id == 230){
	 return sizeof(i_mul_r_t);
}
	if (id == 231){
	 return sizeof(i_neg_r_t);
}
	if (id == 232){
	 return sizeof(i_not_r_t);
}
	if (id == 233){
	 return sizeof(i_or_r_r_t);
}
	if (id == 234){
	 return sizeof(i_or_i_r_t);
}
	if (id == 235){
	 return sizeof(i_xor_r_r_t);
}
	if (id == 236){
	 return sizeof(i_sar_i_r_t);
}
	if (id == 237){
	 return sizeof(i_sal_i_r_t);
}
	if (id == 238){
	 return sizeof(i_shl_i_r_t);
}
	if (id == 239){
	 return sizeof(i_shr_i_r_t);
}
	if (id == 240){
	 return sizeof(SDC1_t);
}
	if (id == 241){
	 return sizeof(LDC1_t);
}
	if (id == 242){
	 return sizeof(SUBD_t);
}
	if (id == 243){
	 return sizeof(CVTDW_t);
}
	if (id == 244){
	 return sizeof(CVTDL_t);
}
	if (id == 245){
	 return sizeof(MTC1_t);
}
	if (id == 246){
	 return sizeof(MFC1_t);
}
	if (id == 247){
	 return sizeof(MFHC1_t);
}
	if (id == 248){
	 return sizeof(DIVD_t);
}
	if (id == 249){
	 return sizeof(MULD_t);
}
	if (id == 250){
	 return sizeof(CMPCONFMT_t);
}
	if (id == 251){
	 return sizeof(BC1EQZ_t);
}
	if (id == 252){
	 return sizeof(BC1NEZ_t);
}
	if (id == 253){
	 return sizeof(DMFC1_t);
}
	if (id == 254){
	 return sizeof(LDC1_M_t);
}
	if (id == 255){
	 return sizeof(TRUNC_W_D_t);
}
	if (id == 256){
	 return sizeof(ADDD_t);
}
	if (id == 257){
	 return sizeof(DMTC1_t);
}
	if (id == 258){
	 return sizeof(MOVD_t);
}
	if (id == 259){
	 return sizeof(ABSD_t);
}
	if (id == 260){
	 return sizeof(sdc1_r_m_t);
}
	if (id == 261){
	 return sizeof(ldc1_r_m_t);
}
	if (id == 262){
	 return sizeof(ldc1_r_m_d_t);
}
	if (id == 263){
	 return sizeof(subd_r_r_t);
}
	if (id == 264){
	 return sizeof(cvtdw_t);
}
	if (id == 265){
	 return sizeof(cvtdl_t);
}
	if (id == 266){
	 return sizeof(add_d_t);
}
	if (id == 267){
	 return sizeof(trunc_w_d_t);
}
	if (id == 268){
	 return sizeof(mov_d_t);
}
	if (id == 269){
	 return sizeof(mtc1_t);
}
	if (id == 270){
	 return sizeof(mfc1_t);
}
	if (id == 271){
	 return sizeof(mfhc1_t);
}
	if (id == 272){
	 return sizeof(dmfc1_t);
}
	if (id == 273){
	 return sizeof(dmtc1_t);
}
	if (id == 274){
	 return sizeof(divd_t);
}
	if (id == 275){
	 return sizeof(muld_t);
}
	if (id == 276){
	 return sizeof(cmpconfmt_t);
}
	if (id == 277){
	 return sizeof(bc1eqz_t);
}
	if (id == 278){
	 return sizeof(bc1nez_t);
}
	if (id == 279){
	 return sizeof(absd_t);
}
	if (id == 280){
	 return sizeof(IMOVSD_R_M_t);
}
	if (id == 281){
	 return sizeof(IMOVSD_M_R_t);
}
	if (id == 282){
	 return sizeof(ISUBSD_R_R_t);
}
	if (id == 283){
	 return sizeof(ICVTSI2SD_R_R_t);
}
	if (id == 284){
	 return sizeof(IMOVD_F_R_t);
}
	if (id == 285){
	 return sizeof(IMOVD_R_F_t);
}
	if (id == 286){
	 return sizeof(IDIVSD_R_R_t);
}
	if (id == 287){
	 return sizeof(IMULSD_R_R_t);
}
	if (id == 288){
	 return sizeof(IUCOMISS_t);
}
	if (id == 289){
	 return sizeof(ICOMISS_t);
}
	if (id == 290){
	 return sizeof(IUCOMISD_t);
}
	if (id == 291){
	 return sizeof(ICOMISD_t);
}
	if (id == 292){
	 return sizeof(ICVTTSD2SI_t);
}
	if (id == 293){
	 return sizeof(IMOVAPD_R_R_t);
}
	if (id == 294){
	 return sizeof(IADDSD_R_R_t);
}
	if (id == 295){
	 return sizeof(IMOVSD_LAB_R_t);
}
	if (id == 296){
	 return sizeof(IMOVSD_R_R_t);
}
	if (id == 297){
	 return sizeof(ANDPD_M_t);
}
	if (id == 298){
	 return sizeof(imovsd_r_m_t);
}
	if (id == 299){
	 return sizeof(imovsd_r_r_t);
}
	if (id == 300){
	 return sizeof(andpd_m_t);
}
	if (id == 301){
	 return sizeof(imovsd_m_r_t);
}
	if (id == 302){
	 return sizeof(imovsd_lab_r_t);
}
	if (id == 303){
	 return sizeof(imovapd_r_r_t);
}
	if (id == 304){
	 return sizeof(iaddsd_r_r_t);
}
	if (id == 305){
	 return sizeof(isubsd_r_r_t);
}
	if (id == 306){
	 return sizeof(icvtsi2sd_r_r_t);
}
	if (id == 307){
	 return sizeof(icvttsd2si_r_r_t);
}
	if (id == 308){
	 return sizeof(imovd_f_r_t);
}
	if (id == 309){
	 return sizeof(imovd_r_f_t);
}
	if (id == 310){
	 return sizeof(idivsd_r_r_t);
}
	if (id == 311){
	 return sizeof(imulsd_r_r_t);
}
	if (id == 312){
	 return sizeof(iucomiss_r_r_t);
}
	if (id == 313){
	 return sizeof(icomiss_r_r_t);
}
	if (id == 314){
	 return sizeof(iucomisd_r_r_t);
}
	if (id == 315){
	 return sizeof(icomisd_r_r_t);
}
	if (id == 316){
	 return sizeof(muh_r_r_t_t);
}
	if (id == 317){
	 return sizeof(seh_t_t);
}
	if (id == 318){
	 return sizeof(move_t_t);
}
	if (id == 319){
	 return sizeof(add_r_r_t_t);
}
	if (id == 320){
	 return sizeof(sub_r_r_t_t);
}
	if (id == 321){
	 return sizeof(add_r_i_t_t);
}
	if (id == 322){
	 return sizeof(mul_r_r_t_t);
}
	if (id == 323){
	 return sizeof(div_r_r_t_t);
}
	if (id == 324){
	 return sizeof(load_dw_t_t);
}
	if (id == 325){
	 return sizeof(load_w_t_t);
}
	if (id == 326){
	 return sizeof(load_h_t_t);
}
	if (id == 327){
	 return sizeof(load_b_t_t);
}
	if (id == 328){
	 return sizeof(store_d_t_t);
}
	if (id == 329){
	 return sizeof(store_w_t_t);
}
	if (id == 330){
	 return sizeof(store_h_t_t);
}
	if (id == 331){
	 return sizeof(store_b_t_t);
}
	if (id == 332){
	 return sizeof(move_h_t_t);
}
	if (id == 333){
	 return sizeof(move_l_t_t);
}
	if (id == 334){
	 return sizeof(and_r_r_t_t);
}
	if (id == 335){
	 return sizeof(and_r_i_t_t);
}
	if (id == 336){
	 return sizeof(or_r_r_t_t);
}
	if (id == 337){
	 return sizeof(or_r_i_t_t);
}
	if (id == 338){
	 return sizeof(xor_r_r_t_t);
}
	if (id == 339){
	 return sizeof(nor_r_r_t_t);
}
	if (id == 340){
	 return sizeof(set_l_r_r_t_t);
}
	if (id == 341){
	 return sizeof(set_l_r_i_t_t);
}
	if (id == 342){
	 return sizeof(shift_l_t_t);
}
	if (id == 343){
	 return sizeof(shift_r_t_t);
}
	if (id == 344){
	 return sizeof(branch_eq_r_r_t_t);
}
	if (id == 345){
	 return sizeof(branch_neq_r_r_t_t);
}
	if (id == 346){
	 return sizeof(jump_t_t);
}
	if (id == 347){
	 return sizeof(jump_r_t_t);
}
	if (id == 348){
	 return sizeof(call_t_t);
}
	if (id == 349){
	 return sizeof(i_preserve_t);
}
	if (id == 350){
	 return sizeof(i_restore_t);
}
	if (id == 351){
	 return sizeof(i_prologue_t);
}
	if (id == 352){
	 return sizeof(i_load_mem_t);
}
	if (id == 353){
	 return sizeof(i_store_mem_t);
}
	if (id == 354){
	 return sizeof(i_lea_address_t);
}
	if (id == 355){
	 return sizeof(branch_nez_c_t_t);
}
	if (id == 356){
	 return sizeof(subu_r_r_t_t);
}
	if (id == 357){
	 return sizeof(branch_gtz_c_t_t);
}
	if (id == 358){
	 return sizeof(branch_ge_c_t_t);
}
	if (id == 359){
	 return sizeof(branch_geu_c_t_t);
}
	if (id == 360){
	 return sizeof(shift_ra_t_t);
}
	if (id == 361){
	 return sizeof(branch_lt_c_t_t);
}
	if (id == 362){
	 return sizeof(dsrl_t_t);
}
	if (id == 363){
	 return sizeof(branch_ltz_c_t_t);
}
	if (id == 364){
	 return sizeof(teq_t_t);
}
	if (id == 365){
	 return sizeof(branch_ltu_c_t_t);
}
	if (id == 366){
	 return sizeof(lea_label_t);
}
	if (id == 367){
	 return sizeof(load_data_label_t);
}
	if (id == 368){
	 return sizeof(store_data_label_t);
}
	if (id == 369){
	 return sizeof(sdc1_r_m_t_t);
}
	if (id == 370){
	 return sizeof(ldc1_r_m_t_t);
}
	if (id == 371){
	 return sizeof(subd_r_r_t_t);
}
	if (id == 372){
	 return sizeof(cvtdw_t_t);
}
	if (id == 373){
	 return sizeof(mtc1_t_t);
}
	if (id == 374){
	 return sizeof(mfc1_t_t);
}
	if (id == 375){
	 return sizeof(mfhc1_t_t);
}
	if (id == 376){
	 return sizeof(dmfc1_t_t);
}
	if (id == 377){
	 return sizeof(divd_t_t);
}
	if (id == 378){
	 return sizeof(muld_t_t);
}
	if (id == 379){
	 return sizeof(cmpconfmt_t_t);
}
	if (id == 380){
	 return sizeof(cmp_jmp_t);
}
	if (id == 381){
	 return sizeof(cmp_neg_t);
}
	if (id == 382){
	 return sizeof(lea_label_f_t);
}
	if (id == 383){
	 return sizeof(truncwd_t_t);
}
	if (id == 384){
	 return sizeof(cvtdl_t_t);
}
	if (id == 385){
	 return sizeof(add_d_t_t);
}
	if (id == 386){
	 return sizeof(dmtc1_t_t);
}
	if (id == 387){
	 return sizeof(absd_t_t);
}
	
}
