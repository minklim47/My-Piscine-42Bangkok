/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:48:10 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/28 12:59:59 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
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
int main()
{
	char src[] = "source info";
	char dest[] = "destination";
	char src2[] = "source info 2";
	char dest2[] = "destination2";
	printf("%s\n", strcpy(src, dest));
	printf("%s\n", ft_strcpy(src2, dest2));
}*/
