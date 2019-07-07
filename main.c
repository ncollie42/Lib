#include "nc_header.h"
#include <stdio.h>
#include <stdlib.h>
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
}