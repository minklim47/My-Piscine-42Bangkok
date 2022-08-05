/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 04:55:51 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/07/31 05:25:42 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (a == 1)
			{
				str[i] -= 32;
				a = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			a = 0;
		}
		else
			a = 1;
	i++;
	}
	return (str);
}
/*
int	main(void)

{
	char	str[] = "siRawich 12 abc kub pom +tiw-tiw*tiw";

	printf("%s", ft_strcapitalize(str));
}*/
