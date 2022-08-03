/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:29:47 by climpras          #+#    #+#             */
/*   Updated: 2022/07/28 21:32:43 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n)
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}
/*
int	main(void) 
{
	char	s1[] = "123";
	char	s2[] = "124";
	int	n = 2;

	printf("original : %d\n", strncmp(s1, s2, n));
	printf("result : %d\n", ft_strncmp(s1, s2, n));
}
*/
