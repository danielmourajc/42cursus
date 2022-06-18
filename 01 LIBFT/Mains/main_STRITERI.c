#include <stdio.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = -1;
		while (s[++i])
			f(i, &s[i]);
	}
}


void f(unsigned int ind, char *c)
{
    *c -= 32;
}

int main()
{
    char a[] = "roma";
    
    printf("Antes: %s\n", a);
    ft_striteri(a, f);
    printf("Depois: %s", a);
}