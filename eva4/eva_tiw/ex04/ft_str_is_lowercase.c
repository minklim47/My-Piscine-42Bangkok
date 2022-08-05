/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:46:53 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/08/01 21:08:04 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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
	printf("%d", ft_str_is_lowercase("sirawich"));
	printf("\n%d", ft_str_is_lowercase("2022"));
	printf("\n%d", ft_str_is_lowercase("ngiwthong"));
	printf("\n%d", ft_str_is_lowercase(""));
}*/
