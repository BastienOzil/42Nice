/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:07:24 by bozil             #+#    #+#             */
/*   Updated: 2024/12/03 16:07:02 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s);
		i++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (ft_strdup(""));
	joined_str = malloc(ft_strlen(s1) + (ft_strlen(s2)) + 1);
	if (!joined_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		joined_str[i + j] = s2[j];
		j++;
	}
	joined_str[i + j] = '\0';
	return (joined_str);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;


	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i] != '\0')
		i++;
	return (i);
}
