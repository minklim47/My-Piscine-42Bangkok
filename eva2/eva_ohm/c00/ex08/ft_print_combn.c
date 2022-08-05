/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaiyawo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:01:18 by kkaiyawo          #+#    #+#             */
/*   Updated: 2022/07/14 09:52:06 by kkaiyawo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	write_num(char *digit, int n)
{
	write(1, digit + 1, n);
	if (*(digit + 1) - '0' == 9 - n + 1)
		write(1, "\n", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	digit[10];
	long	idx;

	digit[0] = '0' - 1;
	digit[1] = '0' - 1;
	idx = 1;
	while (idx > 0)
	{
		digit[idx]++;
		idx++;
		while (idx <= n)
		{
			digit[idx] = digit[idx - 1] + 1;
			idx++;
		}
		idx--;
		while (digit[idx] <= '9' - n + idx)
		{
			write_num(digit, n);
			digit[idx] += 1;
		}
		while (digit[idx] > '9' - n + idx)
			idx--;
	}
}

int	main(void)
{
	int	n;

	n = 3;
	ft_print_combn(n);
}
