/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:28:58 by pniyom            #+#    #+#             */
/*   Updated: 2022/07/29 17:00:34 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include<stdio.h>
int	main(void)
{
	char src[] = "Hello! It's me!";
	printf("%s\n", ft_strdup(src));
	return (0);
}*/
