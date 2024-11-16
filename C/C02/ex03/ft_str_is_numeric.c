/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:16:12 by bozil             #+#    #+#             */
/*   Updated: 2024/09/18 10:28:52 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to print a number
#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "0123456789";
	char str2[] = "abcdefghij";
	int test1, test2;
	test1 = ft_str_is_numeric(str1);
	test2 = ft_str_is_numeric(str2);
	printf("Test 1 (str1): %d\n", test1);
	printf("Test 2 (str2): %d\n", test2);
	return 0;
}*/
