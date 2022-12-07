/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:14:16 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/23 08:47:43 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;
	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void	ft_list_push_front(t_list	**begin_list,void	*data)
{
	t_list	*ref;
	
	ref = ft_create_elen(data);
	ref->next = *begin_list;
	*begin_list = ref;
}
