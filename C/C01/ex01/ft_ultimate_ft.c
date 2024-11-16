/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:30:25 by bozil             #+#    #+#             */
/*   Updated: 2024/09/15 13:43:43 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//how to print pointer
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int	main(void)
{
	int n;
	int *ptr1 = &n;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	ft_ultimate_ft(&ptr8);
	printf("Valeur: %d\n", n);
	return 0;
}*/
