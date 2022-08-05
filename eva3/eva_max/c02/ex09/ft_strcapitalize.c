/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanratt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:18:56 by stanratt          #+#    #+#             */
/*   Updated: 2022/07/30 20:37:38 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	is_alp(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	if (is_lower(str[0]) == 1)
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (is_lower(str[i]) == 1)
		{
			if ((is_alp(str[i - 1]) != 1)
				&& (is_num(str[i - 1]) != 1))
				str[i] -= 32;
		}
		else if (is_alp(str[i]) == 1 && is_lower(str[i]) != 1)
		{
			if (is_alp(str[i - 1]) == 1)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char s[100]="Salut, comment tu vas ? 42mots quaABCe-deux; cinquante+et+un +a+A [a[A {a{A";
	char s2[100]="abc deFghIj";
	printf("%s\n", ft_strupcase(s));
	printf("%s", ft_strupcase(s2));
	return 0;
}

