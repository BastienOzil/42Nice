/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:29:48 by bozil             #+#    #+#             */
/*   Updated: 2024/09/18 10:29:10 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to write lowercase
#include <string.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str1[] = "salut";
	char str2[] = "saLut";
	int test1, test2;
	test1 = ft_str_is_lowercase(str1);
	test2 = ft_str_is_lowercase(str2);
	printf("Test 1 (str1): %d\n", test1);
	printf("Test 2 (str2): %d\n", test2);
	return 0;
}*/
