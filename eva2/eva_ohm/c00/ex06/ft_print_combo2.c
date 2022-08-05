/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaiyawo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 07:24:32 by kkaiyawo          #+#    #+#             */
/*   Updated: 2022/07/14 07:37:41 by kkaiyawo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_num(int a, int b)
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = '0' + a / 10;
	x = '0' + a % 10;
	y = '0' + b / 10;
	z = '0' + b % 10;
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (a == 98 && b == 99)
		write(1, "\n", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print_num(a, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
