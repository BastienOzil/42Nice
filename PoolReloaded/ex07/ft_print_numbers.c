/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:15:59 by bozil             #+#    #+#             */
/*   Updated: 2024/11/05 15:18:04 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n <= 57)
	{
		ft_putchar(n);
		n++;
	}
}