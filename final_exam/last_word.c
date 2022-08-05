/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:42:23 by climpras          #+#    #+#             */
/*   Updated: 2022/08/05 01:58:06 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	last;
	int	len;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = ft_strlen(argv[1]) - 1;
	while (argv[1][i] <= 32)
	{
		i--;
	}
	last = i;
	len = 0;
	while (argv[1][i] > 32)
	{
		i--;
	}
	while (i < last && argv[1][i])
	{
		write(1, &argv[1][i + 1], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
