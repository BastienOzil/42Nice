/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:01:39 by bozil             #+#    #+#             */
/*   Updated: 2024/11/05 15:21:49 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
