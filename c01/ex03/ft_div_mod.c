/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:20:17 by climpras          #+#    #+#             */
/*   Updated: 2022/07/19 10:04:59 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 15;
	int b = 6;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
	
}
*/
