/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 03:43:39 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 04:40:53 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

int	ft_open(char *path, char *mode);

void	ft_read(int fd);

void	ft_write_file(int from, int dest);

int	ft_strcmp(char *s1, char *s2);

void	ft_append_end_file(int from, int dest);

void	ft_input_file(int from);
#endif
