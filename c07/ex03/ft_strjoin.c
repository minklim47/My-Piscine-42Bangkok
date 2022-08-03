/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:09:35 by climpras          #+#    #+#             */
/*   Updated: 2022/08/02 00:06:13 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*add_sep(char *arr, char *sep, int i)
{
	int	
	int	k
	while (sep[j] != '\0')
	{
		arr[i] = sep[j];
		j++;
		i++;
	}
	return (arr[i]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char	*arr;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	arr = (char *)malloc(sizeof(char));
	i = 0;
	k = 0;
	while (str[i])
	{
		arr[i] = ft_strcat(arr, str[i]);
			
	}
}
