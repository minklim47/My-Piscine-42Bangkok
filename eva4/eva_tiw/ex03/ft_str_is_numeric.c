/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 22:57:47 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/07/31 01:22:54 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_numeric("Sirawich"));
	printf("\n%d", ft_str_is_numeric("2022"));
	printf("\n%d", ft_str_is_numeric("1604"));
	printf("\n%d", ft_str_is_numeric(""));
}*/
