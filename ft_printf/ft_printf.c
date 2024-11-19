/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:08:19 by bozil             #+#    #+#             */
/*   Updated: 2024/11/19 14:50:38 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    
    int i;
    int count

    count = 0;
    i = 0;
    while(count[i] != \0)
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            i++;
            if (format[i] == 'c')
                count += ft_putchar(va_arg(args, int));
            else if (format[i] == 's')
                count += ft_putstr(va_arg(args, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                count += ft_putnbr(va_arg(args, int));
            else if (format[i] == 'u')
                count += ft_putnbr_unsigned(va_arg(args, unsigned int));
            else if (format[i] == 'x' || format[i] == 'X')
                ft_putnbr_hex(va_arg(args, unsigned int), format[i]);
            else if (format[i] == '%')
                count += ft_putchar('%');
        }
        else
        {
            count += ft_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return (count);
}
