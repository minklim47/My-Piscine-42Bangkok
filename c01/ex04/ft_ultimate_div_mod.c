/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:22:16 by climpras          #+#    #+#             */
/*   Updated: 2022/07/18 09:22:19 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	
	div = *a / *b;
	mod = *a % *b;
	
	*a = div;
	*b = mod;
	printf("div = %d\n", *a);
	printf("mod = %d\n", *b);
}

int	main(void)
{
	int a = 15;
	int b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d\n", a);
	printf("mod = %d\n", b);
}
