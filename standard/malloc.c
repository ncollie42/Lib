#include "nc_lib.h"

/*
    wrapper for malloc - zero's it out after malloc
*/

void *nc_malloc(size_t size)
{
    char *tmp = malloc(sizeof(char) * size);
    if (!tmp)
        nc_memset(tmp, '\0', size);
    return tmp;
}
