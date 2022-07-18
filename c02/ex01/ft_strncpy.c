/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:33:31 by climpras          #+#    #+#             */
/*   Updated: 2022/07/18 17:03:12 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	srclen;

	i = 0;
	srclen = 0;n
	while (i < n && src[i] != '\0')
	{
		
		dest[i] = src[i];

		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;	
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello";
	char	dest[];
	int	n = 4;
	printf("%s\n", ft_strncpy(dest, src, n));	
}
