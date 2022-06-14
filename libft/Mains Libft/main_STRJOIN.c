#include <stdio.h>
#include <string.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    int        i;
    int        j;

    if (!s1 || !s2)
        return (NULL);
    new_str = (char *)malloc(strlen(s1) + strlen(s2) + 1);
    if (!new_str)
        return (NULL);
    i = -1;
    while (s1[++i])
        new_str[i] = s1[i];
    j = 0;
    while (s2[j])
        new_str[i++] = s2[j++];
    new_str[i] = '\0';
    return (new_str);
}

int main()
{
    char *a = "mais";
    char *b = "menos";
    
    printf("%s", ft_strjoin(a,b));
}