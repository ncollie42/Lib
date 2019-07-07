#include "nc_lib.h"

void *nc_memset(void *b, int c, size_t len)
{
    char *tmp;
    size_t n;
    
    tmp = (char *)b;
    n = 0;
    while(n < len)
        tmp[n++] = c;
    return b;
}