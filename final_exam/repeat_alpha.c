/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:48:41 by climpras          #+#    #+#             */
/*   Updated: 2022/08/03 00:21:22 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	diff;

	i = 0;
	if (argc != 2 || argv[1][i] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			diff =  argv[1][i] - 'a';
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			diff = argv[1][i] - 'A';
		else
			write(1, &argv[1][i], 1);
		while (diff >= 0)
		{
			write(1, &argv[1][i], 1);
			diff--;
		}
		i++;
	}
}
