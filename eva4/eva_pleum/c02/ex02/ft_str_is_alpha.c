/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitiwan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:13:07 by spitiwan          #+#    #+#             */
/*   Updated: 2022/07/21 08:21:16 by spitiwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ch_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}	
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	t;

	i = 0;
	while (str[i] != '\0')
	{
		t = ch_alpha(str[i]);
		if (t != 1)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
