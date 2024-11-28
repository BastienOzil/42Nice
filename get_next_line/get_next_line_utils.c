/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:07:24 by bozil             #+#    #+#             */
/*   Updated: 2024/11/28 19:14:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

char *ft_strjoin(char *s1, const char *s2)
{
    char *joined_str;
    size_t len1 = 0;
    size_t len2 = 0;
    size_t i = 0;

    if (!s1)
        s1 = ft_strdup("");
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;
    joined_str = malloc(len1 + len2 + 1);
    if (!joined_str)
        return (NULL);
    while (i < len1)
    {
        joined_str[i] = s1[i];
        i++;
    }
    size_t j = 0;
    while (j < len2)
    {
        joined_str[i + j] = s2[j];
        j++;
    }
    joined_str[len1 + len2] = '\0';
    free(s1);
    return (joined_str);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
    size_t  i;

	len = 0;
    i = 0;
	while (s[len])
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while (i < len)
		{
        dup[i] = s[i];
        i++;
        }
	dup[len] = '\0';
	return (dup);
}
