#include "header.h"
#include <stdlib.h>
#include <stdio.h>

char *nc_strdup(const char *s1)
{
    int size;
    char *dup;

    size = nc_strlen(s1);
    if (!(dup = malloc(sizeof(char) * size)))
    {
        perror("malloc failed");
        return dup;
    }
    nc_strncpy(dup,s1, size);
    return dup;
}