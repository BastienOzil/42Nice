/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:32:06 by bozil             #+#    #+#             */
/*   Updated: 2024/09/20 12:25:09 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how strncat work
#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
int     main(void)
{
        char dest[] = "bonjour";
        char src[] = "salut";
        printf("%s\n", ft_strncat(src, dest, 3));
        return (0);
}*/
