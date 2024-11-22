/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:23:57 by marvin            #+#    #+#             */
/*   Updated: 2024/11/22 14:42:30 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int n);
void		ft_puthex(unsigned long n, int uppercase);
void		ft_putnbr_unsigned(unsigned int n);

#endif
