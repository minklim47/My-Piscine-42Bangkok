/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:24:40 by climpras          #+#    #+#             */
/*   Updated: 2022/08/03 01:34:55 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'A' && argv[1][i] < 'N')
			|| (argv[1][i] >= 'a' && argv[1][i] < 'n'))
			argv[1][i] += 13;
		else if ((argv[1][i] >= 'N' && argv[1][i] < 'z')
			|| (argv[1][i] >= 'a' && argv[1][i] <='n'))
		

	}
}