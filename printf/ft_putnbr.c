/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:50:23 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/04/23 22:20:37 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int di, int *len)
{
	unsigned int	nb;

	nb = di;
	if (di < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0', len);
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}
