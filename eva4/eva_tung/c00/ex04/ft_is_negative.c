/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanupor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:43:31 by kmanupor          #+#    #+#             */
/*   Updated: 2022/07/19 11:52:21 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(STDOUT_FILENO, "N", 1);
	}
	else
	{
		write(STDOUT_FILENO, "P", 1);
	}
}

int	main(void)
{
	ft_is_negative(-4);
	return (0);
}
