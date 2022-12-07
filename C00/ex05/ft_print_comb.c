/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:19:42 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 15:07:07 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	units;

	hundreds = '0';
	while (hundreds <= '9')
	{
		tens = hundreds + 1;
		while (tens <= '9')
		{
			units = tens + 1;
			while (units <= '9')
			{
				ft_putchar(hundreds);
				ft_putchar(tens);
				ft_putchar(units);
				if (! (hundreds == '7' && tens == '8' && units == '9'))
					ft_putchar(',');
				units++;
			}
			tens++;
		}
		hundreds++;
	}
}
