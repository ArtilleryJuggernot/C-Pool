/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:28:42 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 20:38:22 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2147483647)
		return (1);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	i = 3;
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}