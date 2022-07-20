/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:23:12 by climpras          #+#    #+#             */
/*   Updated: 2022/07/20 20:24:39 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	int	n = 3;

	printf("original : %d\n", strncmp(s1, s2, n));
	printf("result : %d\n", ft_strncmp(s1, s2, n));
}
*/
