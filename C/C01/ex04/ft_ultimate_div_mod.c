/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:53:18 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 17:26:28 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to swap value
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("Division : a = %d\nReste : b = %d\n", a, b);
	return 0;
}*/
