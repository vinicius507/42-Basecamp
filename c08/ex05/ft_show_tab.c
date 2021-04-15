/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:00:03 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 13:30:06 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nbr)
{
	int		digits;
	int		counter;
	char	s_nbr[32];

	digits = 1;
	counter = nbr;
	while (counter /= 10)
		digits++;
	counter = digits;
	while (counter--)
	{
		s_nbr[counter] = (nbr % 10) + '0';
		nbr /= 10;
	}
	write(1, s_nbr, digits);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int counter;

	counter = 0;
	while (par[counter].str != 0)
	{
		ft_putstr(par[counter].str);
		ft_putnbr(par[counter].size);
		ft_putstr(par[counter].copy);
		counter++;
	}
}
