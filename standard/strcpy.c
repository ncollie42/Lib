#include "nc_lib.h"

char *nc_strcpy(char *dst, const char *src)
{
    int n;
    
    n = 0;
    while(src[n])
    {
        dst[n] = src[n];
        n++;
    }
    dst[n] = '\0';
    return dst;
}