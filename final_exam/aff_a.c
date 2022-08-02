/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:25:48 by climpras          #+#    #+#             */
/*   Updated: 2022/08/02 21:42:19 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a')
		{
			write(1, &argv[1][i], 1);
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}	
	write(1, "\n", 1);
	return (0);	
}
