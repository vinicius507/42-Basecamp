/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:42:53 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 21:08:32 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# define COL_UP 0
# define COL_DOWN 1
# define ROW_LEFT 2
# define ROW_RIGHT 3

typedef	struct		s_skyscrapers
{
	int board[4][4];
	int constraints[4][4];
	int solved : 1;
}					t_skyscrapers;

void				ft_error(void);

void				ft_putchar(char c);

char				*ft_get_constraints_str(char *str);

int					ft_get_constraints(t_skyscrapers *puzzle, char *str);

int					ft_validate_colup(t_skyscrapers *puzzle);

int					ft_validate_coldown(t_skyscrapers *puzzle);

int					ft_validate_rowleft(t_skyscrapers *puzzle);

int					ft_validate_rowright(t_skyscrapers *puzzle);

void				ft_skyscrapers(t_skyscrapers *puzzle, int row, int column);

t_skyscrapers		*ft_init_state(char *str);

#endif
