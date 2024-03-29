#include "nc_lib.h"

void    move(char *dst, char *src)
{
    int n;

    n = -1;
    while (src[++n])
        dst[n] = src[n];
}

char    *nc_strjoin(char *s1, char *s2)
{
    char    *new;
    int     size1;
    int     size2;
    int     total;

    if (!s1 || !s2)
        return NULL;
    size1 = nc_strlen(s1);
    size2 = nc_strlen(s2);
    total = size1 + size2;
    new = malloc(sizeof(char) * (total + 1));
    move(new, s1);
    move(&new[size1],s2);
    new[total] = '\0';
    return new;
}