/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:21:12 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/22 01:34:03 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "print.h"
#include "math.h"
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_len(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	is_number_char(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_op(char *c)
{
	int		n;
	char	*op_list;

	n = 0;
	op_list = "+-/*%";
	while (op_list[n])
	{
		if (op_list[n] == c[0] && ft_len(c) == 1)
		{
			return (1);
		}
			n++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s2[n] && s1[n] == s2[n])
	{
		n++;
	}
	return ((unsigned int) s1[n] - (unsigned int)s2[n]);
}

int	check_error(char *op, char *s1)
{
	if (ft_strcmp(op, "/") == 0 && ft_atoi(s1) == 0)
	{
		ft_putstr("Stop : division by zero");
		ft_putchar('\n');
		return (0);
	}
	if (ft_strcmp(op, "%") == 0 && ft_atoi(s1) == 0)
	{
		ft_putstr("Stop : modulo by zero");
		ft_putchar('\n');
		return (0);
	}
	return (1);
}
