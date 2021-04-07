/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 01:17:17 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/05 14:42:56 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char g_hexa_lookup_table[16] = {
	'0', '1', '2', '3', '4', '5', '6', '7',
	'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
};

void	ft_print_ascii_hexa(unsigned int n)
{
	unsigned char	hexa[2];
	unsigned int	temp_size;

	temp_size = 2;
	while (temp_size--)
	{
		hexa[temp_size] = g_hexa_lookup_table[n % 16];
		n /= 16;
	}
	write(1, &hexa[0], 2);
}

void	ft_putstr_non_printable(char *str)
{
	int		offset;

	offset = 0;
	while (*(str + offset) != '\0')
	{
		if ((unsigned char)*(str + offset) < 32
				|| (unsigned char)*(str + offset) > 126)
		{
			write(1, "\\", 1);
			ft_print_ascii_hexa(*(unsigned int *)(str + offset));
		}
		else
			write(1, (str + offset), 1);
		offset++;
	}
}
