#include <stdio.h>

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t    i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

int main()
{
  char a[] = "abcd";
  char b[] = "abce";
  int n = 5;
  
  printf("%i", ft_memcmp(a, b, n));
  printf("\nS1 > S2: positivo\nS1 = S2: zero\nS2 > S1: negativo");
}