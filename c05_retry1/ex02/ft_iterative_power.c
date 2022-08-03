/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:30:41 by climpras          #+#    #+#             */
/*   Updated: 2022/07/27 12:53:49 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = nb;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (power > 1)
	{
		ans = ans * nb;
		power--;
	}
	return (ans);
}
/*
int	main(void)
{
	int	nb = 12;
	int	power = 1;
	printf("%d\n", ft_iterative_power(nb, power));
}
*/
