#include <stdint.h>
#include <error/error.h>

#define KRED  "\x1B[31m"
#define KWHT  "\x1B[37m"

#define put_color(c) do{\
        printf(c);\
}while(0);
uint64_t get_last_error(){
        return the_error;
}

void print_last_err(){
        switch(the_error){
                case STACK_EMPTY_ERROR:
                        put_color(KRED);
                        printf("<ERROR>: Attempted to pop on an empty stack\n");
                        put_color(KWHT);
                        break;
                case STACK_FULL_ERROR:
                        put_color(KRED);
                        printf("<ERROR>: Attempted to push on a full stack\n");
                        put_color(KWHT);
                        break;
                case STACK_CORRUPTED_ERROR:
                        put_color(KRED);
                        printf("<ERROR>: Stack corrupted\n");
                        put_color(KWHT);
                        break;
                default:
                        put_color(KRED);
                        printf("Unkown error (?)\n");
                        put_color(KWHT);
                        break;
        }
}


