/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:06:46 by pjumpale          #+#    #+#             */
/*   Updated: 2022/07/30 21:35:11 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;
	int	a;

	p = 0;
	while (p < (size / 2))
	{
		a = tab[p];
		tab [p] = tab [size - 1 - p];
		tab [size - 1 - p] = a;
		p++;
	}
}

int	main(void)
{
	int	size = 5;
	int	tab[5] = {1,2,3,4,5};
	ft_rev_int_tab(tab, size);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	printf("%d\n", tab[4]);
}

