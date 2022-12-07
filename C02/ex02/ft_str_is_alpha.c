/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:38:40 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/07 15:00:37 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_not_maj(char s)
{
	if (s < 65 || s > 90)
	{
		return (1);
	}
	return (0);
}

int	ft_not_min(char s)
{
	if (s < 97 || s > 122)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (ft_not_maj(str[n]) && ft_not_min(str[n]))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
