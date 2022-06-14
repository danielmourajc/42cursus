#include <stdio.h>

static int    ft_is_space(char c)
{
    if (c == '\t' || c == '\n' || c == '\v'
        || c == '\f' || c == '\r' || c == ' ')
        return (1);
    return (0);
}

int    ft_atoi(const char *str)
{
    int        i;
    int        sign;
    long    result;

    i = 0;
    sign = 1;
    result = 0;
    while (ft_is_space(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
        if (str[i++] == '-')
            sign *= -1;
    while (str[i] >= '0' && str[i] <= '9')
        result = (result * 10) + (str[i++] - '0');
    return (result * sign);
}

int main()
{
  char *a = " -258";
  printf("%i", ft_atoi(a));  
}