/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:40:07 by climpras          #+#    #+#             */
/*   Updated: 2022/07/24 10:52:54 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		return (0);
	}
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	nb = 4;
	printf("%d\n", ft_recursive_factorial(nb));
}


