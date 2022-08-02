/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:56:20 by climpras          #+#    #+#             */
/*   Updated: 2022/08/03 02:15:40 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	ans;
	int	ngt;

	i = 0;
	ngt = 1;
	ans = 0;
	while (str[i] <= 32)
		i++;

	if (str[i] == '-')
	{
		ngt = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;	
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		ans = (ans * 10) + (str[i] - '0');
		i++;
	}
	return (ans * ngt);
	
}

int	main(void)
{
	char str[] = "+-1234";
	printf("original : %d\n", atoi(str));
	printf("my func  : %d", ft_atoi(str));

}
