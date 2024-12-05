/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozil.b <ozil.b@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:07:20 by bozil             #+#    #+#             */
/*   Updated: 2024/12/05 11:08:37 by ozil.b           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Extract the line from the static buffer */
static char	*extract_line(char **res)
{
	char	*line;
	char	*newline;
	char	*temp;

	if (!*res)
		return (NULL);
	newline = ft_strchr(*res, '\n');
	if (!newline)
	{
		line = *res;
		*res = NULL;
		return (line);
	}
	line = ft_substr(*res, 0, newline - *res + 1);
	temp = ft_substr(*res, newline - *res + 1, 
		ft_strlen(newline + 1));
	free(*res);
	*res = temp;
	return (line);
}
/* Read from file descriptor and update buffer */
static char	*read_buffer(int fd, char *res)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (1)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes <= 0)
		{
			free(buffer);
			return (res);
		}
		buffer[read_bytes] = '\0';
		res = ft_strjoin(res, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*res = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	res = read_buffer(fd, res);
	if (!res)
		return (NULL);
	line = extract_line(&res);
	return (line);
}
