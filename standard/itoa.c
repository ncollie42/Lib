#include <stdio.h>
#include "nc_lib.h"

enum sign{positive, negative};

static int  get_size(int n)
{
    int size;

    size = 0;
    if (n == 0)
        return 1;
    while (n)
    {
        n /= 10;
        size++;
    }
    return size;
}
char *nc_itoa(int n)
{
    int sign;
    char *tmp;
    int size;

    size = get_size(n);
    sign = (n < 0) ? negative : positive;

    if (sign == negative)
    {
        size++;
        tmp = nc_malloc(sizeof(char) * size + 1);
        tmp[0] = '-';
        n *= -1;
    }
    else
        tmp = nc_malloc(sizeof(char) * size + 1);
    while(--size >= 0)
    {
        if (sign == negative && size == 0)
            return tmp;
        tmp[size] =  (n % 10) + '0';
        n /= 10;
    }
    return tmp;
}


//ITS BROKEN