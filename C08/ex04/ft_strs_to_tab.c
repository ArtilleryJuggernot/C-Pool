/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 03:42:22 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 17:00:36 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	offset1;
	unsigned int	offset2;

	offset1 = 0;
	while (dest[offset1] != '\0')
	{
		offset1++;
	}
	offset2 = 0;
	while (src[offset2] != '\0')
	{
		dest[offset1] = src[offset2];
		offset1++;
		offset2++;
	}
	dest[offset1] = '\0';
	return (dest);
}

int	ft_len(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*ptr_str;

	ptr_str = malloc(sizeof(char) * ft_len(src) + 1);
	if (ptr_str == NULL)
		return (NULL);
	ptr_str = ft_strcat(ptr_str, src);
	return (ptr_str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			n;
	t_stock_str	*tab;

	n = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (n < ac)
	{
		tab[n].size = ft_len(av[n]);
		tab[n].str = av[n];
		tab[n].copy = ft_strdup(av[n]);
		n++;
	}
	tab[n].str = 0;
	return (tab);
}
