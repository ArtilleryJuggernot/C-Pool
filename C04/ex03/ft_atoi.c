/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:32:12 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/13 05:29:40 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	index_start(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' '))
		i++;
	return (i);
}

int	negative(char *str, int *start)
{
	int	i;
	int	count;

	i = *start;
	count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	count %= 2;
	*start = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	is_negative;
	int	start;

	start = index_start(str);
	nbr = 0;
	is_negative = negative(str, &start);
	while (str[start] != '\0' && (str[start] >= '0' && str[start] <= '9'))
	{
		nbr = nbr * 10 + (str[start] - '0');
		start++;
	}
	if (is_negative)
		nbr *= -1;
	return (nbr);
}
