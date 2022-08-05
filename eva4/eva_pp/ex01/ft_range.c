/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:45:34 by thmusik           #+#    #+#             */
/*   Updated: 2022/07/28 21:41:59 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	*check;
	int	i;

	if (min >= max)
		return (0);
	result = malloc((max - min) * 4);
	check = result;
	if (!check)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
