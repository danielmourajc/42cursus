#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int    i;
	char            *s2;

	s2 = malloc(sizeof(char) * (strlen(s1) + 1));
	if (!s2)
		return (0);
		i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main(void)
{
	char *a = "minha nossa";
	char *b;

	b = ft_strdup(a);

	printf("%s", b);
}