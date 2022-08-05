/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:50:01 by climpras          #+#    #+#             */
/*   Updated: 2022/08/04 22:38:10 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (reject[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[j] == reject[i])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%zu\n", ft_strcspn("Hello", "ie"));
}
