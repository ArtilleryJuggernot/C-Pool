/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:37:00 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/23 10:39:57 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_sorted_list_insert(t_list **begin_list,*t_list elem, int (*cmp)())
{
	int		flag;

	flag = 1;
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	while(begin_list2->next != NULL)
	{
		ft_sorted_list_insert(begin_list1,begin_list2,cmp);
		begin_list2 = begin_list2->next;
	}
}
