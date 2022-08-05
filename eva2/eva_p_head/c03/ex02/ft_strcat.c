/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:02:12 by tkulket           #+#    #+#             */
/*   Updated: 2022/07/25 13:24:32 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest1[20] = "hell0";
	char	dest2[20] = "Hello";

	src = "world";
	printf("dest	: %s	%s\n", dest1 , dest2);
	printf("src	: %s\n", src);
	printf("strcat	: %s\n",strcat(dest1, src));
	printf("ft	: %s\n",ft_strcat(dest2, src));
	return (0);

}
*/
