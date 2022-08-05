/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 01:17:55 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/07/31 01:55:41 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int 	main(void)
{
	printf("%d", ft_str_is_uppercase("SIRAWICH"));
	printf("\n%d", ft_str_is_uppercase("2022"));
	printf("\n%d", ft_str_is_uppercase("NGIWTHONG"));
	printf("\n%d", ft_str_is_uppercase("LoL"));
	printf("\n%d", ft_str_is_uppercase(""));
}*/
