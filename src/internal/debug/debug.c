#include<stdio.h>
#include "debug.h"

void printd(char* the_content){
        #ifdef DEBUG
                printf(the_content);
        #endif
}
