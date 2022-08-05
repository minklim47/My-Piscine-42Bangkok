/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 02:01:40 by climpras          #+#    #+#             */
/*   Updated: 2022/08/05 02:28:26 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	num1;
	int	num2;	

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argv[2][0] == '*')
		printf("%d", num1 * num2);
	else if (argv[2][0] == '+')
		printf("%d", num1 + num2);
	else if (argv[2][0] == '-')
		printf("%d", num1 - num2);
	else if (argv[2][0] == '/')
		printf("%d", num1 / num2);
	else if (argv[2][0] == '%')
		printf("%d", num1 % num2);
	return (0);
}
