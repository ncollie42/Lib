#include "nc_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include "nc_lib_buffer.h"
int main(void)
{
   printf("%c\n", nc_toupper('a'));
   printf("%c\n", nc_toupper('B'));
   printf("%c\n", nc_toupper('c'));
   printf("%c\n", nc_toupper('D'));
   printf("%c\n", nc_toupper('E'));
   printf("%c\n", nc_toupper('f'));
   printf("%c\n", nc_tolower('a'));
   printf("%c\n", nc_tolower('B'));
   printf("%c\n", nc_tolower('c'));
   printf("%c\n", nc_tolower('D'));
   printf("%c\n", nc_tolower('E'));
   printf("%c\n", nc_tolower('f'));

   nc_malloc(15);

    char *b1 = "a";
    char *b2 = "bb";
    char *b3 = "ccc";
    dynamic_buffer *ptr = create_dynamic_buffer();
    
}