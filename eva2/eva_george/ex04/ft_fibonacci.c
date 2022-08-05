/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:59:45 by grobert           #+#    #+#             */
/*   Updated: 2022/07/31 11:02:01 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}

/*int	main()
{
	int f = ft_fibonacci(5);
	printf("%d", f);
}*/
