/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:36:33 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/30 20:41:46 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	expr(char c)
{
	write(1, &c, 1);
}

void	printhex(int n)
{
	expr('0');
	while (n != 0)
	{
		if (n % 16 >= 10)
		{
			expr('a' + n % 16 - 10);
		}
		else
		{
			expr(n % 16 + '0');
		}
		n /= 16;
	}
}

void	ft_putstr_non_printable(char	*str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
		{
			expr('\\');
			printhex(*str);
		}
		else
		{
			expr(*str);
		}
		str++;
	}
}

int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
