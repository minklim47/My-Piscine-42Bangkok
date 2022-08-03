/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:13:14 by climpras          #+#    #+#             */
/*   Updated: 2022/07/31 21:20:46 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
//	print_prime();
	printf("Expect: 13 => 1\n");
	printf("Result: 13 => %d\n", ft_is_prime(5));
	printf("Expect: 97 => 1\n");
	printf("Result: 97 => %d\n", ft_is_prime(97));
	printf("Expect: 1 => 0\n");
	printf("Result: 1 => %d\n", ft_is_prime(1));
	printf("Expect: 4 => 0\n");
	printf("Result: 4 => %d\n", ft_is_prime(4));	printf("Expect: 100 => 0\n");
	printf("Result: 100 => %d\n", ft_is_prime(100));
	printf("Expect: 50021 => 1\n");
	printf("Result: 50021 => %d\n", ft_is_prime(50021));
	printf("Expect: 50022 => 0\n");
	printf("Result: 50022 => %d\n", ft_is_prime(50022));
	printf("Expect: 50023 => 1\n");
	printf("Result: 50023 => %d\n", ft_is_prime(50023));
	printf("Expect: -1 => 0\n");
	printf("Result: -1 => %d\n", ft_is_prime(-1));
	return (0);

}
*/
