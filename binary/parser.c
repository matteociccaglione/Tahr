#include <stdio.h>
#include <mcheck.h>
#include <parser/parser.h>
#include <internal/gen_code.h>
#include <internal/gen_parse.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
//macro define
#define MAIN_HEAD "#include \"tahr.h\"\n"
#define HEADER_HEAD "#pragma once\n#include<stdio.h>\n#include<stdlib.h>\n#include \"util.h\"\n#include\"grow.h\"\n#include\"stack.h\"\n#include\"ruledef.h\"\n#include\"ag_utils.h\"\n"
#define OUT_MAIN "tahr.c"
#define OUT_MAIN_H "tahr.h"
#define OUT_GROW "grow.c"
#define OUT_GROW_H "grow.h"
#define OUT_PARSE "parser/parse.y"
#define OUT_PARSE_H "parser/parse.l"
#define OUT_RULEDEF_H "ruledef.h"
#define OUT_BITMAP_H "bitmap.h"
#define OUT_ARCH_H "arch.h"
#define OUT_STACK "./stack.c"
#define OUT_STACK_H "stack.h"
#define OUT_AG_UTILS "ag_utils.c"
#define OUT_AG_UTILS_H "ag_utils.h"
#define OUT_AG_PARSE "ag_parser.c"
#define OUT_AG_PARSE_H "ag_parser.h"
#define OUT_UTIL "util.c"
#define OUT_UTIL_H "util.h"
#define OUT_LIMIT_H "limit.h"
#define IN_DIR "./src/internal/output_files"
#define OUT_REDUCE_H "reduce.h"
#define OUT_REDUCE "reduce.c"

void build_path(char *dest, char *file, char *dir){
        if (dir[strlen(dir) - 1] == '/'){
                sprintf(dest,"%s%s",dir,file);
        }
        else{
                sprintf(dest,"%s/%s",dir,file);
        }
}

