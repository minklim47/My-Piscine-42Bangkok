/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:12:55 by climpras          #+#    #+#             */
/*   Updated: 2022/07/27 16:15:00 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	ans;

	ans = 0;
	if (index < 0)
		ans = -1;
	else if (index == 0)
		ans = 0;
	else if (index == 1)
		ans = 1;
	else
		ans = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (ans);
}
/*
int	main(void)
{
	printf("%d\n", ft_fibonacci(-1));
}
*/
