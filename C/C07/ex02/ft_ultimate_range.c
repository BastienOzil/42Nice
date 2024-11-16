/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:34:10 by bozil             #+#    #+#             */
/*   Updated: 2024/09/30 12:17:43 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min) + 1);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;
	int	size;

	max = 1000;
	min = 1;
	i = 0;
	tab = NULL;
	size = ft_ultimate_range(&tab, min, max);
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
	if (size != -1)
		free(tab);
	return (0);
}*/
