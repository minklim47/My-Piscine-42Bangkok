/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:24:58 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/28 12:20:21 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int 	main(void)
{
	char src[] = "avocado";
	char src2[] = "avocado2";
	char dest[] = "coconut";
	char dest2[] = "almond";

	printf("Old = %s\n", strncpy(dest, src, 7));
	printf("new = %s\n", ft_strncpy(dest2, src2, 3));
}
