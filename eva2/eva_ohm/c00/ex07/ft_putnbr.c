/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaiyawo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 07:38:51 by kkaiyawo          #+#    #+#             */
/*   Updated: 2022/07/14 09:29:49 by kkaiyawo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

long	nb_length(long lnb)
{
	long	count;

	count = 1;
	while (count < lnb)
		count *= 10;
	return (count / 10);
}

void	ft_putnbr(int nb)
{
	long	digit;
	long	lnb;
	char	out;

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb *= -1;
	}
	digit = nb_length(lnb);
	if (digit == 0)
		write(1, "0", 1);
	while (digit > 0)
	{
		out = '0' + (lnb / digit);
		write(1, &out, 1);
		lnb %= digit;
		digit /= 10;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int	nb;

	nb = 0;
	ft_putnbr(nb);
}
