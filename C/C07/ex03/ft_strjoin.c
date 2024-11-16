/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:44:52 by bozil             #+#    #+#             */
/*   Updated: 2024/09/30 14:44:54 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
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

int	return_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

void	ft_join(char *res, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(res, strs[i]);
		res += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(res, sep);
			res += ft_strlen(sep);
		}
		i++;
	}
	*res = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;

	if (size == 0)
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	len = return_length(size, strs, sep);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_join(res, size, strs, sep);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"THIS", "IS", "SPARTA"};
	char	*separator = " Segmentation fault ";
	int		size;
	char	*result;

	size = sizeof(strs) / sizeof(strs[0]);
	result = ft_strjoin(size, strs, separator);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
