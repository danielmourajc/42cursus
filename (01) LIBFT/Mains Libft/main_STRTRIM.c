#include <stdio.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t    i;

    sub = (char *)malloc(len + 1);
    if (!s || !sub)
        return (0);
    i = 0;
    while (i < len && start < strlen(s) && s[start])
        sub[i++] = s[start++];
    sub[i] = '\0';
    return (sub);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    i;

    if (!s1 || !set)
        return (NULL);
    while (*s1 && strchr(set, *s1))
        s1++;
    i = strlen(s1);
    while (i && strchr(set, s1[i]))
        i--;
    return (ft_substr(s1, 0, i + 1));
}

int main()
{
  char a[] = "amava";
  char b[] = "a";
  
  printf("%s", ft_strtrim(a, b));
}