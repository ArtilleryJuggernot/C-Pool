/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:47:08 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 01:56:36 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;

	if (argc == 1)
		return (0);
	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
