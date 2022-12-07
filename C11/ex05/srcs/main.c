/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:01:54 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/22 01:55:33 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "parse.h"
#include "print.h"
#include "math.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;

	if (argc == 4)
	{
		if (is_op(argv[2]))
		{
			if (check_error(argv[2], argv[3]))
			{
				n1 = ft_atoi(argv[1]);
				n2 = ft_atoi(argv[3]);
				ft_exec(n1, argv[2], n2);
				ft_putchar('\n');
			}
			return (0);
		}
		else
		{
			ft_putchar('0');
			ft_putchar('\n');
		}
	}
	return (0);
}
