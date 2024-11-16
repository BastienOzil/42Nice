/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:25:24 by bozil             #+#    #+#             */
/*   Updated: 2024/09/19 16:50:23 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how strcmp work
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "Salut";
	char s2[] = "Salut";
	printf("%i\n", ft_strcmp(s1, s2));
	return (0);
}*/
