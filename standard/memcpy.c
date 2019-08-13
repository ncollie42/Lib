#include "nc_lib.h"

void    *nc_memcpy(void *restrict dst, const void *restrict src, int n)
{
    int index;

    index = -1;
    while (++index < n)
        ((char*)dst)[index] = ((char*)src)[index];
    return (dst);
}