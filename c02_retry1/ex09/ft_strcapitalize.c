/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:58:56 by climpras          #+#    #+#             */
/*   Updated: 2022/07/20 13:11:34 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	non_alphanum_lower(int i, char *str)
{
	if ((str[i - 1] >= 32 && str[i - 1] <= 47)
		|| (str[i - 1] >= 58 && str[i - 1] <= 64)
		|| (str[i - 1] >= 91 && str[i - 1] <= 96)
		|| (str[i - 1] >= 123 && str[i - 1] <= 126))
		str[i] = str[i] - 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[0] = str[0] - 32;
			non_alphanum_lower(i, str);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i == 0)
				str[i] = str[i];
			else
				str[i] = str[i] + 32;
			non_alphanum_lower(i, str);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "Alut, comment tu vas ? 42mots quarante-deux; [a[A <a<A *a*A";
	printf("original : %s\n", a);
	printf("result : %s", ft_strcapitalize(a));
}
*/
