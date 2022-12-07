/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:13:25 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/22 00:16:56 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	while(begin_list->next != NULL)
	{
		if (cmp(begin_list) == 0)
			f(begin_list);
		begin_list = begin_list->next;
	}
	if (cmp(begin_list) == 0)
		f(begin_list);
}
