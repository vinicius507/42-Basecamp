/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:16:45 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 20:18:57 by vgoncalv         ###   ########.fr       */
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
			if (pos_x == 0 && (pos_y == 0 || pos_y == y - 1))
				ft_putchar('A');
			else if (pos_x == x - 1 && (pos_y == 0 || pos_y == y - 1))
				ft_putchar('C');
			else if (pos_x == 0 || pos_x == x - 1
					|| pos_y == 0 || pos_y == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
