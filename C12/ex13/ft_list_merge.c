/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 08:08:06 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/23 08:27:27 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	while(**begin_list1->next != NULL)
		begin_list1 = begin_list1->next;
	begin_list1->next = begin_list2;
}
