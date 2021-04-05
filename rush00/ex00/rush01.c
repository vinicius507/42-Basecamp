/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:29:15 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 19:53:40 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int pos_x;
	int	pos_y;

	pos_y = -1;
	while (++pos_y < y)
	{
		pos_x = -1;
		while (++pos_x < x)
		{
			if (pos_x == 0 && pos_y == 0)
				ft_putchar('/');
			else if ((pos_x == x - 1 && pos_y == 0)
					|| (pos_x == 0 && pos_y == y - 1))
				ft_putchar('\\');
			else if (pos_x == x - 1 && pos_y == y - 1)
				ft_putchar('/');
			else if (pos_x == 0 || pos_x == x - 1
					|| pos_y == 0 || pos_y == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
