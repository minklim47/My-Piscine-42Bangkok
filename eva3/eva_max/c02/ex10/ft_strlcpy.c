/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:48:10 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/30 20:40:44 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}

int	main(void)
{
	char s[5] = "abcde";
	char p2[50];
	char p3[50];
	int x=ft_strlcpy(p2,s,7);
	printf("%d",x);
	printf("%s\n",p2);
	int y=strlcpy(p3,s,7);
	printf("%d",y);
	printf("%s",p3);
	return (0);
}

