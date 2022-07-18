/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:03:51 by climpras          #+#    #+#             */
/*   Updated: 2022/07/18 17:27:59 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ( str[i] < 'A' || str[i] > 'z')
		{
			return (0);
		}
		else 
			i++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "Addsd1";
	printf("return : %d\n", ft_str_is_alpha(str));
}
