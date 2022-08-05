/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:12:49 by pniyom            #+#    #+#             */
/*   Updated: 2022/07/31 15:31:57 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = 0;
	i = 0;
	if (min >= max)
		return (arr);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (max > min)
	{
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);	
}*/
