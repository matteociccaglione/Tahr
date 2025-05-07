#include <tahr.h>
#include <ag_parser.h>
#include <grow.h>
#include <stack.h>
#include <stdio.h>

typedef struct{
        char *og_reg;
        char *mem_reg;
        unsigned char is_valid;
}mem_reg_map;

mem_reg_map map[2]={
        {"empty","r14",0},
        {"empty","r15",0}

};

char *libc_names[] = {
"longjmp",
"setjmp",
"printf",
"fprintf",
"dprintf",
"sprintf",
"snprintf",
"vprintf",
"vfprintf",
"vdprintf",
"vsprintf",
"vsnprintf",
"assert",
"_exit",
"abort",
"at_exit",
"at_quick_exit",
"exit",
"quick_exit",
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
"isxdigit",
"toascii",
"tolower",
"toupper",
"nl_langinfo",
"fabs",
"fabsf",
"clearerr",
"ctermid",
"fclose",
"fdopen",
"feof",
"ferror",
"fflush",
"fgetch",
"fgetpos",
"fgets",
"fileno",
"flockfile",
"fmemopen",
"fopen",
"fputc",
"fputs",
"fread",
"freopen",
"fscanf",
"fseek",
"fseeko",
"fsetpos",
"ftell",
"ftello",
"ftrylockfile",
"funlockfile",
"fwrite",
"getc",
"getchar",
"getdelim",
"getline",
"pclose",
"perror",
"popen",
"putc",
"remove",
"rename",
"renameat",
"rewind",
"scanf",
"setbuf",
"setvbuf",
"sscanf",
"tempnam",
"ungetc",
"asprintf",
"putchar",
"puts",
"vasprintf",
"abs",
"atof",
"atoi",
"atol",
"atoll",
"bsearch",
"div",
"heapsort",
"imaxabs",
"imaxdiv",
"labs",
"ldiv",
"llabs",
"lldiv",
"qsort",
"rand",
"srand",
"malloc",
"free",
"calloc",
"realloc",
"strtol",
"strtold",
"strtoll",
"strtoul",
"strtoull",
"memchr",
"memcmp",
"memcpy",
"memmem",
"memmove",
"memrchr",
"memset",
"strcat",
"strchr",
"strchrnul",
"strcmp",
"strcoll",
"strcpy",
"strcspn",
"strdup",
"strerror",
"strlen",
"strncat",
"strncmp",
"strncpy",
"strndup",
"strnlen",
"strnstr",
"strpbrk",
"strrchr",
"strspn",
"strstr",
"strtok",
"strxfrm",
"fls",
"flsl",
"flsll",
"asctime",
"iswalnum",
"iswalpha",
"iswascii",
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
"towccase",
"towctrans",
"towlower",
"towupper",
"wcswidth",
"wctrans",
"wctype",
"wcwidth",
"fexecve"
};


int is_libc(char *name){
        for (int i = 0; i < sizeof(libc_names)/sizeof(char*); i++){
                if (strcmp(name,libc_names[i])==0)
                        return 1;
        }
        return 0;
}

int get_libc_code(char *name){

        for (int i = 0; i < sizeof(libc_names)/sizeof(char*); i++){
                if (strcmp(name,libc_names[i])==0)
                        return i;
        }
        printf("Fun %s is not a libc function\n",name);
        exit(EXIT_FAILURE);
}

unsigned long counter = 0;

char *create_label(){
        char template[] = "vmorph_art_lab_%d";
        char *res = malloc(strlen(template) + 10);
        sprintf(res,template,counter++);
        return res; 
}

char *map_register(char *reg){
        if (strcmp(reg,"$zero") == 0)
                return "r5";
        if (strcmp(reg,"HI") == 0)
                return "r8";

        if (strcmp(reg,"$v0") == 0)
                return "v0";
        if (strcmp(reg,"$v1") == 0)
                return "r4";
        if (strcmp(reg,"$a0") == 0)
                return "r0";
        if (strcmp(reg,"$a1") == 0)
                return "r1";
        if (strcmp(reg,"$a2") == 0)
                return "r2";
        if (strcmp(reg,"$a3") == 0)
                return "r3";
        if (strcmp(reg,"$t0") == 0)
                return "r9";
        if (strcmp(reg,"$t1") == 0)
                return "r10";
        if (strcmp(reg,"$t2") == 0)
                return "r11";
        if (strcmp(reg,"$t3") == 0)
                return "r12";
        if (strcmp(reg,"$t4") == 0)
                return "r13";
        if (strcmp(reg,"$t5") == 0)
                return "m0";
        if (strcmp(reg,"$t6") == 0)
                return "m1";
        if (strcmp(reg,"$t7") == 0)
                return "m2";
        if (strcmp(reg,"$t8") == 0)
                return "m3";
        if (strcmp(reg,"$t9") == 0)
                return "m4";
        
        if (strcmp(reg,"$s0") == 0)
                return "r6";
        if (strcmp(reg,"$s1") == 0)
                return "r7";
        if (strcmp(reg,"$s2") == 0)
                return "m7";
        if (strcmp(reg,"$s3") == 0)
                return "m8";
        if (strcmp(reg,"$s4") == 0)
                return "m9";
        if (strcmp(reg,"$s5") == 0)
                return "m10";
        if (strcmp(reg,"$s6") == 0)
                return "m11";
        if (strcmp(reg,"$s7") == 0)
                return "m12";
        if(strcmp(reg,"$sp") == 0)
                return "sp";
        if(strcmp(reg,"$PC") == 0)
                return "ip";
        if (strcmp(reg,"$ra") == 0)
                return "ret";
        printf("No map for: %s\n",reg);
        exit(EXIT_FAILURE);
} 

unsigned char is_mem_reg(char *reg){
        if (reg[0] == 'm')
                return 0x1;
        return 0x0;
}

char* get_mem_reg(char *reg){
        if (!is_mem_reg(reg))
            return reg;
        if (strcmp(map[0].og_reg,reg) == 0 && map[0].is_valid)
                return map[0].mem_reg;
        if (strcmp(map[1].og_reg,reg) == 0 && map[1].is_valid)
                return map[1].mem_reg;
        for (int i = 0; i < 2; i++){
                if (map[i].is_valid == 0x0){
                        map[i].og_reg = reg;
                        map[i].is_valid=0x1;
                        return map[i].mem_reg;
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

int is_main(char *s){
        if (strncmp(s,"main:",strlen("main:")) == 0)
                return 1;
        return 0;
}

int main(int argc, char **argv){
        library_init();
        void **mem = calloc(2000, sizeof(void*));
        set_out_stream(mem,2000);
        char *buf = "pippo: \naddi $s0,$s1,4";
        //char *file = "fibonacci2.mips";
        char *file = argv[1];
        //set_in_stream(buf);
        set_in_file(file);
        printf("Doing parse\n");
        parse();
        printf("Parse done\n");
        int i = 0;
        char **ins = calloc(2000, sizeof(char*));
        while(mem[i] != NULL){
            void *new = trans_sym(mem[i]);
            push(new);
            grow();
            ins[i] = dump();
            i++;
        }
        i = 0;
        FILE *f = fopen("output.s","w");
        FILE *out = stdout;
        out = f;
        while(ins[i]!=NULL){
            fprintf(out,"%s",ins[i]);
            if (is_main(ins[i])){
                fprintf(out,"xor_r_r %s , %s\n",map_register("$zero"),map_register("$zero"));        
            }
            i++;
        }
}

