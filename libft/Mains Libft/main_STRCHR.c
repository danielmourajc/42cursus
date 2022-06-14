#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

int main()
{
  char a[15] = "minha nossa";
  char *b;
  
  b = ft_strchr(a, 'n');
  
  printf("Primeira Ocorrencia: %c\n", *b);
  printf("Letra Seguinte: %c\n", *(b + 1));
}