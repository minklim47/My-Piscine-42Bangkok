/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:47:27 by tkulket           #+#    #+#             */
/*   Updated: 2022/07/27 21:34:29 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[10] = "azxnn?ss";
	char	s2[20] = "azxnn?a";

	printf("\n%s\n\n",s1);
	printf("%s\n\n",s2);
	printf("%d\n",strncmp(s1, s2));
	printf("%d\n",ft_strcmp(s1, s2));
	return (0);
}
*/
