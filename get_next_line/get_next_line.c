/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:07:20 by bozil             #+#    #+#             */
/*   Updated: 2024/12/03 16:35:39 by bozil            ###   ########.fr       */
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
		free(res);
		res = tmp;
	}
    return (res); 
}

static char	*extract_line(char **res)
{
	char	*line;
	char	*after;

	after = ft_strchr(*res, '\n');
	if (after)
	{
		*after = '\0';
		*res = ft_strdup(after + 1);
		if (!res)
			return (NULL);
	}
	line = ft_strdup(*res);
	free(*res);
	*res = (NULL);
	return (line);
}
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*res;
	char		*line;

	res = (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	write(1,"b\n",2);
	
	res = read_line(fd, res);
	if (!res)
		return (NULL);
	line = extract_line(&res);
	return (line);
}
/*
 #include <fcntl.h>
int	main(void)
{
	int fd;
	char *line;
	write(1,"start\n",6);

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	int i = 0;
	while (++i < 10)
	{
		write(1,"a\n",2);
		line = get_next_line(fd);
		printf("line: '%s'", line);
		if (line == NULL || line[0]== '\0')
			break ;
		free(line);
	}
	close(fd);
	return (0);
} */