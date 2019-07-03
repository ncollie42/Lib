enum return_value{false,true};

int nc_isdigit(int c)
{
    unsigned char number;

    number = (unsigned char)c;
    number -= '0';
    if (number >= 0 && number <= 9)
        return true;
    return false;
}