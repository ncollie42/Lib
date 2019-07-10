#include "nc_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include "nc_lib_buffer.h"
int main(void)
{
//    printf("%c\n", nc_toupper('a'));
//    printf("%c\n", nc_toupper('B'));
//    printf("%c\n", nc_toupper('c'));
//    printf("%c\n", nc_toupper('D'));
//    printf("%c\n", nc_toupper('E'));
//    printf("%c\n", nc_toupper('f'));
//    printf("%c\n", nc_tolower('a'));
//    printf("%c\n", nc_tolower('B'));
//    printf("%c\n", nc_tolower('c'));
//    printf("%c\n", nc_tolower('D'));
//    printf("%c\n", nc_tolower('E'));
//    printf("%c\n\n", nc_tolower('f'));

//    nc_malloc(15);

    char *b1 = "a";
    char *b2 = "bb";
    char *b3 = "ccc";
    char *b4 = "dddddddddddddd";
    char *b5 = "eeeeeeeeeeeeeeeeeeeeeeeeeeee";
    dynamic_buffer *ptr = create_dynamic_buffer();
    add_to_buffer(ptr,b5, strlen(b5));
    // add_to_buffer(ptr,b1, strlen(b1));
    // add_to_buffer(ptr,b1, strlen(b1));
    // add_to_buffer(ptr,b4, strlen(b4));
    // add_to_buffer(ptr,b3, strlen(b3));
    // add_to_buffer(ptr,b1, strlen(b1)); //A?
    // add_to_buffer(ptr,b2, strlen(b2));
    debug_print_buffer(ptr);    


    // printf("%s\n", nc_itoa(142));
    // printf("%s\n", nc_itoa(-42));
    // printf("%s\n", nc_itoa(2));
    // printf("%s\n", nc_itoa(0));
}