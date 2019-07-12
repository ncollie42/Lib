#ifndef NC_LIB_BUFFER_H 
#define NC_LIB_BUFFER_H
#include "nc_lib.h"

typedef struct dynamic_buffer {
    char *buffer;
    char *current_pos;       //make void?
    int limit;
    int size;
} dynamic_buffer;

dynamic_buffer  *create_dynamic_buffer();
dynamic_buffer  *add_to_buffer(dynamic_buffer *buff, char *str, int size);
void            debug_print_buffer(dynamic_buffer *buff);
void            delete_dynamic_buffer(dynamic_buffer *buff);
int             print_buffer(dynamic_buffer *buff, int fd);

#endif