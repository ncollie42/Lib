int nc_strcmp(const char *s1, const char *s2)
{
    int n;

    n = 0;
    while (s1[n] && s2[n])
    {
        if (s1[n] == s2[n])
            n++;
        else
        {
            break;
        }
    }
    return (s1[n] - s2[n]);
}

/*
    < 0      -----  s1 char came before s2 char in ascii 
    0        -----  s1 and s2 are ==
    > 0      -----  s1 char came after s2 char in ascii  
 */