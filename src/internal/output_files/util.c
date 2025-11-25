#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *to_str(void *data, char *type){
        char *res;
        if(strcmp(type,"char*") == 0){
                return (char*)data;
        }
        if(strcmp(type,"int") == 0){
                int val = *(int *)data;
                int comp_size = val;
                if (comp_size < 0)
                        comp_size *=-1;
                res = malloc(64);
                sprintf(res,"%d",val);
        }
        if(strcmp(type,"float") == 0){
                float val = *(float *)data;
                int integer = ceil(val); 
                int integer_len = integer/10+11;
                res = malloc(integer_len + 6);
                sprintf(res,"%.4f",val);
                
        }
        if(strcmp(type,"double") == 0){
                double val = *(double *)data;
                int integer = ceil(val); 
                int integer_len = integer/10+11;
                res = malloc(integer_len + 10);
                sprintf(res,"%.8f",val);
                
        }

        if(strcmp(type,"long") == 0){
                long val = *(long *)data;
                long comp_size = val;
                if (comp_size < 0)
                        comp_size*=-1;
                res = malloc(64);
                sprintf(res,"0x%lx",val);
        }
        return res;
}

int len_ph(char *str){
        int base_len = 3;
        int len = 0;
        int i = 0;
        unsigned char begin_bracket = 0x0;
        while (i < strlen(str)){
                if (str[i]=='{')
                        begin_bracket = 0x1;
                if (str[i] == '$' && begin_bracket==0x1){
                        i++;
                        int j = i;
                        while (j < strlen(str) && str[j]!='}'){
                                j++;
                        }
                        if (j<strlen(str))
                                len += base_len + j-i;
                        i = j;
                        begin_bracket = 0x0;
                }
                i++;     
        }
        return len;
}



int replace_one_to(char *dest, char *source, char *old, char *new,int *p1){
        int i = *p1, old_pos=0, base=0;
        while (i < strlen(source)){
                if (source[i] == old[old_pos]){
                        if (old_pos == 0)
                                base = i;
                        if (old_pos == strlen(old)-1){
                                int k = 0;
                                while (k < base){
                                        dest[k] = source[k];
                                        k++;
                                }
                                strcat(dest, new);
                                while (k+strlen(old)<=strlen(source)){
                                        dest[k+strlen(new)] = source[k+strlen(old)];
                                        k++;
                                }
                                *p1 = i;
                                return 0;
                        }
                        old_pos++;
                }
                else{
                        old_pos = 0;
                        base = 0;
                }
                i++;
        }
        *p1 = i;
        return -1;
}

int replace_one_to_no_substring(char *dest, char *source, char *old, char *new,int *p1){
        int i = *p1, old_pos=0, base=0;
        int space_b = 0;
        while (i < strlen(source)){
                if (source[i] == old[old_pos] && space_b){
                        if (old_pos == 0)
                                base = i;
                        if (old_pos == strlen(old)-1){
                                int k = 0;
                                while (k < base){
                                        dest[k] = source[k];
                                        k++;
                                }
                                strcat(dest, new);
                                while (k+strlen(old)<=strlen(source)){
                                        dest[k+strlen(new)] = source[k+strlen(old)];
                                        k++;
                                }
                                *p1 = i;
                                return 0;
                        }
                        old_pos++;
                }
                else{
                        old_pos = 0;
                        base = 0;
                        space_b = 0;
                        if (source[i] == ' '){
                                space_b = 1;
                        }
                }
                i++;
        }
        *p1 = i;
        return -1;
}
char *make_a_copy(char *orig){
        char *the_copy = malloc(strlen(orig)+1);
        strcpy(the_copy,orig);
        return the_copy;
}

void replace_to(char *dest, char *source, char *old, char *new){
        int res = 0;
        int is_a_copy=0;
        int p1 = 0, p2 = 0, p3 = 0;
        if(dest==source){
                source = make_a_copy(source);
                is_a_copy=1;
        }
        memset(dest,0,strlen(source));
        while(res >= 0){
                res = replace_one_to(dest,source,old,new,&p1);
                if(res==-1){
                        strcpy(dest,source);
                }
                if(is_a_copy){
                        free(source);
                        is_a_copy=0;
                }
                source=make_a_copy(dest);
                if (res>=0)
                        memset(dest,0,strlen(source));
                is_a_copy=1;
        }
        if(is_a_copy){
                free(source);
                is_a_copy=0;
        }
}
void replace_to_no_substring(char *dest, char *source, char *old, char *new){
        int res = 0;
        int is_a_copy=0;
        int p1 = 0, p2 = 0, p3 = 0;
        if(dest==source){
                source = make_a_copy(source);
                is_a_copy=1;
        }
        memset(dest,0,strlen(source));
        while(res >= 0){
                res = replace_one_to_no_substring(dest,source,old,new,&p1);
                if(res==-1){
                        strcpy(dest,source);
                }
                if(is_a_copy){
                        free(source);
                        is_a_copy=0;
                }
                source=make_a_copy(dest);
                if (res>=0)
                        memset(dest,0,strlen(source));
                is_a_copy=1;
        }
        if(is_a_copy){
                free(source);
                is_a_copy=0;
        }
}

void replace_to_size_check(char *dest, char *source, char *old, char *new, int size){
        int res = 0;
        int is_a_copy=0;
        int p1 = 0, p2 = 0, p3 = 0;
        if(dest==source){
                source = make_a_copy(source);
                is_a_copy=1;
        }
        memset(dest,0,strlen(source));
        while(res >= 0){
                res = replace_one_to(dest,source,old,new,&p1);
                if(res==-1){
                        strcpy(dest,source);
                }
                if(is_a_copy){
                        free(source);
                        is_a_copy=0;
                }
                source=make_a_copy(dest);
                if (res>=0)
                        memset(dest,0,strlen(source));
                is_a_copy=1;
        }
        if(is_a_copy){
                free(source);
                is_a_copy=0;
        }
        if(strlen(dest)>=size){
                printf("Out of memory\n");
                exit(EXIT_FAILURE);
        }
}
void replace_to_mem_safe(char **dest, char *source, char *old, char *new,int *old_size){
        if (strlen(source) + strlen(new) - strlen(old) >= *old_size){
                if(*dest == source){
                        *dest = realloc(*dest, *old_size*10);
                        source = *dest;
                }
                else
                        *dest = realloc(*dest, *old_size*10);
                *old_size = *old_size*10;
        }
        replace_to_size_check(*dest,source,old,new,*old_size);
        
}
