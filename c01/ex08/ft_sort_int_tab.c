/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:25:59 by climpras          #+#    #+#             */
/*   Updated: 2022/07/18 09:26:22 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
                                                         
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)	
		{
			if (*(tab + i) < *(tab + j))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	size = 5;
	int	tab[5] = {5, 0, 9, 2, 4};
	
	ft_sort_int_tab(tab, size);
	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
	printf("%d ", tab[4]);
}
