/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:03:38 by bozil             #+#    #+#             */
/*   Updated: 2024/09/20 12:46:00 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to get a part of a [] with an other [] 
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char to_find[] = "ill";
        char src[] = "i will never give you up!";
        printf("%s\n", ft_strstr(src, to_find));
        return (0);
}*/
