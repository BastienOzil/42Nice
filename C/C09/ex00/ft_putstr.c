/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:43:41 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 17:28:52 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to write a chain[]
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main()
{
	ft_putstr("Hello, world!\n");
	return 0;
}
*/
