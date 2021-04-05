/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:00:46 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 20:10:15 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int pos_x;
	int pos_y;

	pos_y = -1;
	while (++pos_y < y)
	{
		pos_x = -1;
		while (++pos_x < x)
		{
			if ((pos_x == 0 && pos_y == 0) || (pos_x == 0 && pos_y == y - 1)
					|| (pos_y == 0 && pos_x == x - 1)
					|| (pos_y == y - 1 && pos_x == x - 1))
				ft_putchar('o');
			else if (pos_y == 0 || pos_y == y - 1)
				ft_putchar('-');
			else if (pos_x == 0 || pos_x == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
