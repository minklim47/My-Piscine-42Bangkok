/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:57:53 by climpras          #+#    #+#             */
/*   Updated: 2022/08/03 04:04:39 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	int	j;
	char	temp;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	j = 1;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - j];
		str[len - j] = temp;
		i++;
		j++;
	}
	return (str);
}
int	main(void)
{
	char str[] = "abcd";
	printf("%s\n", ft_strrev(str));
}

