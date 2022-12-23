/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:53:51 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/23 00:10:49 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_flags(va_list args, const char format, int *len)
{
	if (format == '%')
		ft_print_c(format, len);
	if (format == 'c')
		ft_print_c((char)va_arg(args, int), len);
	if (format == 's')
		ft_print_s(va_arg(args, char *), len);
	if (format == 'p')
		ft_print_p(va_arg(args, void *), len);
	if (format == 'd' || format == 'i')
		ft_print_d_i(va_arg(args, int), len);
	if (format == 'u' || format == 'x' || format == 'X')
		ft_print_u_x(va_arg(args, unsigned int), format, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check_flags(args, *format, &len);
		}
		else
			ft_print_c(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
