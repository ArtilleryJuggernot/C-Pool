/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:24:46 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/13 03:42:35 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (!power);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	base_checker(char *base)
{
	int	n;
	int	j;
	int	flag;

	n = 0;
	j = 0;
	flag = 1;
	if (base[1] == '\0')
		return (0);
	while (base[n] != '\0' && flag)
	{
		j = n + 1;
		if (base[n] == '\0')
			flag = 0;
		if (base[n] == '+' || base[n] == '-' || base[n] == ' ')
			return (0);
		if (base[j] == base[n])
			return (0);
		n++;
	}
	return (1);
}

void	ft_remove(char *new, char *cur_s)
{
	while (*cur_s)
	{
		if (*cur_s != '+' && *cur_s != '-' && *cur_s != ' ')
			*new++ = *cur_s;
		cur_s++;
	}
	*new = '\0';
}

int	base_convert(char *str, char *base, int len_base, int len_str)
{
	int	final;
	int	n;
	int	j;

	j = 0;
	n = 0;
	final = 0;
	while (str[n])
	{
		while (base[j])
		{
			if (str[n] == base[j])
			{
				final += j * ft_recursive_power(len_base, len_str - n - 1);
			}
			j++;
		}
		j = 0;
		n++;
	}
	return (final);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len_base;
	int		len_str;
	char	new_str[500];

	len_base = 0;
	len_str = 0;
	if (!(base_checker(base)))
		return (0);
	while (base[len_base])
		len_base++;
	while (str[len_str])
		len_str++;
	ft_remove(new_str, str);
	return (base_convert(new_str, base, len_base, len_str));
}
