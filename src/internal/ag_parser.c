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
