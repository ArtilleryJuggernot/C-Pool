/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 08:53:05 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/23 09:51:53 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_list_size(t_list	*begin_list)
{
	int	n;

	n = 0;
	while(begin_list->next != NULL)
		n++;
	return (n);
}

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



void	ft_list_reverse_fun(t_list *begin_list)
{
	int	size;
	int	n;
	t_list *elem;

	n = 0;
	size = ft_list_size(begin_list);
	while(n < size -1)
	{
		elem = ft_list_at(size - 1 - n);
		elem->next = ft_list_at(size - 1 - n - 1);
		n++;
	}
}
