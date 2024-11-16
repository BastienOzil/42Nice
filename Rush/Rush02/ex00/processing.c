/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgharach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 10:58:09 by mgharach          #+#    #+#             */
/*   Updated: 2024/09/29 15:42:49 by mgharach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "./rush.h"

void	swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	rev_tab(char *str)
{
	int	i;
	int	e;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (e <= i / 2)
	{
		swap (&str[i - e - 1], &str[e]);
		e++;
	}
}

int	power(int n, int i)
{
	int	e;
	int	a;

	e = 1;
	a = 1;
	while (a <= i)
	{
		e = e * n;
		a = a + 1;
	}
	return (e);
}
