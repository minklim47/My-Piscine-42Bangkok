/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:27:04 by climpras          #+#    #+#             */
/*   Updated: 2022/07/18 21:33:57 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		else
			i++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "asdfD";
	printf("return : %d\n", ft_str_is_lowercase(str);
}
