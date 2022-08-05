/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plakorn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:06:24 by plakorn           #+#    #+#             */
/*   Updated: 2022/07/25 18:48:17 by plakorn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	result;
	int	remainder;
	int	*div;
	int	*mod;

	x = 50;
	y = 30;
	div = &result;
	mod = &remainder;
	ft_div_mod(x, y, div, mod); 
	printf("result = %d\n", result);
	printf("remainder = %d\n", remainder);
}
*/
