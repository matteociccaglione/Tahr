#include "utils.h"
#include <tahr.h>
#include <ag_parser.h>
#include <grow.h>
#include <stack.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct register_names{
        char *q;
        char *l;
        char *w;
        char *b;
}reg_names;
typedef struct{
        char *og_reg;
        reg_names mem_reg;
        unsigned char is_valid;
}mem_reg_map;
char *get_fun(char *fun){
        char *libc_functions[] = {        
"longjmp",     
"setjmp",      
"printf",      
"fprintf",     
"snprintf",    
"isalnum",     
"isalpha",     
"isascii",     
"isblank",     
"iscntrl",     
"isdigit",     
"isgraph",     
"islower",     
"isprint",     
"ispunct",     
"isspace",     
"isupper",     
"isxdigi",     
"toascii",     
"tolower",     
"toupper",     
"clearerr",    
"ctermid",     
"fclose",      
"fdopen",      
"feof",        
"ferror",      
"fflush",      
"fgetch",      
"fgets",       
"fileno",      
"flockfile",   
"fmemopen",    
"fopen",       
"fputc",       
"fputs",       
"fread",       
"freopen",     
"fseek",       
"fseeko",      
"ftell",       
"ftello",      
"ftrylockfile",
"funlockfile", 
"fwrite",      
"putc",        
"remove",      
"rename",      
"rewind",      
"setbuf",      
"ungetc",      
"puts",        
"abs",         
"atoi",        
"atol",        
"atoll",       
"imaxabs",     
"div",         
"imaxdiv",     
"labs",        
"ldiv",        
"llabs",       
"lldiv",       
"rand",        
"srand",       
"malloc",      
"free",        
"strtol",      
"strtoll",     
"strtoul",     
"strtoull",    
"memchr",      
"memcmp",      
"memcpy",      
"memrchr",     
"memset",      
"strchr",      
"strchrnul",   
"strcmp",      
"strerror",    
"strlen",      
"strncat",     
"strncmp",     
"strncpy",     
"strnlen",     
"strnstr",     
"strrchr",     
"strstr",      
"iswalnum",    
"iswalpha",    
"iswblank",    
"iswcntrl",    
"iswctype",    
"iswdigit",    
"iswgraph",    
"iswlower",    
"iswprint",    
"iswpunct",    
"iswspace",    
"iswupper",    
"iswxdigit",   
"towlower",    
"towupper",    
"wcswidth",    
"wctype",      
"wcwidth",     
"fexecve"     
        };
        char *out = fun;
        for (int i = 0; i < sizeof(libc_functions)/sizeof(char*); i++){
                if (strcmp(fun,libc_functions[i]) == 0){
                        out = malloc(strlen(fun) + strlen("@PLT") + 10);
                        sprintf(out,"%s@PLT",fun);
                        return out;
                }
        }
        return out;
}
mem_reg_map map[2]={
        {"empty",{"%r14","%r14d","%r14w","%r14b"},0},
        {"empty",{"%r15","%r15d","%r15w","%r15b"},0}

};

unsigned long counter = 0;

char *create_label(){
        char template[] = "x86_art_lab_%d";
        char *res = malloc(strlen(template) + 10);
        sprintf(res,template,counter++);
        return res; 
}

char *print_as_a_label(char *lab){
       char *res = malloc(strlen(lab)+3); 
       sprintf(res,"%s:",lab);
       return res;
}


char *get_register_by_size(reg_names names, int size){
        switch(size){
                case 64:
                        return names.q;
                case 32:
                        return names.l;
                case 16:
                        return names.w;
                default:
                        return names.b;
        }
}

