#include <stdio.h>
#include <string.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *ptr;
    unsigned int    i;

    if (!s || !f)
        return (0);
    i = strlen(s);
    ptr = (char *)malloc((i + 1) * sizeof(char));
    if (!ptr)
        return (0);
    i = -1;
    while (s[++i])
      ptr[i] = f(i, s[i]);
    ptr[i] = '\0';
    return (ptr);
}


char f(unsigned int ind, char *c)
{
    c += 32;
    return (c);
}

int main()
{
    char a[] = "LISBOA";
    char *rt;
    
    printf("Antes: %s\n", a);
    rt = ft_strmapi(a, f);
    printf("Depois: %s", rt);
}