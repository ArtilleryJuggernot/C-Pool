/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 08:28:40 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/23 08:44:58 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int		ft_list_len(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	t_list	*val1_buff;
	t_list	*val2_buff;
	int		size;

	size = ft_list_len(*begin_list);
	i = 1;
	while (i <= size)
	{
		val1_buff = ft_list_at(*begin_list,i);
		val2_buff = ft_list_at(*begin_list,i);
		if (i <= size - 2 && ft_strcmp(val1_buff, val2_buff) > 0)
		{
			ft_list_at(*begin_list, i) = val2_buff;
			ft_list_at(*begin_list, i + 1) = val1_buff;
			i = 0;
		}
		else
			i++;
	}
}
