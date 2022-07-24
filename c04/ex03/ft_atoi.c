/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:59:45 by climpras          #+#    #+#             */
/*   Updated: 2022/07/23 17:11:43 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_negative(char *str)
{
	int	i;
	int	ngt;

	i = 0;
	ngt = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			ngt*=-1;
		}
		i++;
	}
	return (ngt);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ans;
	int	ngt;

	i = 0;
	ans = 0;
	ngt = is_negative(str);

	while (str[i] != '\0' && (str[i] > '0' && str[i] < '9')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ans = (ans * 10) + (str[i] - '0');
			i++;
		}
		else
			return (ans * ngt);
	}
	return (ans * ngt);
}

int	main(void)
{
	printf("%d\n",ft_atoi("+ugvyh700hhghu77"));
}
