/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:24:26 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/28 14:26:05 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int     ft_str_is_uppercase(char *str);

int     main()
{
        printf("%d\n", ft_str_is_uppercase("ABCDFCFD"));
        printf("%d\n", ft_str_is_uppercase("ACBGDfsds"));
        printf("%d\n", ft_str_is_uppercase("affsf"));

}
