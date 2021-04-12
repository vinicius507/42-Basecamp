/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:27:23 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 19:00:52 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(int *board)
{
	int column;

	column = 0;
	while (column < 10)
	{
		ft_putchar(board[column] + '0');
		column++;
	}
	ft_putchar('\n');
}

int		ft_validate(int *board, int queen)
{
	int previous_queen;

	previous_queen = -1;
	while (++previous_queen < queen)
	{
		if (board[previous_queen] == board[queen])
			return (0);
	}
	previous_queen = -1;
	while (++previous_queen < queen)
	{
		if ((queen - previous_queen)
				- (board[queen] - board[previous_queen]) == 0)
			return (0);
	}
	previous_queen = -1;
	while (++previous_queen < queen)
	{
		if ((queen - previous_queen)
				+ (board[queen] - board[previous_queen]) == 0)
			return (0);
	}
	return (1);
}

int		ft_do_puzzle(int *board, int queen)
{
	int ret_counter;

	if (board[queen] == 10)
		board[queen] = 0;
	ret_counter = 0;
	while (board[queen] < 10)
	{
		if (ft_validate(board, queen))
		{
			if (queen < 9)
				ret_counter += ft_do_puzzle(board, queen + 1);
			else
			{
				ret_counter++;
				ft_print_board(board);
			}
		}
		board[queen]++;
	}
	return (ret_counter);
}

int		ft_ten_queens_puzzle(void)
{
	int piece;
	int board[10];
	int solutions;

	piece = -1;
	while (++piece < 10)
		board[piece] = 0;
	solutions = ft_do_puzzle(board, 0);
	return (solutions);
}
