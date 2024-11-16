/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:48:44 by bozil             #+#    #+#             */
/*   Updated: 2024/09/19 13:51:29 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to write a uppercase on every word
#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] -32;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "salut, ca vas?";
	char str2[] = "y0, b|en 0ubien!";
	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	printf("Test 1 (str1): %s\n", str1);
	printf("Test 2 (str2): %s\n", str2);
	return 0;
}*/
