/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitiwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:57:46 by spitiwan          #+#    #+#             */
/*   Updated: 2022/07/21 08:22:51 by spitiwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ch_able(char c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	t;

	i = 0;
	while (str[i] != '\0')
	{
		t = ch_able(str[i]);
		if (t != 1)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
