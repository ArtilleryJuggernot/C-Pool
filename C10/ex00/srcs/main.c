/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 02:39:52 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/20 04:05:19 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "error.h"
#include "file.h"
int	main(int argc, char *argv[])
{
	int		fd;
	if (argc < 2)
	{
		ft_missing_name();
		return (1);
	}
	
	if (argc == 2)
	{
		fd = ft_open(argv[1],"readonly");
		if (fd == -1)
		{
			ft_unreadable();
			return (1);
		}
		ft_read(fd);
		return (0);
	}
	if (argc > 2)
	{
		ft_too_many_argz();
		return (1);
	}
	return (0);
}
