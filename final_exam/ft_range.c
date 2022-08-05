/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 02:29:58 by climpras          #+#    #+#             */
/*   Updated: 2022/08/05 03:12:35 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int start, int end)
{
	int	diff;

	if (start > end)
	{
		diff = -1 * (end - start);
		return (diff);
	}
	diff = end - start;
	return (diff);

}

int	*ft_range(int start, int end)
{
	int	*arr;
	int	i;
	int	diff;
	int	*ptr;

	diff = ft_abs(start, end);
	printf("size = %d\n", diff);
	arr = (int *)malloc(sizeof(int) * diff + 1);
	ptr = arr;
	if (diff == 0)
	{
		ptr[0] = start;
		return (arr);
	}
	i = 0;
	if (start > end)
	{
		while (start >= end)
		{
			ptr[i] = start;
			start--;
			i++;
		}
	}
	else if (end > start)
	{
		while (end >= start)
		{
			ptr[i] = start;
			start++;
			i++;
		}
	}
//	ptr[i] = end;
	return (arr);
}

int	main(void)
{
	int	i;
	int	*arr;

	i = 0;
	arr = ft_range(-1, 2);
	while (arr[i] != '\0')
	{
		printf("%d ", arr[i]);
		i++;
	}
}
