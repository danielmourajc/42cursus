#include <stdio.h>

void    *ft_memset(void *b, int c, int len)
{
    int    i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}

int main()
{
  char a[15];
  char b = 'm';
  int n = 15;
  
  printf("%s", ft_memset(a, b, n));
}