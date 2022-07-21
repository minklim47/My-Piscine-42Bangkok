/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:37:12 by climpras          #+#    #+#             */
/*   Updated: 2022/07/21 18:21:36 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		a = s1[i];
		b = s2[i];
		if (a == b)
			i++;
		else
			return (a - b);
	}
	return (a - b);
}
/*
int	main(void)
{
	char	s1[] = "\200";
	char	s2[] = "\0";
	
	printf("original : %d\n", strcmp(s1, s2));
	printf("result : %d\n", ft_strcmp(s1, s2));
}
*/
