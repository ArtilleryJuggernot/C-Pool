/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:31:22 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 20:40:05 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	rez;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	rez = 1;
	while (nb != 1)
	{
		rez *= nb;
		nb--;
	}
	return (rez);
}
