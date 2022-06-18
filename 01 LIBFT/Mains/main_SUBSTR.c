#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new_str;
    size_t    i;

    new_str = (char *)malloc(len + 1);
    if (s[0] == 0 || start >= strlen(s))
        return (0);
    i = 0;
    while (i < len && s[start])
        new_str[i++] = s[start++];
    new_str[i] = '\0';
    return (new_str);
}

int main() 
{
  char *a = "minhanossa";
  unsigned int i = 4;
  size_t t = 4;
  
  printf("%s", ft_substr(a, i, t));
}