/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:42:34 by bozil             #+#    #+#             */
/*   Updated: 2024/09/17 18:45:47 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to make uppercase to lowercase
#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			(str[i] = str[i] +32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "SaLuT";
	char str2[] = "BoNjOuR";
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	printf("Test 1 (str1): %s\n", str1);
	printf("Test 2 (str2): %s\n", str2);
	return 0;
}*/
