/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:06:21 by pniyom            #+#    #+#             */
/*   Updated: 2022/07/31 19:51:07 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		index;
	int		min_index;

	index = 0;
	min_index = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (-1);
	while (min_index < max)
		arr[index++] = min_index++;
	*range = arr;
	return (max - min);
}
/*

#include<stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
