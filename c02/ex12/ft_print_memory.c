/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:57:19 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/06 16:14:35 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char g_hexa_lookup[16] = {
	'0', '1', '2', '3', '4', '5', '6', '7',
	'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
};

void			ft_put_printable_char(unsigned char c)
{
	if (c < 32 || c > 126)
		write(1, ".", 1);
	else
		write(1, &c, 1);
}

void			ft_print_hexa(unsigned long int n, unsigned int size)
{
	unsigned char	hexa[16];
	unsigned int	temp_size;

	temp_size = size;
	while (temp_size--)
	{
		hexa[temp_size] = g_hexa_lookup[n % 16];
		n /= 16;
	}
	write(1, &hexa[0], size);
}

void			ft_print_addr(void *addr)
{
	unsigned long int int_addr;

	int_addr = (unsigned long int)(addr);
	ft_print_hexa(int_addr, 16);
	write(1, ": ", 2);
}

void			ft_print_hexa_content(void *addr, unsigned int should_print)
{
	if (should_print)
		ft_print_hexa(*(unsigned long int *)(addr), 2);
	else
		write(1, "  ", 2);
}

void			*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		offset_addr;
	unsigned int		offset_hexa;
	unsigned int		offset_content;

	offset_addr = 0;
	while (offset_addr < size)
	{
		ft_print_addr(addr + offset_addr);
		offset_hexa = offset_addr;
		while (offset_hexa < 16 + offset_addr)
		{
			ft_print_hexa_content((addr + offset_hexa),
					size > offset_hexa ? 1 : 0);
			ft_print_hexa_content((addr + offset_hexa + 1),
					size > offset_hexa + 1 ? 1 : 0);
			ft_put_printable_char(' ');
			offset_hexa += 2;
		}
		offset_content = offset_addr;
		while (offset_content < 16 + offset_addr && offset_content < size)
			ft_put_printable_char(*(unsigned char *)(addr + offset_content++));
		write(1, "\n", 1);
		offset_addr += 16;
	}
	return (addr);
}
