/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:24:57 by bozil             #+#    #+#             */
/*   Updated: 2024/09/27 10:24:59 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	min;
	int	temp;

	i = 1;
	while (i < argc)
	{
		min = i;
		j = i + 1;
		while (j < argc)
		{
			if (argv[j] < argv[min])
				min = j;
			j++;
		}
		temp = *argv[i];
		argv[i] = argv[min];
		*argv[min] = temp;
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
