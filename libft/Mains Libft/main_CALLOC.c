#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(int count, int size)
{
    void    *res;

    res = malloc(size * count);
    if (!res)
        return (0);
    bzero(res, size * count);
    return (res);
}

int main(void)
{
  int a = 9;
  int b = 2;
  int *c;
  
  c = ft_calloc(a, b)
  
  printf("%i", c);
}