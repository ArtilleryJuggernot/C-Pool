/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:50:22 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/11 15:39:13 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*dst;
	char	*len_t;
	char	*s;

	dst = dest;
	len_t = dest + size;
	s = src;
	while (*s && dst < len_t)
		*dst++ = *s++;
	if (dst < len_t)
		*dst = 0;
	else if (size > 0)
		dst[-1] = 0;
	while (*s)
		s++;
	return (s - src);
}
