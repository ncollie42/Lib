#include "header.h"

size_t  nc_strlen(const char *s)
{
    size_t n;

    n = 0;
    while(s[n])
        n++;
    return n;
}