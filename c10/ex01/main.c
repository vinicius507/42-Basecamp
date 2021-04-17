/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:02:01 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 00:55:53 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char *argv[])
{
	int fildes;
	int counter;

	if (argc == 1)
		ft_cat(0);
	counter = 1;
	while (counter < argc)
	{
		if (ft_strcmp(argv[counter], "-"))
		{
			fildes = open(argv[counter], O_RDONLY);
			if (fildes == -1)
				ft_error(argv[0], argv[counter]);
			ft_cat(fildes);
			close(fildes);
		}
		else
			ft_cat(0);
		counter++;
	}
	return (0);
}
