/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphsbet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrisury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:18:10 by dsrisury          #+#    #+#             */
/*   Updated: 2022/07/31 17:48:11 by dsrisury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	rev_alph;

	rev_alph = 'z';
	while (rev_alph >= 'a')
	{
		ft_putchar(rev_alph);
		rev_alph--;
	}
}
/*
int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
