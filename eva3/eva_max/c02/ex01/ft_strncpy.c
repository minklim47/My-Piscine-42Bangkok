/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:29:05 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/30 20:32:26 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
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
/*
int	main()
{
	char s[5] = "abcde";
	char p2[50];

	ft_strncpy(p2, s, 3);
	printf("%s", p2);
	return (0);
}
*/
/*
int main()
{
	char s[5]="abcde";
	char *p1;
	p1=&s[0];
	char *p2;
	ft_strncpy(p2,p1,3);
	printf("%s",p2);
	return 0;
}
*/
