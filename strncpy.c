#include "nc_lib.h"

char *nc_strncpy(char *dst, const char *src, size_t len)
{
    int n;

    n = 0;
    while(src[n] && len)
    {
        dst[n] = src[n];
        n++;
        len--;
    }
    if (len)
    {
        while (len--)
        {
            dst[n] = '\0';
            n++;
        }
    }
    return dst;
}