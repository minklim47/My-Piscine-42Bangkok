/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:55:54 by climpras          #+#    #+#             */
/*   Updated: 2022/07/31 12:34:57 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	i;

	range = max - min;
	if (min >= max)
	{
		*arr = NULL;
		return (arr);
	}
	else
	{
		arr = (int *)malloc(sizeof(int) * range);
		i = 0;
		while (min + i < max)
		{
			arr[i] = min + i;
			i++;
		}	
		return (arr);
	}
}
/*
int	main(void)
{
	int	min = 1;
	int	max = 6;
	
	printf("%d\n", ft_range(min, max)[0]);
	printf("%d\n", ft_range(min, max)[1]);
	printf("%d\n", ft_range(min, max)[2]);
	printf("%d\n", ft_range(min, max)[3]);
	printf("%d\n", ft_range(min, max)[4]);
	printf("%d\n", ft_range(min, max)[5]);
}
*/
