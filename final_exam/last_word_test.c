/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:53:30 by climpras          #+#    #+#             */
/*   Updated: 2022/08/04 23:49:58 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_pustr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1,"&str[i]", 1);
		i++;
	}
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = ft_strlen(av[1]) - 1;
	
	while (av[1][i] <= 32)
	{
		i--;
	}
	while (i > 0 && av[1][i] > 32)
	{
		i--;
	}
	i++;
	while (i > 0 && av[1][i] > 32)
	{
		write(1, &av[1][i], 1);
		i++;
	}
}
