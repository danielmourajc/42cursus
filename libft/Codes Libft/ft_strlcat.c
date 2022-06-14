/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 01:18:24 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/02/27 01:18:25 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	if (!dstsize || dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	d = ft_strlen(dst);
	s = 0;
	while (src[s] && d + 1 < dstsize)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[s]));
}
