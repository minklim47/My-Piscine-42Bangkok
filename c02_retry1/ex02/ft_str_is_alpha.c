/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:03:51 by climpras          #+#    #+#             */
/*   Updated: 2022/07/20 11:22:05 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "abcABC]123";
	printf("return : %d\n", ft_str_is_alpha(str));
}
*/
