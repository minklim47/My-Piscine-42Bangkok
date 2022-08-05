/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plakorn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:23:38 by plakorn           #+#    #+#             */
/*   Updated: 2022/07/25 18:49:40 by plakorn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;
	int	rem;

	res = *a / *b;
	rem = *a % *b;
	*a = res;
	*b = rem;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*m;
	int	*n;

	m = &a;
	n = &b;
	*m = 50;
	*n = 30;
	ft_ultimate_div_mod(m, n);
	printf("result = %d\n", a);
	printf("remainder = %d\n", b);
}
*/
