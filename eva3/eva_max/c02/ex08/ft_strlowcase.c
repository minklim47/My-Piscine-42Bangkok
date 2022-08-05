/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:15:02 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/26 15:17:04 by stanratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
		c++;
	}
	str -= c;
	return (str);
}
/*
int main()
{
	char s[4]="aBz#";
	printf("%s", ft_strupcase(s));
	return 0;
}
*/
