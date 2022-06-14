#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		if (strlen(src) < 1)
			return (i);
	}
	return (strlen(src));
}

int main()
{
    char s[] = "DanielMoura";
    char b[100];
    unsigned int d;
    
    d = ft_strlcpy(b, s, 2);
    printf("%s\n", b);
    printf("%d\n", d);
}