/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <dmoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:44:54 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/04/01 17:29:43 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
