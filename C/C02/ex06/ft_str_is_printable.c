/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:34:05 by bozil             #+#    #+#             */
/*   Updated: 2024/09/18 15:07:52 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to write anything printable in "ascii" table
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char str2[] = "12345";
	int test1, test2;
	test1 = ft_str_is_printable(str1);
	test2 = ft_str_is_printable(str2);
	printf("Test 1 (str1): %d\n", test1);
	printf("Test 2 (str2): %d\n", test2);
	return 0;
}*/
