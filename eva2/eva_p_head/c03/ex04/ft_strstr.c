/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:11:43 by tkulket           #+#    #+#             */
/*   Updated: 2022/07/27 21:42:38 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	dest1[20] = "jjdjnm,izizizi";
	char	dest2[20] = "auuusunm,wwwww";
	char	*src;

	src = "nm,";
	printf(" dest1	: %s\n\n", dest1);
	printf(" dest2	: %s\n\n", dest2);
	printf("strstr	: %s\n\n",strstr(dest1, src));
	printf("ft	: %s\n\n",ft_strstr(dest2, src));
	return(0);
}
*/
