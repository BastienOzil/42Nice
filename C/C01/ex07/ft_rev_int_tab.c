/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:45:52 by bozil             #+#    #+#             */
/*   Updated: 2024/09/18 19:00:31 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to reverse a chain
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int i = 0;
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = sizeof(arr) / sizeof(arr[0]);

	ft_rev_int_tab(arr, size);
	while (i < size)
	{
	printf("%d ", arr[i]);
	i++;
	}
	return 0;
}*/
