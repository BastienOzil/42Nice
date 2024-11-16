/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:34:06 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 15:52:16 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to use '/' and '%'
#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*d;
	int	*m;

	a = 25;
	b = 10;
	d = &div;
	m = &mod;
	ft_div_mod(a, b, d, m);
	printf("Division : a = %d\nReste : b = %d\n", *d, *m);
	return 0;
}*/
