/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:47:02 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 15:00:25 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_int_base(char *base)
{
	int offset;
	int offset_check;
	int int_base;

	offset = 0;
	while (base[offset] != '\0')
	{
		if (base[offset] == '+' || base[offset] == '-'
				|| base[offset] == ' ' || base[offset] == '\n'
				|| base[offset] == '\f' || base[offset] == '\r'
				|| base[offset] == '\t' || base[offset] == '\v')
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

int	ft_get_number_offset(char *str, char *base)
{
	int offset;
	int offset_base;
	int is_num;

	offset = 0;
	while (*(str + offset) != '\0')
	{
		is_num = 0;
		offset_base = 0;
		while (*(base + offset_base) != '\0')
		{
			if (*(str + offset) == *(base + offset_base))
			{
				is_num = 1;
				break ;
			}
			offset_base++;
		}
		if (!is_num)
			break ;
		offset++;
	}
	return (offset);
}

int	ft_get_number_absolute_value(char *str, char *base, int int_base)
{
	int abs_v;
	int counter;
	int num_size;
	int multiplier;

	abs_v = 0;
	multiplier = 1;
	num_size = ft_get_number_offset(str, base);
	while (str < (str + num_size))
	{
		--num_size;
		counter = 0;
		while (base[counter] != '\0')
		{
			if (*(str + num_size) == base[counter])
				break ;
			counter++;
		}
		abs_v += counter * multiplier;
		multiplier *= int_base;
	}
	return (abs_v);
}

int	ft_atoi_base(char *str, char *base)
{
	int res;
	int sign;
	int int_base;

	int_base = ft_get_int_base(base);
	if (int_base == -1)
		return (0);
	while (*str == ' ' || *str == '\f' || *str == '\n'
			|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		sign *= *str == '-' ? -1 : 1;
		str++;
	}
	res = sign * ft_get_number_absolute_value(str, base, int_base);
	return (res);
}
