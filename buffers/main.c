#include "nc_lib_buffer.h"

int main(void)
{
    char *b1 = "a";
    char *b2 = "bb";
    char *b3 = "ccc";
    dynamic_buffer *ptr = create_dynamic_buffer();
    
    add_to_buffer(ptr, b1, strlen(b1));
}