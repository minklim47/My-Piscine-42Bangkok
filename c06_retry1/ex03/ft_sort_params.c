/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:05:04 by climpras          #+#    #+#             */
/*   Updated: 2022/07/31 11:28:14 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		a = s1[i];
		b = s2[i];
		if (a == b)
			i++;
		else
			return (a - b);
	}
	return (a - b);
}

void	ft_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	(void)argc;
	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	(void)argc;
	i = 1;
	ft_sort(argc, argv);
	while (argv[i] != NULL)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
