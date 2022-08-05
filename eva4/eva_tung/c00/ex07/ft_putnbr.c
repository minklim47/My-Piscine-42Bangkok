/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanupor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:55:06 by kmanupor          #+#    #+#             */
/*   Updated: 2022/07/19 11:54:58 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char m)
{
	write(STDOUT_FILENO, &m, 1);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	temp[10];
	int	orig;

	orig = nb;
	i = -1;
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		i = i + 1;
		temp[i] = nb % 10;
		nb = nb / 10;
	}
	while (i-- >= 0)
	{
		ft_putchar(temp[i + 1] + '0');
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
