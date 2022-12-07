/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:01:20 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 23:40:38 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	int	n;
	int	cpt;
	t_list	to_free;
	
	cpt = 0;
	n = 0;
	while(begin_list->next != NULL)
	{
		free_fct(begin_list->str);
		begin_list = begin_list->next;
		n++;
	}
	while (cpt < n)
	{
		to_free = begin_list;
		while(to_free->next != NULL)
		{
			to_free = to_free->next;
		}
		free(to_free);
		cpt++;
	}
}
