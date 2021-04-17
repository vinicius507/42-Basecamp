/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:21:01 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 21:09:28 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char *argv[])
{
	int fildes;

	if (argc == 1)
		return (ft_error(NO_FILENAME));
	else if (argc > 2)
		return (ft_error(TOO_MANY_ARGS));
	fildes = open(argv[1], O_RDONLY);
	if (fildes == -1)
		return (ft_error(CANT_READ_FILE));
	ft_display_file(fildes);
	close(fildes);
	return (0);
}
