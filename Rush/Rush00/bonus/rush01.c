/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:43:42 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 10:31:16 by bozil            ###   ########.fr       */
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
		return ;
	print_line('/', '*', '\\', x);
	i = 1;
	while (i < y - 1)
	{
		print_line('*', ' ', '*', x);
		i++;
	}
	if (y > 1)
		print_line('\\', '*', '/', x);
}
