/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:49:12 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 00:38:21 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void		ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

t_error		ft_error(t_error error)
{
	if (error == NO_FILENAME)
		ft_putstr("File name missing.\n");
	else if (error == TOO_MANY_ARGS)
		ft_putstr("Too many arguments.\n");
	else if (error == CANT_READ_FILE)
		ft_putstr("Cannot read file.\n");
	return (error);
}
