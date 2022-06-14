#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}

int main()
{
  char a[] = "minha nossa";
  char b = 'o';
  int n = 8;
  
  printf(ft_memchr(a, b, n));
}