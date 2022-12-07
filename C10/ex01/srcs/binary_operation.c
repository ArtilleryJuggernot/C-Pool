/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:43:17 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 14:28:11 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <file.h>

/*Pour le >*/
void	str_right(int argc, char *argv[])
{
	int	fd;
	int	fd2;
	int	n;
	int	fdlist[50];
	int	fd_index;

	fd_index = 0;
	n = 2;
	if (argc >= 5)
	{
		while(n <= argc - 2)
		{
			fd = ft_open(argv[1],"readonly");
			if (fd != -1)
			{
				fdlist[fd_index] = fd;
				fd_index++;
			}
			n++;
		}
		fd = ft_open(argv[argc-1],"append");
		n = 0;
		while (n < fd_index)
		{
			ft_append_end_file(fdlist[n],fd);
			n++;
		}

	}
	else
	{
		fd = ft_open(argv[1],"readonly");
		fd2 = ft_open(argv[3],"append");
		if (fd2 == -1)
		{
			open(argv[3],O_CREAT);
			fd2 = ft_open(argv[3],"append");
		}
		ft_write_file(fd,fd2);
	}
}
