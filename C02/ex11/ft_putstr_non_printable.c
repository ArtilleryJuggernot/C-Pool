/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 04:53:47 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 15:36:38 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_hexa(char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	if (c / 16 > 0)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	write(1, base + (c % 16), 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ')
			print_hexa(*str);
		else
			write(1, str, 1);
		str++;
	}
}
