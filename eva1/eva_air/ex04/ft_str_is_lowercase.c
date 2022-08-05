/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:33:09 by tpintook          #+#    #+#             */
/*   Updated: 2022/07/28 14:25:19 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		show_value;
	char	c;

	show_value = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 'a' || c > 'z')
		{
			show_value = 0;
		}
		i++;
	}
	return (show_value);
}
