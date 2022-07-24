/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:28:54 by climpras          #+#    #+#             */
/*   Updated: 2022/07/24 13:46:25 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	r;
	int	c;
	int	i;
	int	j;
	int	k;

	r = 3;
	c = 4;
	i = 0;
	k = 0;

	int *ptr = malloc((r * c) * sizeof(int));
	while (k < r * c)
	{
		k++;
		ptr[k] = k + 1;	
	}
	i = 0;
	while (i < r)
	{
		j = 0;
		while (j < c)
		{
			printf("%d", ptr[i * c + j]);
			j++;
		}
		printf("\n");
		i++;		
	}
	free(ptr);
	return (0);
}
