/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_pipex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:50:07 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/10 15:19:30 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtr;

	if (count + size < count || count + size < size)
		return (0);
	rtr = malloc(count * size);
	if (!rtr)
		return (0);
	ft_bzero(rtr, count * size);
	return (rtr);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_strdup2(char const *s, char c)
{
	int		i;
	char	*dst;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	c_words;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	c_words = ft_count_words(s, c);
	strings = malloc(sizeof(char *) * (c_words + 1));
	if (!strings)
		return (0);
	i = 0;
	j = 0;
	while (j < c_words)
	{
		while (s[i] && s[i] == c)
			i++;
		strings[j++] = ft_strdup2(s + i, c);
		while (s[i] && s[i] != c)
			i++;
	}
	strings[j] = 0;
	return (strings);
}
