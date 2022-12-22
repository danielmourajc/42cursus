/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:52:30 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/22 21:14:01 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_print_s(char *s, int *len)
{
	if (!s)
		ft_print_s("(null)", len);
	while (s && *s)
	{
		ft_print_c(*s, len);
		s++;
	}
}

void	ft_print_p(void *p, int *len)
{
	char				*base;
	int					r;
	int					i;
	unsigned long int	ptr;
	unsigned long int	arr[20];

	if (!p)
	{
		ft_print_s("(nil)", len);
		return ;
	}
	i = -1;
	ptr = (unsigned long int)p;
	base = "0123456789abcdef";
	ft_print_s("0x", len);
	while (ptr)
	{
		r = ptr % 16;
		arr[++i] = r;
		ptr = ptr / 16;
	}
	while (i >= 0)
		ft_print_c(base[arr[i--] % 16], len);
}

void	ft_print_d_i(int nbr, int *len)
{
	unsigned int	n;

	n = nbr;
	if (nbr < 0)
	{
		ft_print_c('-', len);
		n *= -1;
	}
	if (n < 10)
		ft_print_c(n + '0', len);
	else
	{
		ft_print_d_i(n / 10, len);
		ft_print_d_i(n % 10, len);
	}
}

void	ft_print_u_x(unsigned int nbr, char format, int *len)
{
	unsigned int	base_len;
	char			*base;

	if (format == 'u')
	{
		base_len = 10;
		base = "0123456789";
	}
	else if (format == 'x' || format == 'X')
	{
		base_len = 16;
		if (format == 'x')
			base = "0123456789abcdef";
		else
			base = "0123456789ABCDEF";
	}
	if (nbr < base_len)
		ft_print_c(base[nbr % base_len], len);
	else
	{
		ft_print_u_x(nbr / base_len, format, len);
		ft_print_u_x(nbr % base_len, format, len);
	}
}
