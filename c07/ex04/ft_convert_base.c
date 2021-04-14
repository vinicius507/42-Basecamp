/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:54:07 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 00:44:57 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define MAX_DIGITS 32

int		ft_get_int_base(char *base);
int		ft_validate_base(char *base);
int		ft_get_num_digits(char *nbr, char *base_from);
int		ft_get_num_int_base(char nbr, char *base_from);

char	*ft_get_converted(int int_nbr, char *base_to, int int_base_to, int sign)
{
	int		digits;
	char	*s_nbr;
	int		counter;
	int		limit;

	digits = 1;
	counter = int_nbr;
	while (counter /= int_base_to)
		digits++;
	if (sign == -1 && int_nbr != 0)
		digits++;
	s_nbr = malloc(digits + 1);
	limit = sign == -1 && int_nbr != 0 ? 1 : 0;
	s_nbr[digits] = '\0';
	while (--digits >= limit)
	{
		s_nbr[digits] = base_to[(int_nbr % int_base_to) * -1];
		int_nbr /= int_base_to;
	}
	if (limit == 1)
		s_nbr[0] = '-';
	return (s_nbr);
}

int		ft_get_int_nbr(char *nbr, char *base_from, int int_base_from)
{
	int offset;
	int digits;
	int int_nbr;

	offset = 0;
	int_nbr = 0;
	digits = ft_get_num_digits(nbr, base_from);
	while (offset < digits)
	{
		int_nbr *= int_base_from;
		int_nbr -= ft_get_num_int_base(nbr[offset], base_from);
		offset++;
	}
	return (int_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	int		int_nbr;
	int		int_base_to;
	int		int_base_from;
	char	*converted_number;

	int_base_to = ft_get_int_base(base_to);
	int_base_from = ft_get_int_base(base_from);
	if (!int_base_to || !int_base_from)
		return (NULL);
	while (*nbr == '\n' || *nbr == ' ' || *nbr == '\t' || *nbr == '\f'
			|| *nbr == '\r' || *nbr == '\v')
		nbr++;
	sign = 1;
	while (*nbr == '+' || *nbr == '-')
	{
		sign *= *nbr == '-' ? -1 : 1;
		nbr++;
	}
	int_nbr = ft_get_int_nbr(nbr, base_from, int_base_from);
	converted_number = ft_get_converted(int_nbr, base_to, int_base_to, sign);
	return (converted_number);
}
