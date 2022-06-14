#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t    i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	return (dst);
}

int main()
{
  char a[15];
  char b[] = "minha nossa";
  int n = 15;
  
  printf("%s", ft_memmove(a, b, n));
}
