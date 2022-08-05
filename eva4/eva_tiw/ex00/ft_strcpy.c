/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:33:53 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/07/30 17:44:19 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[100] = "Sirawich";
	char	dest[100] = "LOL";

	printf("dest = %s, src = %s\n", dest, src);
	printf("%s\n", ft_strcpy(dest, src));
	printf("dest = %s, src = %s\n", dest, src);
}*/
