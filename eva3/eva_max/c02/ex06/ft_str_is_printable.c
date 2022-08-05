/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:53:34 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/26 20:43:37 by stanratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
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
	char s[4]="F F";
	printf("%d", ft_str_is_printable(s));
	return 0;
}
*/