reg_names x86[35];
void init(){

        //rax,rbx,rcx,rdx,rsp,rbp,rsi,rdi,r8,r9,r10,r11,r12,r13,r14,r15,m0,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,m17,rip
        //0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13,14,15,16,17,18,19,20,21,22,23, 24, 25, 26,27, 28, 29, 30, 31, 32, 33 ,34
        for (int i = 0; i < 34; i++){
                x86[i].q = ireg_values[i];
                x86[i].l = ireg_values[i+35];
                x86[i].w = ireg_values[i+35*2];
                x86[i].b = ireg_values[i+35*3];
        }
        int i = 0;
        while(1){
            if (strcmp("%rip",ireg_values[i]) == 0)
                break;
            i++;
        }
        x86[34].q = ireg_values[i];
        x86[34].l = ireg_values[i];
        x86[34].w = ireg_values[i];
        x86[34].b = ireg_values[i];
}
char *empty_string(){
    return x86[34].q;
}
char *map_register(char *reg, int size){
        if (strcmp(reg,"$fp") == 0)
                return get_register_by_size(x86[5],size);
        if (strcmp(reg,"$zero") == 0)
                return get_register_by_size(x86[12],size);
        if (strcmp(reg,"HI") == 0)
                return get_register_by_size(x86[30],size);
        if (strcmp(reg,"LO") == 0)
                return get_register_by_size(x86[31],size);
        if (strcmp(reg,"$at") == 0)
                return get_register_by_size(x86[16],size);

        if (strcmp(reg,"$v0") == 0)
                return get_register_by_size(x86[0],size);
        if (strcmp(reg,"$v1") == 0)
                return get_register_by_size(x86[11],size);
        if (strcmp(reg,"$a0") == 0)
                return get_register_by_size(x86[7],size);
        if (strcmp(reg,"$a1") == 0)
                return get_register_by_size(x86[6],size);
        if (strcmp(reg,"$a2") == 0)
                return get_register_by_size(x86[3],size);
        if (strcmp(reg,"$a3") == 0)
                return get_register_by_size(x86[2],size);
        if (strcmp(reg,"$t0") == 0)
                return get_register_by_size(x86[14],size);
        if (strcmp(reg,"$t1") == 0)
                return get_register_by_size(x86[8],size);
        if (strcmp(reg,"$t2") == 0)
                return get_register_by_size(x86[9],size);
        if (strcmp(reg,"$t3") == 0)
                return get_register_by_size(x86[10],size);
        if (strcmp(reg,"$t4") == 0)
                return get_register_by_size(x86[25],size);
        if (strcmp(reg,"$t5") == 0)
                return get_register_by_size(x86[26],size);
        if (strcmp(reg,"$t6") == 0)
                return get_register_by_size(x86[27],size);
        if (strcmp(reg,"$t7") == 0)
                return get_register_by_size(x86[28],size);
        if (strcmp(reg,"$t8") == 0)
                return get_register_by_size(x86[29],size);
        if (strcmp(reg,"$t9") == 0)
                return get_register_by_size(x86[30],size);
        
        if (strcmp(reg,"$s0") == 0)
                return get_register_by_size(x86[1],size); // 21
        if (strcmp(reg,"$s1") == 0)
                return get_register_by_size(x86[13],size); // 22
        if (strcmp(reg,"$s2") == 0)
                return get_register_by_size(x86[23],size); // 23
        if (strcmp(reg,"$s3") == 0)
                return get_register_by_size(x86[24],size); // 24
        if (strcmp(reg,"$s4") == 0)
                return get_register_by_size(x86[17],size); // 17
        if (strcmp(reg,"$s5") == 0)
                return get_register_by_size(x86[20],size);
        if (strcmp(reg,"$s6") == 0)
                return get_register_by_size(x86[18],size);
        if (strcmp(reg,"$s7") == 0)
                return get_register_by_size(x86[19],size);
        if(strcmp(reg,"$sp") == 0)
                return get_register_by_size(x86[4],size);
        if(strcmp(reg,"$PC") == 0)
                return get_register_by_size(x86[34],size);
        if (strcmp(reg,"$ra") == 0)
                return x86[13].q;
        printf("No map for: %s\n",reg);
        exit(EXIT_FAILURE);
} 
char *fp_map_register(char *reg){
        for (int i = 0; i < 16; i++){
                if(strcmp(fpreg_values[i],reg) == 0)
                        return ifpreg_values[(i+4)%16];
        }
        printf("No such register in map %s\n",reg);
        exit(EXIT_FAILURE);
}
unsigned char is_mem_reg(char *reg){
        if (reg[1] == 'm'){
                return 0x1;
        }
        return 0x0;
}

