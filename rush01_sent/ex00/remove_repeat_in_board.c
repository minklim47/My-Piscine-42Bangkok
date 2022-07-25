/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_repeat_in_board.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:15:40 by okarnjan          #+#    #+#             */
/*   Updated: 2022/07/25 22:17:11 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	remove_case2_board(int *arr) // remove board that has repeated no. on the same role || column
{

}

#include <stdio.h>

int	main(void)
{
	int	test[100][100][100] = {
		{
			{1, 2, 3, 4},
			{2, 3, 4, 1},
			{3, 4, 1, 2},
			{4, 1, 2, 3}
		},
		{
			{1, 2, 3, 4},
			{2, 3, 4, 1},
			{2, 4, 1, 2},
			{4, 1, 2, 3}
		},
		{
			{0, 0, 0, 0},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
			{0, 0, 0, 0}
		}
	};
	int	i;
	int	j;
	int	k;

	i = 0; //board
	j = 0; //row
	k = 0; //col
	while (test[i][j][k] != 0)
	{
		while (j < 4)
		{
			while (k < 4)
			{
				//printf("%d ", test[i][j][k]);
				k++;
			}
			//printf("\n");
			j++;
			k = 0;
		}
		//printf("\n");
		i++;
		j = 0;
		k = 0;
	}
}

