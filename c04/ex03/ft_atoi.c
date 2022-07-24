/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:10:17 by climpras          #+#    #+#             */
/*   Updated: 2022/07/24 09:40:38 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_negative(char *str)
{
	int	i;
	int	ngt;

	i = 0;
	ngt = 1;
	while (str[i] != '\0' )
	{
		if(str[i] == '-')
		{
			ngt = ngt * (-1);
		}
		i++;
	}
	return (ngt);

}

int	ft_atoi(char *str)
{
	int	i;
	int	ngt;
	int	ans;

	i = 0;
	ngt = is_negative(str);
	ans = 0;
	
	while (str[i] <= ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9' ))
	{
		ans = (ans * 10) + (str[i] - '0');
		i++;
	}
	return (ans * ngt);
}

int	main(void)
{
	printf("Expect result :\n");
	printf("-1234\n");
	printf("-2147483648\n");
	printf("-12345\n");
	printf("0\n");
	printf("0\n");
	printf("0\n");
	printf("123456789\n");
	printf("2147483647\n");
    	printf("User   result :\n");
	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
	printf("%d\n",ft_atoi(" \n\r\t\f\v -+-+-+--2147483648"));
	printf("%d\n",ft_atoi("-12345+2"));
	printf("%d\n",ft_atoi(""));
	printf("%d\n",ft_atoi("++- 123"));
	printf("%d\n",ft_atoi(" a123"));
	printf("%d\n",ft_atoi("\t--123456789a"));
	printf("%d\n",ft_atoi(" --++--2147483647"));
    	return (0);	
}
