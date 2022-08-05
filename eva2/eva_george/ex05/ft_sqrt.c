/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:10:05 by grobert           #+#    #+#             */
/*   Updated: 2022/07/31 13:23:36 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		nb = -nb;
	if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}*/

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

/*int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

void	test(int nb)
{
	int	result;
	result = ft_sqrt(nb);
	ft_putnbr(result);
	ft_putchar('\n');
}
*/
int	main(int argc, const char *argv[])
{
	test(9);
	//test(5);
}

