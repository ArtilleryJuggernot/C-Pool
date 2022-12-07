/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 05:25:39 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/24 20:11:57 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(char *str)
{
	int	n;	

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	ft_lngh(char **strs, int size, char *sep)
{
	int	i;
	int	lng;

	i = 0;
	lng = 0;
	while (i < size)
	{
		lng += ft_len(strs[i]);
		i++;
	}
	lng += (size - 1) * ft_len(sep) + 1;
	return (lng);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	offset1;
	unsigned int	offset2;

	offset1 = 0;
	while (dest[offset1] != '\0')
	{
		offset1++;
	}
	offset2 = 0;
	while (src[offset2] != '\0')
	{
		dest[offset1] = src[offset2];
		offset1++;
		offset2++;
	}
	dest[offset1] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_lngh(strs, size, sep));
	if (str == NULL)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char *strs[3];
	char *str;
	strs[0] = "coucou je suis le programme";
	strs[1] = "shalla je marche";
	strs[2] = "sinon c est chiant en vrai";
		str = ft_strjoin(3, strs, "||,/,/,/,/,/|| ");
	printf("%s\n",str);
	free(str);
}
