/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:47:07 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 17:25:05 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// how to swap two pointer
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int x = 33;
	int y = 11;
	printf("Avant : x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Aprèd : x = %d, y = %d\n", x, y);
	return 0;

}*/
