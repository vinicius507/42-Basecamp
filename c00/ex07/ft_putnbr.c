/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:45:37 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/02 02:57:21 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		counter;
	int		digits;
	int		divider;
	char	n[11];
	int		index;

	digits = nb >= 0 ? 1 : 2;
	divider = 1;
	counter = nb;
	while (counter /= 10)
	{
		digits++;
		divider *= 10;
	}
	n[0] = nb >= 0 ? nb / divider : '-';
	index = nb >= 0 ? -1 : 0;
	nb *= nb >= 0 ? -1 : 1;
	while (++index < digits)
	{
		n[index] = (nb / divider) * -1 + '0';
		nb %= divider;
		divider /= 10;
	}
	write(1, &n, digits);
}
