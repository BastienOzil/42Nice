/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:34:05 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/29 18:00:13 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./rush.h"

void	help_split(int i, char *dest, char *src)
{
	int	j;
	int	l;
	int	h;

	j = 0;
	h = 0;
	while (src[j] != '\0' && i > 0)
	{
		dest[h] = src[j];
		h++;
		l = 0;
		while (l < i - 1)
		{
			dest[h] = '0';
			h++;
			l++;
		}
		dest[h] = ' ';
		h++;
		i--;
		j++;
	}
	dest[h] = '\0';
}

char	*split(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	help_split(i, dest, src);
	return (dest);
}
