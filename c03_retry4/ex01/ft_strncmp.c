/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:56:12 by climpras          #+#    #+#             */
/*   Updated: 2022/07/27 18:10:50 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		a = (unsigned char)s1[i];
		b = (unsigned char)s2[i];
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
	char	s1[] = "ABAMD";
	char	s2[] = "ABACD";
	int	n = 4;

	printf("original : %d\n", strncmp(s1, s2, n));
	printf("result : %d\n", ft_strncmp(s1, s2, n));
}
*/
