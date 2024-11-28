/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:07:20 by bozil             #+#    #+#             */
/*   Updated: 2024/11/28 19:15:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_line(int fd, char *res)
{
	ssize_t	bytes;
    char	buffer[BUFFER_SIZE + 1];
	char	*tmp;

	bytes = 1;
	while (bytes > 0 && !ft_strchr(res, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
			return (NULL);
		buffer[bytes] = '\0';
		tmp = ft_strjoin(res, buffer);
		if (!tmp)
			return (NULL);
		res = tmp;
	}
	return (res);
}

static char	*extract_line(char **res)
{
	char	*line;
	char	*tmp;
	char	*newline;

	newline = ft_strchr(*res, '\n');
	if (newline)
	{
		*newline = '\0';
		tmp = ft_strdup(newline + 1);
		if (!tmp)
			return (NULL);
		*res = tmp;
	}
	line = ft_strdup(*res);
	if (!line)
		return (NULL);
	return (line);
}

char		*get_next_line(int fd)
{
	static char	*res;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	res = read_line(fd, res);
	if (!res)
		return (NULL);
	line = extract_line(&res);
	return (line);
}