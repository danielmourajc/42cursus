#include <stdio.h>
#include <stdlib.h>

static size_t    ft_intlen(long n)
{
    size_t    len;

    len = 0;
    if (n == 0)
        return (1);
    else if (n < 0)
    {
        n = -n;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    long    nb;
    int        i;

    nb = n;
    i = ft_intlen(nb);
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
    str[i--] = '\0';
    if (nb == 0)
        str[0] = '0';
    else if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while (nb > 0)
    {
        str[i] = (nb % 10) + '0';
        nb /= 10;
        i--;
    }
    return (str);
}


int main()
{
    int a = -121212154;
    
    printf("%s", ft_itoa(a));
}