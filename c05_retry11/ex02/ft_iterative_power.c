/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:30:41 by climpras          #+#    #+#             */
/*   Updated: 2022/07/31 13:00:38 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
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
int	main(void)
{
	printf("Expect: 2^0 = %d\n", (int) pow(2, 0));
	printf("Result: 2^0 = %d\n", ft_iterative_power(2, 0));
	printf("Expect: 2^5 = %d\n", (int) pow(2, 5));
	printf("Result: 2^5 = %d\n", ft_iterative_power(2, 5));
	printf("Expect: -2^10 = 1024\n");
	printf("Result: -2^10 = %d\n", ft_iterative_power(-2, 10));
	printf("Expect: -5^9 = -1953125\n");
	printf("Result: -5^9 = %d\n", ft_iterative_power(-5, 9));
	printf("Expect: 10^-1 = 0 [expect error]\n");
	printf("Result: 10^-1 = %d\n", ft_iterative_power(10, -1));
	return (0);
}
