/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:19:12 by climpras          #+#    #+#             */
/*   Updated: 2022/08/04 21:03:57 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	x = 0;
	
	if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (!((argv[2][0] >= 'A' && argv[2][0] <= 'Z')
		|| (argv[2][0] >= 'a' && argv[2][0] <= 'z')))
	{
		write(1, "\n", 1);
		return (0);
	}
	if (!((argv[3][0] >= 'A' && argv[3][0] <= 'Z')
		|| (argv[3][0] >= 'a' && argv[3][0] <= 'z')))
	{
		write(1, "\n", 1);
		return (0);
	}
	
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
			x = 1;
		}
		i++;
	}
	ft_putstr(argv[1]);
	write(1, "\n", 1);	
}
