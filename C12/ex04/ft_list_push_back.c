/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:39:05 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 22:48:37 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "f_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ref;
	
	ref = *begin_list;
	while(ref->next != NULL)
		ref = ref->next;
	ref->next = ft_create_elen(data);
}
