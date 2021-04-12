/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:31:15 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 15:08:36 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX_DIGITS 32

int				ft_get_nbr_int_base(char *base)
{
	int offset;
	int offset_check;
	int int_base;

	offset = 0;
	while (base[offset] != '\0')
	{
		if (base[offset] == '+' || base[offset] == '-')
			return (-1);
		offset_check = 1;
		while (base[offset + offset_check] != '\0')
		{
			if (base[offset] == base[offset + offset_check])
				return (-1);
			offset_check++;
		}
		offset++;
	}
	int_base = 0;
	while (base[int_base] != '\0')
		int_base++;
	return (int_base >= 2 ? int_base : -1);
}

static char		*ft_nbr_string(int nb, int int_base, char *base, int digits)
{
	static char nbr_s[MAX_DIGITS];

	nb *= nb < 0 ? 1 : -1;
	while (digits--)
	{
		nbr_s[digits] = base[(nb % int_base) * -1];
		nb /= int_base;
	}
	return (nbr_s);
}

void			ft_putnbr_base(int nb, char *base)
{
	int		digits;
	int		counter;
	int		int_base;
	char	*nbr_s;

	int_base = ft_get_nbr_int_base(base);
	if (int_base == -1)
		return ;
	digits = 1;
	counter = nb;
	while (counter /= int_base)
		digits++;
	nbr_s = ft_nbr_string(nb, int_base, base, digits);
	if (nb < 0)
		write(1, "-", 1);
	write(1, nbr_s, digits);
}