char get_float_size(char *fmt){
        char *out = "dsw";
        for (int i = 0; i < sizeof(fmtsuf_values)/sizeof(fmtsuf); i++){
                if (strcmp(fmt,fmtsuf_values[i]) == 0){
                        return out[i];
                }else{
                }
        }
        exit(EXIT_FAILURE);
}
typedef struct fp_con{
        char *full_con;
        char con;
        int unordered;
}fp_con;

fp_con conditions[16] = {
        {"af.",'f',0},
        {"at.",'t',0},
        {"un.",'?',1},
        {"or.",'?',0},
        {"eq.",'e',0},
        {"ne.",'n',0},
        {"ueq.",'e',1},
        {"une.",'n',1},
        {"lt.",'b',0},
        {"oge.",'g',0},
        {"ult.",'b',1},
        {"uge.",'g',1},
        {"le.",'l',0},
        {"ogt.",'a',0},
        {"ule.",'l',1},
        {"ugt.",'a',1}
};

char* negate(char* con){
       fp_con con1[8] = {conditions[0],conditions[2],conditions[4],conditions[6],conditions[8],conditions[10],conditions[12],conditions[14]};
       fp_con con2[8] = {conditions[1],conditions[3],conditions[5],conditions[7],conditions[9],conditions[11],conditions[13],conditions[15]};
       for (int i = 0; i < 8; i++){
                if (strcmp(con1[i].full_con,con) == 0){
                        return con2[i].full_con;
                }
       }
       for (int i = 0; i < 8; i++){
                if (strcmp(con2[i].full_con,con) == 0){
                        return con1[i].full_con;
                }
       }
       exit(EXIT_FAILURE);
}

char get_condition(char *con){
       for (int i = 0; i < 16; i++){
                if (strcmp(conditions[i].full_con,con) == 0)
                        return conditions[i].con;
       }
       exit(EXIT_FAILURE);
}

int is_unordered(char *con){

       for (int i = 0; i < 16; i++){
                if (strcmp(conditions[i].full_con,con) == 0)
                        return conditions[i].unordered;
       }
       exit(EXIT_FAILURE);
}

int get_reg_size(char *reg){
        for (int i = 0; i < 33; i++){
                if (strcmp(reg,x86[i].q) == 0){
                        return 64;
                }
                if (strcmp(reg,x86[i].l) == 0){
                        return 32;
                }
                if (strcmp(reg,x86[i].w) == 0){
                        return 16;
                }
                if (strcmp(reg,x86[i].b) == 0){
                        return 8;
                }
        }
        printf("Register %s not found\n",reg);
        exit(EXIT_FAILURE);
}

char* get_mul_reg(char *reg, int id){
        int size = get_reg_size(reg); 
        reg_names mul_regs[2] = {x86[0],x86[3]};
        return get_register_by_size(mul_regs[id-1],64);
}

char* get_mul_reg_size(char *reg, int id){
        int size = get_reg_size(reg); 
        reg_names mul_regs[2] = {x86[0],x86[3]};
        return get_register_by_size(mul_regs[id-1],size);
}

char *get_suffix(char *reg){
        int size = get_reg_size(reg);
        switch(size){
                case 64:
                        return suf_values[0];
                case 32:
                        return suf_values[1];
                case 16:
                        return suf_values[2];
                default:
                        return suf_values[3];
        }
}

int is_mul_reg(char *reg){
        int size = get_reg_size(reg);
        reg_names mul_regs[2] = {x86[0],x86[3]};
        for (int i = 0; i < 2; i++){
                if (strcmp(get_register_by_size(mul_regs[i],size),reg) == 0)
                        return 1;
        }
        return 0;
}

