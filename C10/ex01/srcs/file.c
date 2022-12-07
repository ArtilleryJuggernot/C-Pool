/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 02:40:03 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 04:39:31 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "print.h"
#include <unistd.h>
#include <fcntl.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s2[n] && s1[n] == s2[n])
	{
		n++;
	}
	return ((unsigned int) s1[n] - (unsigned int)s2[n]);
}

int	ft_open(char *path, char *mode)
{
	if (ft_strcmp(mode,"readonly") == 0)
		return (open(path,O_RDONLY));
	
	if (ft_strcmp(mode,"writeonly") == 0)
		return open(path,O_WRONLY);
	
	if (ft_strcmp(mode,"append") == 0)
		return open(path,O_RDWR);
	return (0);

	if (ft_strcmp(mode,"begin_write") == 0)
		return open(path,O_TRUNC);
}


void	ft_append_end_file(int from, int dest)
{
	char buffer[4096];
	int size;
	int	success;

	size = 4096;
	read(from,buffer,size);
	success = lseek(dest,0,SEEK_END);
	if (success != -1)
		write(dest,buffer,size);
}

void	ft_input_file(int from)
{
	char	buffer[4096];
	int	size;

	size = 4096;
	read(from,buffer,size);
	write(0,buffer,size);
}


void	ft_write_file(int from, int dest)
{
	char	buffer[4096];
	int	size;

	size = 4096;
	read(from,buffer,size);
	write(dest,buffer,size);
}
void	ft_read(int fd)
{
	char buffer[4096];
	int	size;
	
	size = 4096;
	read(fd,buffer,size);
	ft_putstr(1,buffer);
}
