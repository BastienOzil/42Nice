/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:45:48 by bozil             #+#    #+#             */
/*   Updated: 2024/09/16 11:29:29 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//serious things started
#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_boucle(char a, int b, int c)
{
	if (a < '7')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_boucle(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
