/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:43:03 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 18:38:09 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to print value in a []
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char *str = "Hello world!";
	int	i; 
	i = ft_strlen(str);
	printf("Valeur de chaine : %d\n", i);
	return 0;
}
*/
