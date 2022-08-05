/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:01:10 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/30 15:07:36 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "World!";
	char dest[] = "Hello ";
	char src2[] = "World!2";
	char dest2[] = "Hellow 2";

	printf("%lu string is %s \n", strlcpy(dest2, src2, 3), dest2);
	printf("%s have amout %d", dest, ft_strlcpy(dest, src, 3));
}
