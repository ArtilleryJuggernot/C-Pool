/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 02:40:03 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/20 03:50:08 by hjacquel         ###   ########lyon.fr   */
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
}

int	ft_read(int fd)
{
	char buffer[4096];
	int	size;
	
	size = 4096;
	read(fd,buffer,size);
	ft_putstr(1,buffer);
	return (0);
}
