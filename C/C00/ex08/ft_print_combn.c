/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:49:38 by bozil             #+#    #+#             */
/*   Updated: 2024/09/16 16:59:14 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// serious things pro max with []
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_rec(int comb[], int n, int pos, int start)
{
	int	i;

	if (pos == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(comb[i] + '0');
			i++;
		}
		if (comb[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	if (start >= 10)
	{
		return ;
	}
	comb[pos] = start;
	ft_print_comb_rec(comb, n, pos + 1, start + 1);
	ft_print_comb_rec(comb, n, pos, start + 1);
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n > 0 && n < 10)
	{
		ft_print_comb_rec(comb, n, 0, 0);
	}
}
/*
int	main(void)
{
	ft_print_combn(5);
	return (0);
}*/
