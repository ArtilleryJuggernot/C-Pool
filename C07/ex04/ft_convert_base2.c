/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:21:24 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/17 17:08:13 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	contains(char *array, char element)
{
	int	index;

	index = 0;
	while (array[index])
	{
		if (array[index] == element)
			return (1);
		index++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	update(char c, char *base, int *total)
{
	int	index;

	index = 0;
	*total *= ft_strlen(base);
	while (base[index])
	{
		if (base[index] == c)
			break ;
		index++;
	}
	*total += index;
}

int	check_norm_base(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (contains("\t\n\v\f\r +-", str[i]))
			return (0);
		j = 0;
		while (str[j])
		{
			if (str[i] == str[j] && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
