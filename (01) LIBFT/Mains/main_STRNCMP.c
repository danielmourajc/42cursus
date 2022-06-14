#include <stdio.h>

int    ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t    i;

    i = 0;
    if (n < 1)
        return (0);
    while (s1[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main()
{
    printf("%d", ft_strncmp("abce", "abcd", 4));
    printf("\nS1 > S2: positivo\nS1 = S2: zero\nS2 > S1: negativo");
}