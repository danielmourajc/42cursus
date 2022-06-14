#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static size_t    ft_count_words(char const *s, char c)
{
    size_t    count;
    size_t    i;

    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count);
}

static char    *ft_strdup(char const *s, char c)
{
    int        i;
    char    *dst;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    dst = malloc(sizeof(char) * (i + 1));
    if (!dst)
        return (0);
    i = 0;
    while (s[i] && s[i] != c)
    {
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char    **ft_split(char const *s, char c)
{
    char    **strings;
    size_t    c_words;
    size_t    i;
    size_t    j;

    if (!s)
        return (0);
    c_words = ft_count_words(s, c);
    strings = malloc(sizeof(char *) * (c_words + 1));
    if (!strings)
        return (0);
    i = 0;
    j = 0;
    while (j < c_words)
    {
        while (s[i] && s[i] == c)
            i++;
        strings[j++] = ft_strdup(s + i, c);
        while (s[i] && s[i] != c)
            i++;
    }
    strings[j] = 0;
    return (strings);
}


int main ()
{
    char var[] = "aba,abc,ab";
    char **v = ft_split(var,',');
    printf("%s\n%s\n%s\n%s",v[0],v[1],v[2],v[3]);
    return (0);
}