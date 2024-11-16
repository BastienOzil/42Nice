/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:51:56 by bozil             #+#    #+#             */
/*   Updated: 2024/09/26 08:51:58 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	p;

	p = 0;
	i = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			p++;
		}
		i++;
	}
	if (p == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_find_next_prime(44));
	return (0);
}*/
