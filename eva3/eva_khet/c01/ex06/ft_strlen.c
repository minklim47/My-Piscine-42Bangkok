/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plakorn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:30:09 by plakorn           #+#    #+#             */
/*   Updated: 2022/07/26 14:41:54 by plakorn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (*(str + i) == '\0')
		{
			return (i);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	*ptr;

	ptr = "peter parker";
	printf("%d\n", ft_strlen(ptr));
}
*/
