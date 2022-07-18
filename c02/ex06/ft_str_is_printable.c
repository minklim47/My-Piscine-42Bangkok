/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:19:02 by climpras          #+#    #+#             */
/*   Updated: 2022/07/18 22:56:20 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
			return (0);
		else
			i++;
	}	
	return (1);
}

int	main(void)
{
	char	str[] = "ksofk\0";
	printf("return: %d\n", ft_str_is_printable(str));
}
