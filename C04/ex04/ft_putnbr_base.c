/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:15:04 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 19:11:57 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_write(int nbr, long number, long base_len, char *base)
{
	long	i;
	char	res[200];

	i = 0;
	if (nbr < 0)
	{
		number = nbr;
		number = -number;
		ft_putchar('-');
	}
	else
		number = nbr;
	if (number == 0)
		ft_putchar(base[0]);
	while (number > 0)
	{
		res[i++] = base[number % base_len];
		number /= base_len;
	}
	i--;
	while (i >= 0)
		ft_putchar(res[i--]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	i;
	long	base_len;
	long	number;

	i = 0;
	base_len = ft_strlen(base);
	number = nbr;
	if ((check_base(base) == 0) || (ft_strlen(base) < 2))
		return ;
	ft_write(nbr, number, base_len, base);
}
