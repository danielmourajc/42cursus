/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:18:09 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/03/20 00:06:23 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

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
