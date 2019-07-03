#include <stdio.h>
char *nc_strchr(const char *s, int c)
{
    char *tmp;
    tmp = (char *)s;

    while(*tmp)
    {
        if (*tmp == (char)c)
            return tmp;
        tmp++;
    }
    if (*tmp == (char)c)
        return tmp;
    return NULL;
}