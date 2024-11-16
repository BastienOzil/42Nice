/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:59:26 by bozil             #+#    #+#             */
/*   Updated: 2024/09/17 14:11:54 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how "strcpy" work
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Salut";
	char dest[]= "Hello World !";
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
    return 0;
}*/
