/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:43:43 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/29 19:50:57 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_printable(char *str);

int  main(void)
{
	printf("%d\n", ft_str_is_printable("*%$(#*%*($*%($(jfdhjkfhdjfhjdhg\n"));
	printf("%d", ft_str_is_printable("/n/t"));
}
