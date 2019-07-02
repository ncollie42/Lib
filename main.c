#include "header.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char src[] = "13x";
   
    char dst[4];
    char dst2[4];

    nc_memset(dst, '\0', sizeof(dst));
    strncpy(dst, src, 5);
    printf("1:\t%s\n", dst);

    nc_memset(dst2, '\0', sizeof(dst2));
    nc_strncpy(dst2, src, 2);
    printf("2:\t%s\n", dst2);
}