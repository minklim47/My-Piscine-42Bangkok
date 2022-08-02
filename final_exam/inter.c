/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 04:09:43 by climpras          #+#    #+#             */
/*   Updated: 2022/08/03 04:28:44 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char a, char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (a == str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] 
					&& check(argv[1][i], argv[1], i) == 1)
					write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
