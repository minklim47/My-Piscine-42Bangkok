/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:51:09 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/31 02:36:53 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_alpha(char *str);

int 	main(void)
{
	printf("%d\n",ft_str_is_alpha("acbcdefg"));
	printf("%d\n",ft_str_is_alpha("ADSDDScbcdefg"));
	printf("%d\n",ft_str_is_alpha("12ac4bcde3"));
	printf("%d\n",ft_str_is_alpha(""));
	
}
