#include "header.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%s\n", nc_isdigit('9') ? "yes" : "no");
    printf("%s\n", nc_isdigit('a') ? "yes" : "no");
    printf("%s\n", nc_isdigit('1') ? "yes" : "no");
    printf("%s\n", nc_isdigit('4') ? "yes" : "no");
    printf("%s\n", nc_isdigit('t') ? "yes" : "no");
    printf("%s\n", nc_isdigit('0') ? "yes" : "no");
}