/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:05:14 by yourLogin         #+#    #+#             */
/*   Updated: 2022/07/17 22:55:31 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	rush00(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <=  y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1 && (j == 1 || j == x))
				ft_putchar('o');
			else if (i == y && (j == 1 || j == x))
				ft_putchar('o');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else if	(j == 1 || j == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;		
		}
		ft_putchar('\n');
		i++;	
	}
}

int	main(void)
{	
	rush00(4,4);

}
