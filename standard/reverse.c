#include "nc_lib.h"

char *nc_reverse(char *str)
{
    int left;
    int right;
    char tmp1;
    char tmp2;

    left = 0;
    right = nc_strlen(str) - 1;
    if (right % 2)
    {
        //even
        while(left < right)
        {
            tmp1 = str[left];
            tmp2 = str[right];
            str[left++] = tmp2;
            str[right--] = tmp1;
        }
    }
    else
    {
        //odd
        while(left != right)
        {
            tmp1 = str[left];
            tmp2 = str[right];
            str[left++] = tmp2;
            str[right--] = tmp1;
        }
    }
    return (str);
}