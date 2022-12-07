/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 04:01:59 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 15:33:04 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	if (c >= '0' && c <= 'z')
		if (c <= '9' || (c >= 'A' && c <= 'Z') || c >= 'a')
			return (1);
	return (0);
}

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alphanum(str[i]))
		{
			str[i] = ft_toupper(str[i]);
			i++;
			while (is_alphanum(str[i]))
			{
				str[i] = ft_tolower(str[i]);
				i++;
			}
		}
		i++;
	}
	return (str);
}
