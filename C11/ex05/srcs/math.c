/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:02:25 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 15:27:15 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "operation.h"
#include "print.h"
#include "parse.h"

int	ft_atoi(char *str)
{
	int	neg;
	int	n;
	int	final;

	neg = 1;
	n = 0;
	final = 0;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			neg *= -1;
		str++;
	}
	while (is_number_char(*str))
		final = final * 10 + *str++ - '0';
	return (neg * final);
}

void	ft_exec(int n1, char *op, int n2)
{
	if (op[0] == '+')
		ft_putnbr(add(n1, n2));
	if (op[0] == '-')
		ft_putnbr(minus(n1, n2));
	if (op[0] == '/')
		ft_putnbr(div(n1, n2));
	if (op[0] == '*')
		ft_putnbr(mul(n1, n2));
	if (op[0] == '%')
		ft_putnbr(mod(n1, n2));
}
