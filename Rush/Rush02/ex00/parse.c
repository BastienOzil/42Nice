/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:56:18 by bozil             #+#    #+#             */
/*   Updated: 2024/09/29 10:56:59 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#include "./rush.h"

void	process_line(char *buffer, char *numbers, char *donnees, int *boul)
{
	int	a;

	buffer[100 - 1] = '\0';
	ft_strcpy(numbers, buffer);
	a = ft_strcmp(numbers, donnees);
	if (a == 0)
		*boul = 1;
}

void	read_and_search(int fd, char *numbers, char *donnees, char *retours)
{
	int		index;
	int		boul;
	char	c;
	char	*buffer;

	index = 0;
	boul = 0;
	buffer = (char *)malloc(100 * sizeof(char));
	while ((read(fd, &c, 1) > 0) && boul == 0)
	{
		if (c == '\n' || index >= 100 - 1)
		{
			buffer[index] = '\0';
			process_line(buffer, numbers, donnees, &boul);
			index = 0;
		}
		else
			buffer[index++] = c;
	}
	ft_strcpy2(retours, buffer);
	free(buffer);
}

char	*parse(char *donnees)
{
	char	*retours;
	char	*numbers;
	int		fd;

	fd = open("numbers.dict", O_RDONLY);
	retours = (char *) malloc(100 * sizeof(char));
	numbers = (char *) malloc(100 * sizeof(char));
	read_and_search(fd, numbers, donnees, retours);
	close(fd);
	free(numbers);
	return (retours);
}
