/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:00 by bozil             #+#    #+#             */
/*   Updated: 2024/09/22 15:56:03 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//re how to write a value of [] 
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Salut";
	printf("%i\n", ft_strlen(str));
	return (0);
}*/
