/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:21:14 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/17 17:25:06 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_norm_base(char *str);
int		ft_strlen(char *str);
int		contains(char *array, char element);
void	update(char c, char *base, int *total);

char	*ft_nbr(int nbr, char *base, char *result, int *i)
{
	int				digit;
	unsigned int	base_len;
	unsigned int	nbr2;

	nbr2 = nbr;
	if (nbr < 0)
	{
		result[0] = '-';
		*i += 1;
		nbr2 = -nbr;
	}
	base_len = ft_strlen(base);
	if (nbr2 >= base_len)
	{
		ft_nbr(nbr2 / base_len, base, result, i);
		*i += 1;
		digit = nbr2 % base_len;
		result[*i] = base[digit];
	}
	else
		result[*i] = base[nbr2];
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	total;
	int	sign;
	int	index;

	sign = 1;
	total = 0;
	index = 0;
	while (contains("\t\n\v\f\r ", str[index]))
		index++;
	while (contains("+-", str[index]))
	{
		if (str[index] == '-')
			sign = -sign;
		index++;
	}
	while (contains(base, str[index]))
	{
		update(str[index], base, &total);
		index++;
	}
	return (total * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * 35);
	if (!check_norm_base(base_from) || !check_norm_base(base_to))
		return (NULL);
	result = ft_nbr(ft_atoi_base(nbr, base_from), base_to, result, &i);
	if (!result)
		return (NULL);
	result[i + 1] = '\0';
	return (result);
}
