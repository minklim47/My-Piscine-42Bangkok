/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:42:51 by climpras          #+#    #+#             */
/*   Updated: 2022/07/31 13:25:32 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	nb = 2;
	int	power = 4;
	printf("%d\n", ft_recursive_power(nb, power));
}
*/
/*
int	main(void)
{
	printf("Expect: 2^0 = %d\n", (int) pow(2, 0));
	printf("Result: 2^0 = %d\n", ft_recursive_power(2, 0));
	printf("Expect: 2^5 = %d\n", (int) pow(2, 5));
	printf("Result: 2^5 = %d\n", ft_recursive_power(2, 5));
	printf("Expect: -2^10 = %d\n", (int) pow(-2, 10));
	printf("Result: -2^10 = %d\n", ft_recursive_power(-2, 10));
	printf("Expect: -5^9 = %d\n", (int) pow(-5, 9));
	printf("Result: -5^9 = %d\n", ft_recursive_power(-5, 9));
	printf("Expect: 10^-1 = 0 [expect error]\n");
	printf("Result: 10^-1 = %d\n", ft_recursive_power(10, -1));
}
*/
