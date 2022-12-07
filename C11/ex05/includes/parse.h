/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:59:48 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/20 22:51:47 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

int	is_number_char(char c);

int	is_number(char *str);

int	is_op(char *c);

int	check_error(char *op, char *s1);
#endif
