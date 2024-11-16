/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzarroug <triptasoeur@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:52:02 by nzarroug          #+#    #+#             */
/*   Updated: 2024/09/17 12:35:33 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char first, char middle, char last, int width)
{
	int	i;

	if (width > 0)
		ft_putchar(first);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		ft_putchar('N');
		ft_putchar('O');
		ft_putchar('P');
		ft_putchar('E');
		return ;
	print_line('A', 'B', 'C', x);
	i = 1;
	while (i < y - 1)
	{
		print_line('B', ' ', 'B', x);
		i++;
	}
	if (y > 1)
		print_line('C', 'B', 'A', x);
}
