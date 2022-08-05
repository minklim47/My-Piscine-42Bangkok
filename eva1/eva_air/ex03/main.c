/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:05:52 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/28 13:30:46 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_numeric(char *str);

int 	main()
{
	printf("%d\n", ft_str_is_numeric("12345670"));
	printf("%d\n", ft_str_is_numeric("1234%*$&5i670"));
	printf("%d\n", ft_str_is_numeric("123AAA45670"));
	printf("%d\n", ft_str_is_numeric(""));
}
