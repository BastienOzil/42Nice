/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:53:22 by bozil             #+#    #+#             */
/*   Updated: 2024/09/17 18:30:36 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to make lowercase to uppercase
#include <string.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			(str[i] = str[i] -32);
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
	ft_strupcase(str1);
	ft_strupcase(str2);
	printf("Test 1 (str1): %s\n", str1);
	printf("Test 2 (str2): %s\n", str2);
	return 0;
}*/
