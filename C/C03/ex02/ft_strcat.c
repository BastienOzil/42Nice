/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:24:55 by bozil             #+#    #+#             */
/*   Updated: 2024/09/20 10:31:38 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how strcat work
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[20] = "Hey ";
	char src[] = "You ";

	printf("%s\n", ft_strcat(dest, src));
	return 0;
}*/
