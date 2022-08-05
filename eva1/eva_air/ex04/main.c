/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:33:09 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/28 13:54:15 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_lowercase(char *str);

int	main()
{
	printf("%d\n", ft_str_is_lowercase("1234affsf"));
	printf("%d\n", ft_str_is_lowercase("ACBGDfsds"));
	printf("%d\n", ft_str_is_lowercase("affsf"));

}
