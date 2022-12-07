/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 02:55:39 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/20 02:58:43 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int	mode, char c)
{
	write(mode,&c,1);
}

void	ft_putstr(int mode, char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		ft_putchar(mode,str[n]);
		n++;
	}
}
