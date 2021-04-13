/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyscrapers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:42:38 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 17:59:10 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

t_skyscrapers		*ft_init_state(char *str)
{
	int				row;
	int				column;
	t_skyscrapers	*puzzle;

	puzzle = malloc(sizeof(t_skyscrapers));
	if (puzzle == NULL)
		return (NULL);
	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			puzzle->board[row][column] = 1;
			column++;
		}
		row++;
	}
	puzzle->solved = 0;
	if (ft_get_constraints(puzzle, str) == 0)
	{
		free(puzzle);
		return (NULL);
	}
	return (puzzle);
}

int					ft_validate_constraints(t_skyscrapers *puzzle)
{
	int colup;
	int coldown;
	int rowleft;
	int rowright;

	colup = ft_validate_colup(puzzle);
	coldown = ft_validate_coldown(puzzle);
	rowleft = ft_validate_rowleft(puzzle);
	rowright = ft_validate_rowright(puzzle);
	if (colup == 0 || coldown == 0 || rowleft == 0 || rowright == 0)
		return (0);
	return (1);
}

int					ft_validate_r_c(t_skyscrapers *puzzle, int row, int column)
{
	int r;
	int c;

	r = 0;
	while (r < row)
	{
		if (puzzle->board[r][column] == puzzle->board[row][column])
			return (0);
		r++;
	}
	c = 0;
	while (c < column)
	{
		if (puzzle->board[row][c] == puzzle->board[row][column])
			return (0);
		c++;
	}
	return (1);
}

void				ft_print_board(t_skyscrapers *puzzle)
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			ft_putchar(puzzle->board[row][column] + '0');
			if (column < 3)
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

void				ft_skyscrapers(t_skyscrapers *puzzle, int row, int column)
{
	if (puzzle->solved)
		return ;
	if (puzzle->board[row][column] == 5)
		puzzle->board[row][column] = 1;
	while (puzzle->board[row][column] < 5)
	{
		if (ft_validate_r_c(puzzle, row, column))
		{
			if (row < 3)
				ft_skyscrapers(puzzle, row + 1, column);
			else if (column < 3)
				ft_skyscrapers(puzzle, 0, column + 1);
			else
			{
				if (ft_validate_constraints(puzzle))
				{
					puzzle->solved = 1;
					ft_print_board(puzzle);
				}
			}
		}
		puzzle->board[row][column]++;
	}
}
