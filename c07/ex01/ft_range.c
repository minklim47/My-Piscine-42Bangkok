/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:55:54 by climpras          #+#    #+#             */
/*   Updated: 2022/08/01 23:59:24 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	arr = (int *)malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
	
}

int	main(void)
{
	int	*dest;
	int	i;

	i = 0;
	dest = ft_range(6, 5);
	while (dest[i] != '\0')
	{
		printf("%d\n", dest[i]);
		i++;
	}
	
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 11;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/

