/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:23:58 by bozil             #+#    #+#             */
/*   Updated: 2024/09/18 10:29:35 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to write uppercase
#include <string.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char str1[] = "SALUT";
	char str2[] = "SAlUT";
	int test1, test2;
	test1 = ft_str_is_uppercase(str1);
	test2 = ft_str_is_uppercase(str2);
	printf("Test 1 (str1): %d\n", test1);
	printf("Test 2 (str2): %d\n", test2);
	return 0;
}*/
