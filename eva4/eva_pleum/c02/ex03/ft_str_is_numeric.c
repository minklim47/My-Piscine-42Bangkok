/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitiwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:36:35 by spitiwan          #+#    #+#             */
/*   Updated: 2022/07/21 08:21:40 by spitiwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ch_num(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	t;

	i = 0;
	while (str[i] != '\0')
	{
		t = ch_num(str[i]);
		if (t != 1)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
