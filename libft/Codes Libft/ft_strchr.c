/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:18:28 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/04/01 18:04:20 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char)c == '\0')
	{
		while (*s)
			s++;
		return ((char *) s);
	}
	while (*s)
	{
		if ((unsigned char)c == *s)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
