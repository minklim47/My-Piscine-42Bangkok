/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 05:47:33 by climpras          #+#    #+#             */
/*   Updated: 2022/08/02 06:24:26 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	all_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			x++;
		}
		if (i < size - 1)
			x += ft_strlen(sep);
		i++;
	}
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*dest;
	int		i;
	int		j;
	int		a;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = all_len(size, strs, sep);
	dest = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[a++] = strs[i][j++];
		j = 0;
		if (i++ < size - 1)
			while (sep[j] != '\0')
				dest[a++] = sep[j++];
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*arr;
	char	*strs[3];
	char	*sep;

	sep = ", ";
	strs[0] = "Hello";
	strs[1] = "Hi";
	strs[2] = "asl";
	arr = ft_strjoin(3, strs, sep);

	printf("%s\n", arr);
}
*/
