#include "nc_lib.h"
#define MAX_SIZE 11

char    *nc_itoa_base(unsigned long number, int base)
{
    char    *str;
    char    *reference;
    int     n;

    n = -1;
    str = nc_malloc(sizeof(char) * MAX_SIZE + 1);
    reference = "0123456789abcdef";
    if (!str)
        return str;
    while (number)
    {
        str[++n] = reference[number % base];
        number /= base;
    }
    nc_reverse(str);
    return str;
}
















