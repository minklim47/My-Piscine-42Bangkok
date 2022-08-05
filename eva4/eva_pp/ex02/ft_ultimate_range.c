/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:51:49 by thmusik           #+#    #+#             */
/*   Updated: 2022/07/28 22:00:09 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	lenght;
	int	i;

	lenght = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	result = malloc((lenght) * 4);
	if (!result)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (lenght);
}

/*int		main(void)
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

}*/
