#include "stack.h"

stack_entry_t the_stack[STACK_SIZE];


uint64_t the_sp;
void *pop(){
        if (the_sp==0){
                return NULL;
        }

        if (the_stack[the_sp].valid == 0x0){
                return NULL;
        }
        void *the_data = the_stack[the_sp].data;
        the_stack[the_sp].valid=0x0;
        the_sp--;
        return the_data;
}

int push(void* the_element){
        if (the_sp == STACK_SIZE-1){
                return 0;
        }
        the_sp++;
        the_stack[the_sp].data=the_element;
        the_stack[the_sp].valid=0x1;
        return 1;
}

void initialize_stack(){
        int i;
        for (i=0; i < STACK_SIZE; i++){
                the_stack[i].valid=0x0;
        }
        the_sp=0;
}

bool is_empty(){
        return (the_sp == 0);
}
