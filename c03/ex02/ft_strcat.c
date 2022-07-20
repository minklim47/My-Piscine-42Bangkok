/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:25:37 by climpras          #+#    #+#             */
/*   Updated: 2022/07/20 21:03:38 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	int	j;
	
	j = ft_strlen(dest);	
	i = 0;
	while (src[i-1] != '\0' )
	{
		dest[j] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[14] = "Hello";
	char	src[] = "World";
	
	printf("original : %s\n", strcat(dest, src));
	printf("result : %s\n", ft_strcat(dest, src));
}
