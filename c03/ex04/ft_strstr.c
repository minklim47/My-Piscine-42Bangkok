/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:12:14 by climpras          #+#    #+#             */
/*   Updated: 2022/07/21 19:54:20 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_find_len;

	to_find_len = ft_strlen(to_find);
	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
				j++;	
		}
		if (j == to_find_len)
			return (&str[i]);
		
		i++;
	}
	return (&str[i]);
}

int	main(void)
{
	char	haystack[] = "ababcdfg";
	char	needle[] =   "abc";

	printf("original : %s\n", strstr(haystack, needle));
	printf("result   : %s\n", ft_strstr(haystack, needle));
}
*/
