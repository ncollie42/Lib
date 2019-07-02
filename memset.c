#include "header.h"

void *nc_memset(void *b, int c, size_t len)
{
    char *tmp;
    int n;
    
    tmp = (char *)b;
    n = 0;
    while(n < len)
        tmp[n++] = c;
    return b;
}