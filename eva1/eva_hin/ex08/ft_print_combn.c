/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrisury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:45:52 by dsrisury          #+#    #+#             */
/*   Updated: 2022/07/31 19:34:04 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char a, char b, bool last)
{
	ft_putchar(a);
	ft_putchar(b);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	bool	last;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			last = !(a == '8' && b == '9');
			ft_write_comb(a, b, last);
			b++;
		}
		a++;
	}
}
/*
int		main(void)
{
	ft_print_comb();
}
*/
