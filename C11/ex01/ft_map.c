/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:17:26 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/20 16:15:14 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	n;
	int	*arr;

	n = 0;
	arr = malloc(sizeof(int) * length);
	while (n < length)
	{
		arr[n] = f(tab[n]);
		n++;
	}
	return (arr);
}
