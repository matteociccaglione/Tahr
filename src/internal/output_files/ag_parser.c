#include "ag_parser.h"
#include "ag_utils.h"
#include "lex.yy.h"
#include "tahr.h"

extern int yyparse (void);

reduce_wrapper the_wrapper = {0x0};

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

long i_strtol(char *str){
        int base = 10;
        if ((str[0] == '0' && (str[1] == 'x' || str[1] == 'X')) || (str[0] == '-' && (str[1] == '0') && (str[2] == 'x' || str[2] == 'X')) )
                base = 16;
        return (long)strtol(str,NULL,base);
        
}

void set_buffer(char *buf){
        buf_set = 1;
        cur_pos = 0;
        yy_switch_to_buffer(yy_scan_string(buf));
}

void reset_cursor(){
        cur_pos = 0;
}       

void set_buffer_noreset(char *buf){
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
        printf("Saving sym\n");
        if (cur_pos < out_size){
                out_stream[cur_pos] = sym;
                cur_pos++;
                return 1;
        }else{
                return 0;
        }
}

int save_and_fix(void *sym, int n){
        if (the_wrapper.func != NULL){
                if (!the_wrapper.func(out_stream,cur_pos,n,sym)){
                        return 1;
                }
        }
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
        printf("Retrieving %d\n",*n);
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
	 return sizeof(I_ADD_R_R_t);
}
	if (id == 1){
	 return sizeof(I_ADD_I_R_t);
}
	if (id == 2){
	 return sizeof(I_AND_R_R_t);
}
	if (id == 3){
	 return sizeof(I_AND_I_R_t);
}
	if (id == 4){
	 return sizeof(I_CALL_t);
}
	if (id == 5){
	 return sizeof(I_CALL_R_t);
}
	if (id == 6){
	 return sizeof(I_CMP_R_R_t);
}
	if (id == 7){
	 return sizeof(I_CMP_R_I_t);
}
	if (id == 8){
	 return sizeof(I_DIV_R_t);
}
	if (id == 9){
	 return sizeof(I_JB_t);
}
	if (id == 10){
	 return sizeof(I_JBE_t);
}
	if (id == 11){
	 return sizeof(I_JA_t);
}
	if (id == 12){
	 return sizeof(I_JAE_t);
}
	if (id == 13){
	 return sizeof(I_JMP_t);
}
	if (id == 14){
	 return sizeof(I_JMP_R_t);
}
	if (id == 15){
	 return sizeof(I_LEA_M_R_t);
}
	if (id == 16){
	 return sizeof(I_MOV_R_R_t);
}
	if (id == 17){
	 return sizeof(I_MOV_M_R_t);
}
	if (id == 18){
	 return sizeof(I_MOV_R_M_t);
}
	if (id == 19){
	 return sizeof(I_MUL_R_t);
}
	if (id == 20){
	 return sizeof(I_NEG_R_t);
}
	if (id == 21){
	 return sizeof(I_NOT_R_t);
}
	if (id == 22){
	 return sizeof(I_OR_R_R_t);
}
	if (id == 23){
	 return sizeof(I_SAR_I_R_t);
}
	if (id == 24){
	 return sizeof(I_SAL_I_R_t);
}
	if (id == 25){
	 return sizeof(I_SHL_I_R_t);
}
	if (id == 26){
	 return sizeof(I_SHR_I_R_t);
}
	if (id == 27){
	 return sizeof(I_SUB_R_R_t);
}
	if (id == 28){
	 return sizeof(I_JZ_t);
}
	if (id == 29){
	 return sizeof(I_JNZ_t);
}
	if (id == 30){
	 return sizeof(I_MOV_I_R_t);
}
	if (id == 31){
	 return sizeof(I_PUSH_R_t);
}
	if (id == 32){
	 return sizeof(I_POP_R_t);
}
	if (id == 33){
	 return sizeof(I_JP_t);
}
	if (id == 34){
	 return sizeof(I_JNP_t);
}
	if (id == 35){
	 return sizeof(I_RET_t);
}
	if (id == 36){
	 return sizeof(I_UD2_t);
}
	if (id == 37){
	 return sizeof(I_XOR_R_R_t);
}
	if (id == 38){
	 return sizeof(I_LEA_LAB_R_t);
}
	if (id == 39){
	 return sizeof(I_OR_I_R_t);
}
	if (id == 40){
	 return sizeof(I_MOV_R_M_LAB_t);
}
	if (id == 41){
	 return sizeof(I_MOV_M_R_LAB_t);
}
	if (id == 42){
	 return sizeof(I_JBU_t);
}
	if (id == 43){
	 return sizeof(I_JAE_U_t);
}
	if (id == 44){
	 return sizeof(I_POP_M_t);
}
	if (id == 45){
	 return sizeof(I_SUB_I_R_t);
}
	if (id == 46){
	 return sizeof(i_ret_t);
}
	if (id == 47){
	 return sizeof(i_ud2_t);
}
	if (id == 48){
	 return sizeof(i_push_r_t);
}
	if (id == 49){
	 return sizeof(i_pop_r_t);
}
	if (id == 50){
	 return sizeof(i_pop_m_t);
}
	if (id == 51){
	 return sizeof(i_add_r_r_t);
}
	if (id == 52){
	 return sizeof(i_sub_r_r_t);
}
	if (id == 53){
	 return sizeof(i_add_i_r_t);
}
	if (id == 54){
	 return sizeof(i_sub_i_r_t);
}
	if (id == 55){
	 return sizeof(i_and_r_r_t);
}
	if (id == 56){
	 return sizeof(i_and_i_r_t);
}
	if (id == 57){
	 return sizeof(i_call_t);
}
	if (id == 58){
	 return sizeof(i_call_r_t);
}
	if (id == 59){
	 return sizeof(i_cmp_r_r_t);
}
	if (id == 60){
	 return sizeof(i_cmp_r_i_t);
}
	if (id == 61){
	 return sizeof(i_div_r_t);
}
	if (id == 62){
	 return sizeof(i_jb_t);
}
	if (id == 63){
	 return sizeof(i_jbu_t);
}
	if (id == 64){
	 return sizeof(i_jbe_t);
}
	if (id == 65){
	 return sizeof(i_ja_t);
}
	if (id == 66){
	 return sizeof(i_jz_t);
}
	if (id == 67){
	 return sizeof(i_jp_t);
}
	if (id == 68){
	 return sizeof(i_jnp_t);
}
	if (id == 69){
	 return sizeof(i_jnz_t);
}
	if (id == 70){
	 return sizeof(i_jae_t);
}
	if (id == 71){
	 return sizeof(i_jae_u_t);
}
	if (id == 72){
	 return sizeof(i_jmp_t);
}
	if (id == 73){
	 return sizeof(i_jmp_r_t);
}
	if (id == 74){
	 return sizeof(i_lea_lab_r_t);
}
	if (id == 75){
	 return sizeof(i_lea_m_r_t);
}
	if (id == 76){
	 return sizeof(i_mov_i_r_t);
}
	if (id == 77){
	 return sizeof(i_mov_r_r_t);
}
	if (id == 78){
	 return sizeof(i_mov_m_r_t);
}
	if (id == 79){
	 return sizeof(i_mov_m_r_lab_t);
}
	if (id == 80){
	 return sizeof(i_mov_r_m_t);
}
	if (id == 81){
	 return sizeof(i_mov_r_m_lab_t);
}
	if (id == 82){
	 return sizeof(i_mul_r_t);
}
	if (id == 83){
	 return sizeof(i_neg_r_t);
}
	if (id == 84){
	 return sizeof(i_not_r_t);
}
	if (id == 85){
	 return sizeof(i_or_r_r_t);
}
	if (id == 86){
	 return sizeof(i_or_i_r_t);
}
	if (id == 87){
	 return sizeof(i_xor_r_r_t);
}
	if (id == 88){
	 return sizeof(i_sar_i_r_t);
}
	if (id == 89){
	 return sizeof(i_sal_i_r_t);
}
	if (id == 90){
	 return sizeof(i_shl_i_r_t);
}
	if (id == 91){
	 return sizeof(i_shr_i_r_t);
}
	
}
