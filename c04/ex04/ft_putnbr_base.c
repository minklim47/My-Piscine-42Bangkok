/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:10:55 by climpras          #+#    #+#             */
/*   Updated: 2022/07/27 23:36:51 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	err_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (strlen(base) == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return(0);
		j = i + 1;
		while (base[i] != base[j])
		{
			i++;
		}
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (err_check(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr < base_len)
		{
			ft_putchar(base[nbr]);
		}
		else if (nbr >= base_len)
		{
			ft_putnbr_base(nbr / base_len, base);
			ft_putnbr_base(nbr % base_len, base);
		}
	}
}

int	main(void)
{
	int	nbr;
	char	*base;

	base = "0123456789";
	nbr = 123;
	ft_putnbr_base(nbr, base);
}
