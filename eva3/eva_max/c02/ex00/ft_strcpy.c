/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:23:41 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/26 14:25:32 by stanratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

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
int main(void)
{
    char text[] = "Hello 42 SEOUL!!";
	char buffer[100];
	char *ret;

	ret = ft_strcpy(buffer, text);
	printf("%s - %d\n", buffer, (int)buffer - (int)ret);
	ret = strcpy(buffer, text);
	printf("%s - %d\n", buffer, (int)buffer - (int)ret);
    return 0;
}
*/
