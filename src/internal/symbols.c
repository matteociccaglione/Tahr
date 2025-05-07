/*
 *      This file contains struct definition to handle all type of symbols (hyper-symbol, meta-variable, proto-variable)
 *
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <internal/symbols.h>
char * get_literal(literal_t lt){
        if (lt > gst.len)
                return NULL;
        return gst.names[lt];
}
