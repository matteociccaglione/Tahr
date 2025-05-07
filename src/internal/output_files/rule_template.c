#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void end_phase(void **out, int size){
        for (int i = 0; i < size; i++){
                push(out[i]);
        }
}


