#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    int    i;

    i = strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *) &s[i]);
        i--;
    }
    if (!(char)c)
        return ((char *) &s[i]);
    return (0);
}

int main()
{
  char a[15] = "minha nossa";
  char *b;
  
  b = ft_strrchr(a, 'n');
  
  printf("Ultima Ocorrencia: %c\n", *b);
  printf("Letra Seguinte: %c\n", *(b + 1));
}