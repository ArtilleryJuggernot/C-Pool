/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 01:11:18 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/12 10:59:53 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_tab(char **tab, int size)
{
	int		i;
	char	*val1_buff;
	char	*val2_buff;

	i = 1;
	while (i <= size)
	{
		val1_buff = tab[i];
		val2_buff = tab[i + 1];
		if (i <= size - 2 && ft_strcmp(val1_buff, val2_buff) > 0)
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*name;

	name = argv[0];
	ft_sort_tab(argv, argc);
	i = 0;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], name) != 0)
			ft_putstr(argv[i]);
		i++;
	}	
}
