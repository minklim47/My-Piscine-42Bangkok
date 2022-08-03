/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:11:36 by climpras          #+#    #+#             */
/*   Updated: 2022/07/27 12:47:07 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0)
	{
		while (nb >= 1)
		{
			ans = ans * nb;
			nb--;
		}
		return (ans);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb = 4;
	printf("%d\n", ft_iterative_factorial(nb));
}
*/
