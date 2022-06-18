/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:16:42 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/04/23 22:23:32 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr_hex(unsigned long int nbr, char Xx, int *len)
{
	unsigned long int	base_len;
	char				*base;

	base_len = 16;
	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < base_len)
		ft_putchar(base[nbr % base_len], len);
	else
	{
		ft_putaddr_hex(nbr / base_len, Xx, len);
		ft_putaddr_hex(nbr % base_len, Xx, len);
	}
}

void	ft_putptr(void *p, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)p;
	ft_putstr("0x", len);
	ft_putaddr_hex(ptr, 'x', len);
}