char* get_mem_reg(char *reg){
        if (!is_mem_reg(reg))
            return reg;
        if (strcmp(map[0].og_reg,reg) == 0 && map[0].is_valid)
                return get_register_by_size(map[0].mem_reg,get_reg_size(reg));
        if (strcmp(map[1].og_reg,reg) == 0 && map[1].is_valid)
                return get_register_by_size(map[1].mem_reg,get_reg_size(reg));
        for (int i = 0; i < 2; i++){
                if (map[i].is_valid == 0x0){
                        map[i].og_reg = reg;
                        map[i].is_valid=0x1;
                        return get_register_by_size(map[i].mem_reg,get_reg_size(reg));
                }
        }
        printf("No memory reg available for: %s\n",reg);
        exit(EXIT_FAILURE);
}

int get_offset(char *reg){

        if (is_mem_reg(reg)){
                char s[10];
                int c = 0;
                for (int i = 0; i < strlen(reg); i++){
                        if (reg[i]>='0' && reg[i]<='9'){
                                s[c] = reg[i];
                                c++;
                        }
                }
                s[c] = '\0';
                int num = strtol(s, NULL, 10);
                return num*8;
        }
        printf("Reg %s is not a memory register\n",reg);
        exit(EXIT_FAILURE);

}

void release_mem_reg(char* reg){
        for (int i = 0; i < 2; i++){
                if (strcmp(map[i].og_reg,reg) == 0){
                        map[i].is_valid = 0x0;
                        return;
                }
        }
}

void release_mem_regs(){
        map[0].is_valid = 0x0;
        map[1].is_valid = 0x0;
}

int stack = -8;

int byte_align(int num,int align){
        int ret = num;
        int is_neg = 1;
        if (ret < 0){
                ret = ret*-1;
                is_neg = -1;
        }
        while((-1)*(ret+stack)%16!=0){
                ret++;
        }
        stack+=ret;
        return ret*is_neg;
}

void add_function(char **functions, char *fun){
        int i = 0;
        while (functions[i]!=NULL){
                i++;
        }
        functions[i] = malloc(strlen(fun)+1);
        strcpy(functions[i],fun);
}

int is_fun_start(char **functions, char *fun){
        int i = 0;
        if (strncmp(fun,"main:",strlen("main:")) == 0)
                return 1;
        while (functions[i] !=NULL){
                char *test = malloc(strlen(functions[i])+4);
                sprintf(test,"%s:",functions[i]);
                if (strncmp(test,fun,strlen(test)) == 0){
                        return 1;
                }
                i++;
        }
        return 0;
}

int is_fun_end(char *ins){
        if (strlen(ins) < 3)
                return 0;
        if (strncmp(ins,"ret",3) == 0)
                return 1;
        return 0;
}

int main(int argc,char **argv){
        init();
        library_init();
        void **mem = calloc(2048, sizeof(void*));
        set_out_stream(mem,2048);
        char *buf = "pippo: \naddi $s0,$s1,4";
        char *file = argv[1];
        //set_in_stream(buf);
        set_in_file(file);
        printf("Doing parse\n");
        parse();
        printf("Parse done\n");
        int i = 0;
        char *functions[1024] = {0}; //Needed for correct stack handling
        char **ins = calloc(2048, sizeof(char*));
        while(mem[i] != NULL){
            void *new = trans_sym(mem[i]);
            call_t *c_fun = (call_t*)new;
            if (c_fun->id == 348){
                add_function(functions,c_fun->address);
            }
            push(new);
            grow();
            ins[i] = dump();
            if(ins[i] == NULL){
                printf("An error has occured\n");
                exit(EXIT_FAILURE);
            }
            i++;
        }
        i = 0;
        FILE *f = fopen("output.s","w");
        FILE *out = stdout;
        out = f;
        char push_s[] = {'p','u','s','h','q',' ','%','r','b','p','\0'};
        char pop_s[] = {'p','o','p','q',' ','%','r','b','p','\0'};
        while(ins[i]!=NULL){
            //printf("writing: %s\n",ins[i]);
            if (is_fun_end(ins[i])){
                fprintf(out,"%s\n",pop_s);
            }
            fprintf(out,"%s",ins[i]);
            if (is_fun_start(functions,ins[i])){
                fprintf(out,"%s\n",push_s);
                fprintf(out,"xorq %s,%s\n",map_register("$zero",64),map_register("$zero",64));        
            }
            i++;
        }
}

