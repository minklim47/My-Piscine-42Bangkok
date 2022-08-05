/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plakorn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:03:59 by plakorn           #+#    #+#             */
/*   Updated: 2022/07/25 18:46:26 by plakorn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	*ptrx;
	int	*ptry;

	x = 100;
	y = 300;
	ptrx = &x;
	ptry = &y;
	ft_swap(ptrx, ptry);
	printf("x = %d and y = %d\n", x, y);
	return (0);
}
*/
