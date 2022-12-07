/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 02:39:52 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 15:21:23 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "error.h"
#include "file.h"
#include "parse.h"
#include "binary_operation.h"
#include <fcntl.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	fd;
	int	fd2;
	int	index;
	int	option;
	
	index = 1;	
	if (argc < 2)
	{
		ft_missing_name();
		return (1);
	}
	
	if (argc >= 2)
	{
		option = special_char(argv, argc - 1);
		
		/* > operator*/	
		if (option == 1)
		{
			str_right(argc,argv);
		}
		else if(option == 2)
		{
			fd = ft_open(argv[1],"readonly");
			fd2 = ft_open(argv[3],"append");
			if (fd2 == -1)
			{
				open(argv[3],O_CREAT);
				fd2 = ft_open(argv[3],"append");
			}
			ft_append_end_file(fd,fd2);
			return (0);
		}
		else if(option == 3)
		{
			fd = ft_open(argv[1],"readonly");
			ft_input_file(fd);
		}
		else
		{
			while (index <= argc - 1)
			{
				fd = ft_open(argv[index],"readonly");
				if (fd == -1)
					ft_missing_name(argv[index]);
				else
					ft_read(fd);
				index++;
			}
			return (0);
		}
	}
	return (0);
}
