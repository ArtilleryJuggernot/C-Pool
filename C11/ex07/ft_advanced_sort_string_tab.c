/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:36 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 16:29:50 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_tab(char **tab, int size, int (*cmp) (char *, char *))
{
	int		i;
	char	*val1_buff;
	char	*val2_buff;

	i = 0;
	while (i <= size)
	{
		val1_buff = tab[i];
		val2_buff = tab[i + 1];
		if (i <= size - 2 && cmp(val1_buff, val2_buff) > 0)
		{
			tab[i] = val2_buff;
			tab[i + 1] = val1_buff;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int	ft_strlen(char **tab)
{
	int	n;

	n = 0;
	while (tab[n])
	{
		n++;
	}
	return (n);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*) )
{
	int	i;

	i = ft_strlen(tab);
	ft_sort_tab(tab, i, cmp);
	tab[i] = NULL;
}
