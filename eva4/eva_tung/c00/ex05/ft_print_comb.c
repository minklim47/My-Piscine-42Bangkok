/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanupor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:52:08 by kmanupor          #+#    #+#             */
/*   Updated: 2022/07/19 11:52:58 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char k)
{
	write(STDOUT_FILENO, &k, 1);
}

void	ft_print_comb(void)
{
	int	num;

	num = 12;
	while (num <= 999)
	{
		if (((num / 10) % 10) > (num / 100) && (num % 10) > ((num / 10 % 10)))
		{
			ft_putchar((num / 100) + '0');
			ft_putchar(((num / 10) % 10) + '0');
			ft_putchar((num % 10) + '0');
			if (num < 789)
			{
				write(1, ", ", 2);
			}
		}
		num++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
