/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:07:32 by bozil             #+#    #+#             */
/*   Updated: 2024/09/16 10:13:24 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to write from 'z' to 'a'
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	a;

	a = 'z';
	while (a >= 'a')
	{
		write (1, &a, 1);
		a--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
