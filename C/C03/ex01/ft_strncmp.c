/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:51:17 by bozil             #+#    #+#             */
/*   Updated: 2024/09/20 09:20:20 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how strncmp work
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "salut";
	char s2[] = "BONJOUR";
	printf("%i\n", ft_strncmp(s1, s2, ));
	return (0);
}*/
