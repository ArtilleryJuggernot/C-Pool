/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:08:47 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/22 00:10:06 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list->next != NULL)
	{
		f(begin_list);
		begin_list = begin_list->next;
	}
	f(begin_list);
}
