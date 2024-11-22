/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:08:19 by bozil             #+#    #+#             */
/*   Updated: 2024/11/22 15:32:20 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	short_cut(char specifier, va_list args)
{
	if (specifier == 'c')
		ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
	{
		ft_putstr("0x");
		ft_puthex(va_arg(args, unsigned long), 0);
	}
	else if (specifier == 'd' || specifier == 'i')
		ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int));
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
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			short_cut(format[i + 1], args);
			count++;
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
