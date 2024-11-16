/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:23:10 by bozil             #+#    #+#             */
/*   Updated: 2024/09/16 10:45:06 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to use "if" and "else"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
/*
int	main(void)
{
	ft_is_negative(-4);
	ft_is_negative(7);
	return (0);
}*/
