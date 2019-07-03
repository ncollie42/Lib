#define MASK 0b00100000
int nc_tolower(int c)
{
    char tmp = (char)c;

    if (tmp >= 'A' && tmp <= 'Z')
        tmp |= MASK;
    return tmp;
}