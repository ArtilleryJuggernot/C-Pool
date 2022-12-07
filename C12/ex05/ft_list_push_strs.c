/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:46:28 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 22:58:51 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char**strs)
{
	t_list *tab;
	int	n;

	n = 0;
	while (n < size)
	{
		tab[n] = ft_create_elem(*strs[n]);
		n++;
	}
	tab[n]->next = NULL;
	n = 0;
	while(n < size - 1)
	{
		tab[n]->next = tab[n + 1];
		n++;
	}
	return (tab);
}
