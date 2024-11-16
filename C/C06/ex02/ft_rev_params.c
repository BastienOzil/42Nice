/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:34:45 by bozil             #+#    #+#             */
/*   Updated: 2024/09/26 11:34:47 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to revers what's write on the terminal
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc -1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
