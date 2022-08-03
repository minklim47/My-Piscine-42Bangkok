/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:03:04 by climpras          #+#    #+#             */
/*   Updated: 2022/08/02 06:27:34 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	r;

	r = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		arr = (int *)malloc(sizeof(int) * r);
		i = 0;
		while (min + i < max)
		{
			arr[i] = min + i;
			i++;
			*range = arr;
		}
		return (i);
	}
	return (-1);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("size = %d", size);
}
*/
/*
int main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = ft_ultimate_range(&a,5,5);
	d = ft_ultimate_range(&b,5,9);
	printf("Expect.0 4 0x0 5 6 7 8\n");
	printf("Result.%d %d %p %d %d %d %d\n",c,d,a,b[0],b[1],b[2],b[3]);
}
*/
