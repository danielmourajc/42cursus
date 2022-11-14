#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int	h;
	int	n;

	if (*needle == 0)
		return ((char *)haystack);
	h = 0;
	while (h < len && haystack[h])
	{
		n = 0;
		while (h + n < len && haystack[h + n] == needle[n])
		{
			n++;
			if (!needle[n])
				return ((char *)haystack + h);
		}
		h++;
	}
	return (0);
}

int main()
{
	char *hay = "minha minhoca";
	char *nee = "minho";
	
	unsigned int g = 2;

printf("%s\n", ft_strnstr(hay, nee, g));
}