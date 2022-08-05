/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 02:12:12 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/08/02 02:29:53 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_printable("-=-=_Sirawich1998"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("\n\t\v"));
}
