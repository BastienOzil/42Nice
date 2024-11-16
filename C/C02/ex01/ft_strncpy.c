/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:40:21 by bozil             #+#    #+#             */
/*   Updated: 2024/09/18 17:45:15 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how "strncpy" work
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[]= "Salut";
	char dest[]= "Hello World !";
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	ft_strncpy(dest, src, 5);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
    return 0;
}*/
