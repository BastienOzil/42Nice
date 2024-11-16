/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 09:12:07 by bozil             #+#    #+#             */
/*   Updated: 2024/09/29 09:12:09 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Learn about how to make a min and a max from a chain
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	str = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	
	int i = 0;
	int min = 5;
	int max = 10;
	int *str = ft_range(min, max);

	while(i < (max - min))
       	{
            printf("%d ", str[i]);
            i++;
        }
	free(str);
	return 0;
}*/
