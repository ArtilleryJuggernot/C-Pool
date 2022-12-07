/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 07:44:17 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/23 08:05:07 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
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

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	int		i;
	t_list	link;
	i = 0;
	while (**begin_list->next != NULL)
	{
		if (cmp(**begin_list->data,data_ref) == 0)
		{
			if (i > 0)
			{
				link = ft_list_at(i - 1);
				link->next = begin_list->next;
				free_fct(**begin_list->data);
				free(**begin_list);
			}
			else
			{
				free_fct(**begin_list->data);
				free(**begin_list);
			}
		}
		i++;
	}
}
