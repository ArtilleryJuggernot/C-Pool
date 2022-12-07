/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:55:03 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/23 10:36:32 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;
	int		flag;
	
	flag = 1;
	elem = ft_create_elem(data);
	while (**begin_list->next != NULL && flag)
	{
		if (cmp(begin_list->data,elem->data) >= 0)
		{
			elem->next = begin_list->next;
			begin_list->next = elem;
			flag = 0;
		}
	}
}
