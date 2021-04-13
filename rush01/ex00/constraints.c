/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:42:27 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 20:48:10 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "rush.h"

int	ft_get_constraints(t_skyscrapers *puzzle, char *str)
{
	int		constraint;
	int		position;
	char	*c_str;

	c_str = ft_get_constraints_str(str);
	if (c_str == NULL)
		return (0);
	constraint = COL_UP;
	while (constraint <= ROW_RIGHT)
	{
		position = 0;
		while (position < 4)
		{
			puzzle->constraints[constraint][position] = *c_str - '0';
			position++;
			c_str++;
		}
		constraint++;
	}
	return (1);
}

int	ft_validate_colup(t_skyscrapers *puzzle)
{
	int c;
	int r;
	int constraint;
	int current;

	c = 0;
	while (c < 4)
	{
		constraint = puzzle->constraints[COL_UP][c];
		current = 0;
		r = 0;
		while (r < 4)
		{
			if (current < puzzle->board[r][c])
			{
				constraint--;
				current = puzzle->board[r][c];
			}
			r++;
		}
		c++;
		if (constraint != 0)
			return (0);
	}
	return (1);
}

int	ft_validate_coldown(t_skyscrapers *puzzle)
{
	int c;
	int r;
	int constraint;
	int current;

	c = 3;
	while (c >= 0)
	{
		constraint = puzzle->constraints[COL_DOWN][c];
		current = 0;
		r = 3;
		while (r >= 0)
		{
			if (current < puzzle->board[r][c])
			{
				constraint--;
				current = puzzle->board[r][c];
			}
			r--;
		}
		c--;
		if (constraint != 0)
			return (0);
	}
	return (1);
}

int	ft_validate_rowleft(t_skyscrapers *puzzle)
{
	int c;
	int r;
	int constraint;
	int current;

	r = 0;
	while (r < 4)
	{
		constraint = puzzle->constraints[ROW_LEFT][r];
		current = 0;
		c = 0;
		while (c < 4)
		{
			if (current < puzzle->board[r][c])
			{
				constraint--;
				current = puzzle->board[r][c];
			}
			c++;
		}
		r++;
		if (constraint != 0)
			return (0);
	}
	return (1);
}

int	ft_validate_rowright(t_skyscrapers *puzzle)
{
	int c;
	int r;
	int constraint;
	int current;

	r = 3;
	while (r >= 0)
	{
		constraint = puzzle->constraints[ROW_RIGHT][r];
		current = 0;
		c = 3;
		while (c >= 0)
		{
			if (current < puzzle->board[r][c])
			{
				constraint--;
				current = puzzle->board[r][c];
			}
			c--;
		}
		r--;
		if (constraint != 0)
			return (0);
	}
	return (1);
}
