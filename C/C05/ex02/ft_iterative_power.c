/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:20:39 by bozil             #+#    #+#             */
/*   Updated: 2024/09/25 16:20:41 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(-1, -1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(4, 3));
	printf("%d\n", ft_iterative_power(7, 2));
	return (0);
}*/
