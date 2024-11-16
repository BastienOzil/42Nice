/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:14:21 by bozil             #+#    #+#             */
/*   Updated: 2024/09/16 12:07:31 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to write from '0' to '9'
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	a;

	a = '0';
	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
