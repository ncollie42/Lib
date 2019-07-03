#define MASK 0b11011111
int nc_toupper(int c)
{
    char tmp = (char)c;

    if (tmp >= 'a' && tmp <= 'z')
        tmp &= MASK;
    return tmp;
}