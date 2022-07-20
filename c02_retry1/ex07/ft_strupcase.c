/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:41:41 by climpras          #+#    #+#             */
/*   Updated: 2022/07/19 21:29:19 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}	
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "abcdABCD";
	printf("%s\n", ft_strupcase(str));
}
*/
