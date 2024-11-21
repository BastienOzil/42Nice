/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:10:48 by marvin            #+#    #+#             */
/*   Updated: 2024/11/21 11:10:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_puthex(unsigned int n, int uppercase)
{
	char *base;

	base = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16, uppercase);
	ft_putchar(base[n % 16]);
}