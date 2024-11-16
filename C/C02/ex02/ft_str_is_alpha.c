/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:12:50 by bozil             #+#    #+#             */
/*   Updated: 2024/09/18 15:05:46 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to print alphabet
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char str1[] = "Salut";
	char str2[] = "1234";
	char str3[] = "";
	int test1, test2, test3;
	test1 = ft_str_is_alpha(str1);
	test2 = ft_str_is_alpha(str2);
	test3 = ft_str_is_alpha(str3);
	printf("Test 1 (str1): %d\n", test1);
	printf("Test 2 (str2): %d\n", test2);
	printf("Test 3 (str1): %d\n", test3);
	return 0;
}*/
