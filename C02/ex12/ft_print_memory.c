/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:27:35 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/18 17:24:07 by hjacquel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_nbr16(long nb)
{
	char	c;
	char	*base;

	if (!nb)
		return ;
	base = "0123456789abcdef";
	c = nb % 16;
	print_nbr16(nb / 16);
	write(1, base + c, 1);
}

void	print_addr(long addr)
{
	long	i;

	i = 0x1000000000000000;
	while (addr < i)
	{
		write(1, "0", 1);
		i /= 0x10;
	}
	print_nbr16(addr);
}

int	print_text(char *ptr)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (!ptr[i])
			return (0);
		if (ptr[i] >= ' ' && ptr[i] <= '~')
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	return (1);
}

int	print_line(char *ptr)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (!ptr[i])
		{
			while (i < 16)
			{
				write(1, "  ", 2);
				if (i++ % 2 != 0)
					write(1, " ", 1);
			}
			return (print_text(ptr));
		}
		if (ptr[i] <= 16)
			write(1, "0", 1);
		print_nbr16((long) ptr[i]);
		if (i++ % 2 != 0)
			write(1, " ", 1);
	}
	return (print_text(ptr));
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*ptr;

	ptr = (char *) addr;
	if (size == 0)
		return (addr);
	while (1)
	{
		print_addr((long) ptr);
		write(1, ": ", 2);
		if (!print_line(ptr))
		{
			write(1, "\n", 1);
			break ;
		}
		ptr += 16;
		write(1, "\n", 1);
	}
	return (addr);
}
