/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:02:04 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 01:10:25 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX_DIGITS 10

static char		*ft_nbr_string(int nb, int digits)
{
	static char	nbr_s[MAX_DIGITS];

	nb *= nb < 0 ? 1 : -1;
	while (digits--)
	{
		nbr_s[digits] = (nb % 10) * -1 + '0';
		nb /= 10;
	}
	return (nbr_s);
}

void			ft_putnbr(int nb)
{
	int		digits;
	int		counter;
	char	*nbr_s;

	digits = 1;
	counter = nb;
	while (counter /= 10)
		digits++;
	nbr_s = ft_nbr_string(nb, digits);
	if (nb < 0)
		write(1, "-", 1);
	write(1, nbr_s, digits);
}
