/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:05:47 by bozil             #+#    #+#             */
/*   Updated: 2024/09/22 16:05:49 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//re how to write what is inside the [] 
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Salut";
	ft_putstr(str);
	return (0);
}*/
