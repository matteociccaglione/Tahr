#include "grow.h"
#include "ag_utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack.h"
#include "ruledef.h"
#include <time.h>

queue_t *head = NULL;

void* trans_sym(void *sym){
        int id = get_sym_id(sym);
        if (trans_rules[id][0] == NULL)
            return sym;
        trans_rules[id][0](sym);
        return pop();
}

void enqueue(void *data){
        queue_t *node = malloc(sizeof(queue_t));
        node->data = data;
        node->prev = NULL;
        if (head == NULL){
                head = node; 
        }else{
                queue_t *tmp = head;
                while(tmp->prev!=NULL){
                        tmp = tmp->prev;
                }
                tmp->prev = node;
        }
}

char *dequeue(){
        if (head == NULL)
                return NULL;
        queue_t *tmp = head;
        head = tmp->prev;
        char *data = tmp->data;
        free(tmp);
        return data;
}

void clear_queue(){
        while(!(is_queue_empty())){
                free(dequeue());
        }
}

char *dump(){
        if(is_queue_empty())
                return NULL;
        char *first = dequeue();
        char *out = malloc(3*strlen(first));
        strcpy(out,first);
        strcat(out,"\n");
        int size = 3*strlen(first);
        int occ = strlen(first);
        free(first);
        while(!(is_queue_empty())){
               first = dequeue(); 
               occ += strlen(first) +1 ;
               if(occ >= size){
                        out = realloc(out, 3*size);
                        size = size*3;
               }
               strcat(out,first);
               strcat(out,"\n");
               free(first);
        }
        return out;
}

int extract_rule(unsigned int sym_id){
        int *rules = sym_to_rules[sym_id];
        int i = 0,c = 0;
        int ids[MAX_RULE];
        while (rules[i]>=0){
                if (bitmap_check(rule_bitmap,rules[i])){
                        i++;
                }else{
                        ids[c] = rules[i];
                        i++;
                        c++;
                }
        }
        if(c==0)
                return -1;
        //srand(time(NULL)); 
        return ids[(rand()%c)];
}

unsigned int extract_terminal_rule(unsigned int sym_id){
        int *rules = sym_to_rules[sym_id];
        if (rules == NULL){

                printf("ERROR: No Terminal Rules for symbol %s\nTry to increase MAX_GROW_LEVEL\n",sym_to_id[sym_id]);
                exit(EXIT_FAILURE);
        }
        int i = 0, j = 0;
        int terminals[MAX_RULE];
        while(i < MAX_RULE){
                if (terminal_rules[rules[i]]==1){
                        terminals[j] = rules[i];
                        j++;
                }
                i++;
        }
        if(j == 0){
                printf("ERROR: No Terminal Rules for symbol %s\nTry to increase MAX_GROW_LEVEL\n",sym_to_id[sym_id]);
                exit(EXIT_FAILURE);
        }
        //srand(time(NULL));
        return terminals[rand()%(j)];
}

void exec_rule(unsigned int the_rule, void *lhs){
        rule_functions[the_rule](lhs);
}

char *to_terminal(void *sym){
        int sym_id = get_sym_id(sym);
        printf("Sym is: %d\n",sym_id);
        int the_rule = extract_terminal_rule(sym_id);
        exec_rule(the_rule,sym);
        return dump();
}

int grow(){
        clear_queue();
        if (is_empty()){
                return 0;
        }
        unsigned int grow_level = 1;
        while(!is_empty()){
                void *el = pop();
                int sym_id = get_sym_id(el);
                int id;
                memcpy(&id,el,sizeof(int));
                if(is_terminal(id))
                        continue;
//                memcpy(&sym_id,el,sizeof(unsigned int));
                int the_rule;
                if (grow_level < MAX_GROW_LEVEL)
                        the_rule = extract_rule(sym_id);
                else
                        the_rule = extract_terminal_rule(sym_id);
                if(the_rule < 0)
                        continue;
                printf("Running rule: %d\n",the_rule);
                exec_rule(the_rule, el);
                grow_level++;
        }
        return 1;
}

int grow_without_terminals(){
        clear_queue();
        if (is_empty()){
                return 0;
        }
        unsigned int grow_level = 1;
        while(!is_empty()){
                void *el = pop();
                int sym_id = get_sym_id(el);
                int id;
                memcpy(&id,el,sizeof(int));
                if(is_terminal(id))
                        continue;
//                memcpy(&sym_id,el,sizeof(unsigned int));
                int the_rule;
                if (grow_level < MAX_GROW_LEVEL)
                        the_rule = extract_rule(sym_id);
                else
                        the_rule = extract_terminal_rule(sym_id);
                if(the_rule < 0)
                        continue;
                if(terminal_rules[the_rule] == 1){
                        //This is a terminal rule, just skip and enqueue the symbol
                        enqueue(el);
                        continue;
                }
                exec_rule(the_rule, el);
                grow_level++;
        }
        return 1;
}
