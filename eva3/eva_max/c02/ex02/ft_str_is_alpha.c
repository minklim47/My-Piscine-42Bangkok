/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:32:49 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/30 20:33:20 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z' && *str < 'a')
			|| (*str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main()
{
	char s[4]="abc*";
	printf("%d",ft_str_is_alpha(s));
	return 0;
}
*/
