#include <stdio.h>
#include <string.h>

int	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int	d;
	int	s;

	if (!dstsize || dstsize <= strlen(dst))
		return (strlen(src) + dstsize);
	d = strlen(dst);
	s = 0;
	while (src[s] && d + 1 < dstsize)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (strlen(dst) + strlen(&src[s]));
}

int main (void)
{
    char src[10] = "Moura";
    char dest [25] = "Daniel ";

    printf("%i \n", ft_strlcat(dest, src, 8));
    printf("%s \n", dest);
}
