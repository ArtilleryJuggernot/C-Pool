/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:47:08 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/21 04:41:12 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
/*Permet de detecter les char speciaux comme * ou ?
 *Renvoie ? * ou ' '*/

#include "file.h"
int	special_char(char **str, int index)
{
	int	n;

	n = 0;
	while (n < index)
	{
		if (ft_strcmp(str[n],">") == 0)
			return (1);
		if (ft_strcmp(str[n],">>") == 0)
			return (2);
		if (ft_strcmp(str[n],"<") == 0)
			return (3);
		n++;
	}
	return (0);
}
