/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 08:54:05 by bozil             #+#    #+#             */
/*   Updated: 2024/09/28 08:55:17 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush.h"

void	clear_result(char *result, int size)
{
	int	h;

	h = 0;
	while (h < size)
	{
		result[h] = '\0';
		h++;
	}
}

void	process_loop(int *i, int *j, char **result, char *string)
{
	char	*result_true;

	*result = ft_string(i, j, *result, string);
	result_true = parse(*result);
	clear_result(*result, 100);
	write(1, result_true, ft_strlen(result_true));
	write(1, " ", 1);
	free(result_true);
}

void	process_numbers(char *numbers)
{
	int		i;
	int		j;
	char	*result;
	char	*string;

	i = 0;
	j = 0;
	result = (char *)malloc(100 * sizeof(char));
	string = (char *)malloc(500 * sizeof(char));
	split(string, numbers);
	while (j == 0)
	{
		process_loop(&i, &j, &result, string);
	}
	write(1, "\n", 1);
	free(result);
	free(string);
}

char	*ft_string(int *i, int *j, char *result, char *str)
{
	int	l;

	l = 0;
	while (str[*i] != ' ' && str[*i] != '\0')
	{
		result[l] = str[*i];
		(*i)++;
		l++;
	}
	result[l] = '\0';
	(*i)++;
	if (str[*i] == '\0')
		*j = 1;
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	process_numbers(argv[1]);
	return (0);
}
