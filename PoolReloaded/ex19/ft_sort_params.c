/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:44:06 by bozil             #+#    #+#             */
/*   Updated: 2024/11/05 15:21:24 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char *av[])
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
			ft_putchar(&argv[i][j]);
			j++;
		}
		i++;
		ft_putchar("\n");
	}
	return (0);
}
