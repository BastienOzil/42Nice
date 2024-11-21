/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:08:19 by bozil             #+#    #+#             */
/*   Updated: 2024/11/21 11:21:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	short_cut(char specifier, va_list args)
{
	if (specifier == 'c')
		ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		ft_putstr(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		ft_putnbr(va_arg(args, int));
	else if (specifier == 'x')
		ft_puthex(va_arg(args, unsigned int), 0);
	else if (specifier == 'X')
		ft_puthex(va_arg(args, unsigned int), 1);
	else if (specifier == '%')
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i = 0;
	int		count = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			short_cut(format[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
		}
		count++;
		i++;
	}
	va_end(args);
	return (count);
}