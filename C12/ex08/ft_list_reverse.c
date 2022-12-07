/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:45:53 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 23:50:31 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list	*begin_list)
{
	int	n;

	n = 0;
	while(begin_list->next != NULL)
		n++;
	return (n);
}

t_list	*ft_list_at(t_list *begin, unsigned int nbr)
{
	t_list	search;
	int	n;

	n = 0;
	search = begin;
	while(n != nbr)
	{
		search = search->next;
		n++;
	}
	return (search);
}



void	ft_list_reverse(t_list	**begin_list)
{
	int	i;
	t_list temp;
	int	size;

	size = ft_list_size(*begin_list);
	i = 0;
	while (i < size / 2)
	{
		temp = ft_list_at(*begin_list,i);
		ft_list_at(*begin_list,i) = ft_list_at(*begin_list,size - i - 1);
		ft_list_at(*begin_list,size - i - 1) = temp;
		i++;
	}
}
