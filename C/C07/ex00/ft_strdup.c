/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:37:14 by bozil             #+#    #+#             */
/*   Updated: 2024/09/26 17:37:17 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char src[] = "BMW AUDI";
    char *dup = ft_strdup(src);

    if (dup != 0)
    {
        printf("Source: %s\n", src);
        printf("Duplicated: %s\n", dup);
	free(dup);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/
