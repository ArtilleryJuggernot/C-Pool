/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:07:50 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 17:57:33 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
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
