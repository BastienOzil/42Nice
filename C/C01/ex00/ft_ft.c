/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:42:04 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 12:24:31 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to use pointer
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	i = 0;
	ft_ft(&i);
	printf("i = %d\n", i);
	return 0;
}*/
