/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:41:26 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 23:43:45 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
