/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:26:39 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/22 01:55:08 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	des;

	i = 0;
	asc = 0;
	des = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			asc++;
		if (f(tab[i], tab[i + 1]) <= 0)
			des++;
		i++;
	}
	if (asc == i || des == i)
		return (1);
	return (0);
}
