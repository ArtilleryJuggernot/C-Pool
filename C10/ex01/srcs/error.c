/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 02:53:24 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 14:46:21 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "print.h"

void	ft_missing_name(char *str)
{
	ft_putstr(2, "ft_cat: ");
	ft_putstr(2, str);
	ft_putstr(2, ": ");
	ft_putstr(2, "No such file or directory");
}

void	ft_too_many_argz()
{
	ft_putstr(2, "Too many arguments.");
}

void	ft_unreadable()
{
	ft_putstr(2, "Cannot read file.");
}
