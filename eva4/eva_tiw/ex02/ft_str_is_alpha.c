/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 22:06:28 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/08/02 02:26:10 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		}
	i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_alpha("Sirawich"));
	printf("\n%d", ft_str_is_alpha("2022"));
	printf("\n%d", ft_str_is_alpha("Ngiwthong"));
	printf("\n%d", ft_str_is_alpha("Tiw1998"));
	printf("\n%d", ft_str_is_alpha(""));
	printf("\n%d", ft_str_is_alpha("Ab[]"));
	printf("\n%d", ft_str_is_alpha(""));
	
}
