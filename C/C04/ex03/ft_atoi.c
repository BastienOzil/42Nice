/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:12:18 by bozil             #+#    #+#             */
/*   Updated: 2024/09/23 08:12:20 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how atoi work
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*str = argv[1];
	printf("%d",ft_atoi(str));
	return(0);
}*/
