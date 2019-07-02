#include "header.h"
#include <stdio.h>

int main(void)
{
    char str[] = "nico";
    int size = nc_strlen(str);

    printf("str: %s size: %d\n", str, size);
    nc_memset(str, '!', size);
    printf("str: %s size: %d\n", str, size);
}