#include "nc_lib_buffer.h"
#include <stdio.h>

int main(void)
{
    /* Adding strings into a buffer */

    // char *b1 = "a";
    // char *b2 = "bb";
    // char *b3 = "ccc";
    // dynamic_buffer *ptr = create_dynamic_buffer();
    
    // debug_print_buffer(ptr);
    // add_to_buffer(ptr, b1, nc_strlen(b1));
    // debug_print_buffer(ptr);
    // add_to_buffer(ptr, b1, nc_strlen(b1));
    // debug_print_buffer(ptr);
    // add_to_buffer(ptr, b1, nc_strlen(b1));
    // debug_print_buffer(ptr);
    // add_to_buffer(ptr, b2, nc_strlen(b2));
    // debug_print_buffer(ptr);
    // add_to_buffer(ptr, b3, nc_strlen(b3));
    // debug_print_buffer(ptr);
    // add_to_buffer(ptr, b3, nc_strlen(b3));
    // debug_print_buffer(ptr);
    // delete_dynamic_buffer(ptr);

    /*  Using this to dynamicaly hold pointers */

    dynamic_buffer *ptr = create_dynamic_buffer();
    char *test = malloc(5);
    test[0] = '1';
    test[1] = '2';
    test[2] = '3';
    test[3] = '4';
    test[4] = '\0';
    char *test2 = malloc(sizeof(char) * 5);
    test2[0] = '1';
    test2[1] = '1';
    test2[2] = '1';
    test2[3] = '1';
    test2[4] = '\0';
    // add_to_buffer(ptr, &test, sizeof(char *));
    append(ptr, &test);
    debug_print_buffer(ptr);
    add_to_buffer(ptr, &test2, sizeof(char *));
    debug_print_buffer(ptr);

    char *tmp = ((char **)ptr->buffer)[0];
    printf("%s\n", tmp);
    tmp = ((char **)ptr->buffer)[1];
    printf("%s\n", tmp);
}