int main(int argc, char **argv){
        if (argc<2){
                printf("Usage: %s <path to ag file>\n", argv[0]);
        }
        char *the_arg = argv[1];
        int i = 1;
        char out_dir[PATH_MAX];
        while(argv[i] != NULL){
                if (argv[i+1] == NULL){
                        memcpy(out_dir,argv[i],strlen(argv[i]));
                        break;
                }
                set_path(argv[i]);
                if (parse() != 0){
                        printf("Parse failed for file %s\n",argv[i]);
                        exit(EXIT_FAILURE);
                }
                i++;
        }
        //out file name and init
        char out_main[PATH_MAX];
        char out_main_h[PATH_MAX];
        char out_grow[PATH_MAX];
        char out_grow_h[PATH_MAX];
        char out_parse[PATH_MAX];
        char out_parse_h[PATH_MAX];
        char out_stack[PATH_MAX];
        char out_stack_h[PATH_MAX];
        char out_ruledef_h[PATH_MAX];
        char out_ag_utils[PATH_MAX];
        char out_ag_parser[PATH_MAX];
        char out_ag_parser_h[PATH_MAX];
        char out_ag_utils_h[PATH_MAX];
        char out_reduce[PATH_MAX];
        char out_reduce_h[PATH_MAX];
        char out_bitmap_h[PATH_MAX];
        char out_arch_h[PATH_MAX];
        char out_util[PATH_MAX];
        char out_util_h[PATH_MAX];
        char in_stack[PATH_MAX];
        char in_bitmap_h[PATH_MAX];
        char in_arch_h[PATH_MAX];
        char in_stack_h[PATH_MAX];
        char in_grow[PATH_MAX];
        char in_ruledef_h[PATH_MAX];
        char in_grow_h[PATH_MAX];
        char in_ag_utils[PATH_MAX];
        char in_ag_utils_h[PATH_MAX];
        char in_ag_parser[PATH_MAX];
        char in_ag_parser_h[PATH_MAX];
        char in_util[PATH_MAX];
        char in_util_h[PATH_MAX];
        char in_limit_h[PATH_MAX];
        char out_limit_h[PATH_MAX];
        build_path(out_reduce,OUT_REDUCE,out_dir);
        build_path(out_reduce_h,OUT_REDUCE_H,out_dir);
        build_path(out_bitmap_h,OUT_BITMAP_H,out_dir);
        build_path(out_arch_h,OUT_ARCH_H,out_dir);
        build_path(out_limit_h,OUT_LIMIT_H,out_dir);
        build_path(in_limit_h,OUT_LIMIT_H,IN_DIR);
        build_path(out_main, OUT_MAIN, out_dir);
        build_path(out_main_h, OUT_MAIN_H, out_dir);
        build_path(out_grow, OUT_GROW, out_dir);
        build_path(out_grow_h, OUT_GROW_H, out_dir);
        build_path(out_parse, OUT_PARSE, out_dir);
        build_path(out_parse_h, OUT_PARSE_H, out_dir);
        build_path(out_stack, OUT_STACK, out_dir);
        build_path(out_stack_h, OUT_STACK_H, out_dir);
        build_path(out_ruledef_h, OUT_RULEDEF_H, out_dir);
        build_path(out_ag_utils, OUT_AG_UTILS, out_dir);
        build_path(out_ag_utils_h, OUT_AG_UTILS_H, out_dir);
        build_path(out_ag_parser, OUT_AG_PARSE, out_dir);
        build_path(out_ag_parser_h, OUT_AG_PARSE_H, out_dir);
        build_path(out_util, OUT_UTIL, out_dir);
        build_path(out_util_h, OUT_UTIL_H, out_dir);
        FILE *out = fopen(out_main_h,"w");
        fwrite(HEADER_HEAD, 1, strlen(HEADER_HEAD),out);
        char *new_header = generate_header_include(headers);
        if(new_header != NULL){
                fwrite(new_header,1,strlen(new_header),out);
                free(new_header);
        }
        char trans_def[] = "\nextern void trans(void *sym);\n";
        fwrite(trans_def, 1, strlen(trans_def), out);
       // char *limit = write_limit(idx_syms, idx_rules);
       // fwrite(limit,1,strlen(limit),out);
       // fwrite("\n",1,1,out);
       // free(limit);
        for (int i = 0; i < idx_atts; i++){
                char *res = generate_attribute(g_attributes+i);
                fwrite(res, 1, strlen(res), out);
                fwrite("\n", 1, 1, out);
                free(res);
        }
        for (int i = 0; i < idx_syms; i++){
                char *res = generate_symbol(g_symbols+i);
                fwrite(res, 1, strlen(res), out);
                fwrite("\n", 1, 1, out);
                free(res);
        }
        fwrite("extern void library_init();\n",1,strlen("extern void library_init();\n"),out);
        fclose(out);
        out = fopen(out_reduce_h,"w");
        char *b = gen_red_header();
        fwrite(b,1,strlen(b),out);
        free(b);
        fclose(out);
        out = fopen(out_reduce,"w");
        b = gen_red_function();
        fwrite(b,1,strlen(b),out);
        free(b);
        fclose(out);
        out = fopen(out_main,"w");
        fwrite(MAIN_HEAD, 1, strlen(MAIN_HEAD), out);
        b = gen_sym_to_id_array();
        fwrite(b,1,strlen(b),out);
        fwrite("\n",1,1,out);
        free(b);
        for (int i = 0; i < idx_atts; i++){
                char *res = generate_attribute_values(g_attributes+i);
                if(res == NULL)
                        continue;
                fwrite(res, 1, strlen(res), out);
                fwrite("\n", 1, 1, out);
                free(res);
        }
        for (int i = 0; i < idx_rules; i++){
                char *res = generate_rule(g_rules+i,i);
                fwrite(res, 1, strlen(res), out);
                fwrite("\n", 1, 1, out);
                free(res);
        }
        for (int i = 0; i < idx_trans_rules; i++){
                char *res = generate_rule(g_trans_rules+i,i);
                fwrite(res, 1, strlen(res), out);
                fwrite("\n", 1, 1, out);
                free(res);
        }
        char *res = generate_rule_functions_array(g_rules, idx_rules);
        fwrite(res, 1, strlen(res), out);
        fwrite("\n", 1, 1, out);
        free(res);
        res = generate_terminal_rule_array(g_rules, idx_rules);
        fwrite(res, 1, strlen(res), out);
        fwrite("\n", 1, 1, out);
        free(res);
        res = generate_sym_to_rules_array(g_rules, idx_rules);
        fwrite(res, 1, strlen(res), out);
        fwrite("\n", 1, 1, out);
        free(res);
        res = generate_sym_to_rules_trans_array(g_trans_rules, idx_trans_rules);
        fwrite(res, 1, strlen(res), out);
        fwrite("\n", 1, 1, out);
        free(res);
        res = gen_lib_init();
        fwrite(res, 1, strlen(res), out);
        fwrite("\n", 1, 1, out);
        free(res);
        fclose(out);
        out = fopen(out_parse,"w");
        FILE *in = fopen("./src/internal/resources/template.y","r"); 
        int size = 0;
        fseek(in,0, SEEK_END);
        size = ftell(in);
        fseek(in, 0,SEEK_SET);
        char *buf = malloc(size+1);
        int id = fread(buf,1,size,in);
        buf[id] = '\0';
        fwrite(buf,1,strlen(buf),out);
        fwrite("\n",1,1,out);
        fclose(in);
        free(buf);
        buf = gen_constant_sym();
        fwrite(buf,1,strlen(buf),out);
        fwrite("\n",1,1,out);
        free(buf);
        buf = gen_unkown_token_bison(g_symbols, idx_syms);
        fwrite(buf,1,strlen(buf),out);
        fwrite("\n",1,1,out);
        free(buf);
        for (int i = 0; i < idx_atts; i++){
                char *res = gen_token_bison(g_attributes+i);
                fwrite(res, 1, strlen(res), out);
                fwrite("\n", 1, 1, out);
                free(res);
        }
        for (int i = 0; i < idx_syms; i++){
                symbol_t *sym = g_symbols+i;
                if (sym->sym_str!=NULL){
                        char *res = gen_token_sym_bison(g_symbols+i);
                        fwrite(res, 1, strlen(res), out);
                        fwrite("\n", 1, 1, out);
                        free(res);
                }
        }
        fwrite("%%",1,2,out);
        fwrite("\n",1,1,out);
        buf = gen_first_part_bison();
        fwrite(buf,1,strlen(buf),out);
        fwrite("\n",1,1,out);
        free(buf);
        for (int i = 0; i < idx_syms; i++){
                symbol_t *sym = g_symbols+i;
                if (sym->sym_str!=NULL){
                        char *res = gen_sym_rule_bison(g_symbols+i);
                        fwrite(res, 1, strlen(res), out);
                        fwrite("\n", 1, 1, out);
                        free(res);
                }
        }
        fwrite("%%",1,2,out);
        fclose(out);
        out = fopen(out_parse_h,"w");
        in = fopen("./src/internal/resources/template.l","r");
        size = 0;
        fseek(in, 0,SEEK_END);
        size = ftell(in);
        fseek(in, 0,SEEK_SET);
        buf = malloc(size+1);
        fread(buf,1,size+1,in);
        fwrite(buf,1,strlen(buf),out);
        fwrite("\n",1,1,out);
        // write optional %x def
        buf = gen_beg_def(); 
        fwrite(buf,1,strlen(buf),out);
        fwrite("\n",1,1,out);
        fwrite("%%",1,2,out);
        fwrite("\n",1,1,out);
        fclose(in);
        free(buf);
        unsigned char flags[3] = {0x0,0x0,0x0};
        buf = gen_constant_sym_flex();
        fwrite(buf, 1, strlen(buf), out);
        fwrite("\n",1,1,out);
        free(buf);
        for (int i = 0; i < idx_atts; i++){
                for (int j = 0; j < g_attributes[i].n_values; j++){
                        char *res = gen_rule_flex(g_attributes[i].values[j],g_attributes[i].name,g_attributes[i].beg_def);
                        fwrite(res, 1, strlen(res), out);
                        fwrite("\n", 1, 1, out);
                        free(res);
                }
        }
        buf = gen_rule_flex_unkown(g_symbols,idx_syms);
        fwrite(buf, 1, strlen(buf), out);
        fwrite("\n",1,1,out);
        free(buf);
        for(int i=0; i < idx_atts; i++){
                if (g_attributes[i].n_values == 0){
                        if (g_attributes[i].regex!= NULL){
                                char *res = gen_rule_flex_regex(g_attributes+i);
                                fwrite(res, 1, strlen(res), out);
                                fwrite("\n", 1, 1, out);
                                free(res);
                                continue;
                        }
                        if (!flags[0] && strcmp(g_attributes[i].type, "int") == 0){
                                flags[0] = 0x1;
                                char *res = gen_rule_flex_int(g_attributes[i].name,g_attributes[i].beg_def);
                                fwrite(res, 1, strlen(res), out);
                                fwrite("\n", 1, 1, out);
                                free(res);
                        }
                        if (!flags[1] && strcmp(g_attributes[i].type, "float") == 0){
                                flags[1] = 0x1;
                                char *res = gen_rule_flex_float(g_attributes[i].name,g_attributes[i].beg_def);
                                fwrite(res, 1, strlen(res), out);
                                fwrite("\n", 1, 1, out);
                                free(res);
                        }
                }
        }
       // for (int i = 0; i < idx_syms; i++){
       //         symbol_t *sym = g_symbols+i;
       //         if (sym->sym_str!=NULL){
       //                 char *res = gen_rule_flex(to_lower_case(g_symbols[i].name),g_symbols[i].name);
       //                 printf("%s\n",res);
       //                 fwrite(res, 1, strlen(res), out);
       //                 fwrite("\n", 1, 1, out);
       //         }
       // }
        fwrite("%%",1,2,out);
        fclose(out);
        //Copy files
        out = fopen(out_stack,"w");
        build_path(in_stack,OUT_STACK,IN_DIR);
        in = fopen(in_stack,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_limit_h,"w");
        res = write_limit(idx_syms,idx_rules);
        fwrite(res,1,strlen(res), out);
        fclose(out);
        free(res);
        out = fopen(out_stack_h,"w");
        build_path(in_stack_h, OUT_STACK_H, IN_DIR);
        in = fopen(in_stack_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_grow,"w");
        build_path(in_grow, OUT_GROW, IN_DIR);
        in = fopen(in_grow,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_ruledef_h,"w");
        build_path(in_ruledef_h, OUT_RULEDEF_H, IN_DIR);
        in = fopen(in_ruledef_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_grow_h,"w");
        build_path(in_grow_h, OUT_GROW_H, IN_DIR);
        in = fopen(in_grow_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_ag_utils,"w");
        build_path(in_ag_utils, OUT_AG_UTILS, IN_DIR);
        in = fopen(in_ag_utils,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_ag_utils_h,"w");
        build_path(in_ag_utils_h, OUT_AG_UTILS_H, IN_DIR);
        in = fopen(in_ag_utils_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_ag_parser,"w");
        build_path(in_ag_parser, OUT_AG_PARSE, IN_DIR);
        in = fopen(in_ag_parser,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        free(res);
        char *the_buf = gen_get_size_sym(g_symbols, idx_syms);
        fwrite(the_buf,1,strlen(the_buf),out);
        fclose(out);
        free(the_buf);
        out = fopen(out_ag_parser_h,"w");
        build_path(in_ag_parser_h, OUT_AG_PARSE_H, IN_DIR);
        in = fopen(in_ag_parser_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_bitmap_h,"w");
        build_path(in_bitmap_h, OUT_BITMAP_H, IN_DIR);
        in = fopen(in_bitmap_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_arch_h,"w");
        build_path(in_arch_h, OUT_ARCH_H, IN_DIR);
        in = fopen(in_arch_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_util,"w");
        build_path(in_util, OUT_UTIL, IN_DIR);
        in = fopen(in_util,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);
        out = fopen(out_util_h,"w");
        build_path(in_util_h, OUT_UTIL_H, IN_DIR);
        in = fopen(in_util_h,"r");
        if(in == NULL){
                exit(EXIT_FAILURE);
        }
        size = 0;
        fseek(in, 0, SEEK_END);
        size = ftell(in);
        fseek(in, 0, SEEK_SET);
        res = malloc(size+1);
        fread(res, size+1, 1, in);
        fwrite(res,1,size, out);
        fclose(in);
        fclose(out);
        free(res);

}

