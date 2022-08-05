/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:22:43 by pjumpale          #+#    #+#             */
/*   Updated: 2022/07/30 22:12:05 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	p;
	int	a;

	while (size >= 0)
	{
		p = 0;
		while (p < size - 1)
		{
			if (tab[p] > tab[p + 1])
			{
				a = tab [p];
				tab[p] = tab [p + 1];
				tab [p + 1] = a;
			}
			p++;
		}
		size--;
	}	
}

int	main(void)
{
	int	size = 5;
	int	tab[5] = {1, 9, 4, 9, 3};
	
	ft_sort_int_tab(tab, size);
	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
	printf("%d ", tab[4]);
}
