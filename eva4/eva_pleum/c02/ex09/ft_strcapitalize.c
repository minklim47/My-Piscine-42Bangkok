/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitiwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:23:58 by spitiwan          #+#    #+#             */
/*   Updated: 2022/07/21 08:42:44 by spitiwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_low(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	is_up(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_up(str[i]) == 1)
			str[i] = str[i] + 32;
		++i;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (is_low(str[0]) == 1)
			str[0] = str[0] - 32;
		if ((str[i] < '0') || ((str[i] > '9') && (str[i] < 'A')))
			if (is_low(str[i + 1]) == 1)
				str[i + 1] = str[i + 1] - 32;
		if (((str[i] > 'Z') && (str[i] < 'a')) || (str[i] > 'z'))
			if (is_low(str[i + 1]) == 1)
				str[i + 1] = str[i + 1] - 32;
		++i;
	}
	return (str);
}
