/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:23:57 by marvin            #+#    #+#             */
/*   Updated: 2024/11/21 11:31:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int     ft_printf(const char *format, ...);
void    ft_putstr(char *str);
static void short_cut(char specifier, va_list args);
static void ft_putchar(char c);
static void ft_putnbr(int n);
static void ft_puthex(unsigned int n, int uppercase);

#endif
