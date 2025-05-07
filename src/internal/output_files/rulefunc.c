#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push_symbols(void **symbols, int size){
        for(int i=0; i < size; i++){
                push(symbols[i]);
        }
}
