/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:54:56 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 22:50:11 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
#include <stdlib.h>
typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

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

#endif
