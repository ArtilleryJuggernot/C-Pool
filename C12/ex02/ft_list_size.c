/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:58:18 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 17:59:10 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list	*begin_list)
{
	int	n;

	n = 0;
	while(begin_list->next != NULL)
		n++;
	return (n);
}