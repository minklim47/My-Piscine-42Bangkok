/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:43:20 by tpintook          #+#    #+#             */
/*   Updated: 2022/08/01 16:59:42 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			c += 32;
		}
		i++;
	}
	return (str);
}*/

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (next == 1 && (c >= 'a' && c <= 'z'))
			str[i] -= 32;
		else if (next == 0 && (c >= 'A' && c <= 'Z'))
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A')
			|| (c > 'Z' && c < 'A') || c > 122)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
/*
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
				str[i] -= 32;
		}
			i1 = 0;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			i1 = 0;
		else
			i1 = 1;
		}
		i++;
	}
	return (str);
}*/
