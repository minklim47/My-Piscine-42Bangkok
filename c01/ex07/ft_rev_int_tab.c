/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:24:21 by climpras          #+#    #+#             */
/*   Updated: 2022/07/19 14:50:19 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + ((size - 1) - i));
		*(tab + ((size -1) - i)) = temp;
		i++;
	}
}
/*
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
*/
