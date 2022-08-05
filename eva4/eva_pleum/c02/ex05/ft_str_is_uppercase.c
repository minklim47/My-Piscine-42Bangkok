/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitiwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:54:15 by spitiwan          #+#    #+#             */
/*   Updated: 2022/07/21 08:22:31 by spitiwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ch_up(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	t;

	i = 0;
	while (str[i] != '\0')
	{
		t = ch_up(str[i]);
		if (t != 1)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
