/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:07:05 by climpras          #+#    #+#             */
/*   Updated: 2022/08/02 04:05:35 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}


char	*ft_strcat(char *dest, char *src, char *sep)
{
	int	i;
	int	dest_len;
	int	j;

	
	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	j = 0;
	while (*sep != '\0')
	{
		dest[i] = sep[j];
		i++;
		j++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;
	char	*arr;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = 0;
	len = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	i = 0;
	arr = (char *)malloc(sizeof(char) * len + 1);
	while (strs[i] != NULL)
	{
		ft_strcat(arr, strs[i], sep);
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	i;
	char	*arr;
	char	**strs = {"Hello", "My", "Name", "Is", "Bobby"};
	char	*sep = " ,";
	int	size = 6;

	
	i = 0;
	arr = ft_strjoin(size, strs, sep);
	printf("%s\n", arr);
}
*/
/*
int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}*/

int	main(int argc,char **argv)
{
	char	*dest;
	char	sep[] = " | ";
	int	i;
	i = 0;
	dest = ft_strjoin(argc, argv, sep);
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}
