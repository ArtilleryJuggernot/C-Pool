/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 02:53:24 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/20 03:01:30 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "print.h"

void	ft_missing_name()
{
	ft_putstr(2, "File name missing.");
}

void	ft_too_many_argz()
{
	ft_putstr(2, "Too many arguments.");
}

void	ft_unreadable()
{
	ft_putstr(2, "Cannot read file.");
}
