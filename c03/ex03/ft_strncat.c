/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:55:41 by climpras          #+#    #+#             */
/*   Updated: 2022/07/21 15:36:27 by climpras         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len + i + 1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest1[20] = "Hello";
	char	src1[] = "girlfriend";
	char	dest2[20] = "Hello";
	char	src2[] = "girlfriend";
	int	nb = 4;

	printf("original : %s\n", strncat(dest1, src1, nb));
	printf("result : %s\n", ft_strncat(dest2, src2, nb));
}
*/
