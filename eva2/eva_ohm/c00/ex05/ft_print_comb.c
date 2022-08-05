/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaiyawo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:08:20 by kkaiyawo          #+#    #+#             */
/*   Updated: 2022/07/14 07:35:25 by kkaiyawo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	write_digit(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a == '7' && b == '8' && c == '9')
		write (1, "\n", 1);
	else
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	digit[3];

	digit[0] = '0';
	while (digit[0] < '8')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] < '9')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				write_digit(digit[0], digit[1], digit[2]);
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
