/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:14:25 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/20 16:15:47 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	n;
	int	cpt;

	n = 0;
	cpt = 0;
	while (n < length)
	{
		if (f(tab[n]) != 0)
			cpt++;
		n++;
	}
	return (cpt);
}
