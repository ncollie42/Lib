#include "nc_lib_buffer.h"

int main(void)
{
    char *b1 = "a";
    char *b2 = "bb";
    char *b3 = "ccc";
    dynamic_buffer *ptr = create_dynamic_buffer();
    
    debug_print_buffer(ptr);
    add_to_buffer(ptr, b1, nc_strlen(b1));
    debug_print_buffer(ptr);
    add_to_buffer(ptr, b1, nc_strlen(b1));
    debug_print_buffer(ptr);
    add_to_buffer(ptr, b1, nc_strlen(b1));
    debug_print_buffer(ptr);
    add_to_buffer(ptr, b2, nc_strlen(b2));
    debug_print_buffer(ptr);
    add_to_buffer(ptr, b3, nc_strlen(b3));
    debug_print_buffer(ptr);
    add_to_buffer(ptr, b3, nc_strlen(b3));
    debug_print_buffer(ptr);
    delete_dynamic_buffer(ptr);
}