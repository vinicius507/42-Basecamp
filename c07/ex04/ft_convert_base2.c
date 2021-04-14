/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:50:42 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 00:41:46 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_validate_base(char *base)
{
	int	offset;
	int	offset_search;

	offset = 0;
	while (base[offset] != '\0')
	{
		if (base[offset] == ' ' || base[offset] == '\n' || base[offset] == '\t'
			|| base[offset] == '\r' || base[offset] == '\f'
			|| base[offset] == '\v' || base[offset] == '+'
			|| base[offset] == '-')
			return (0);
		offset++;
	}
	offset = 0;
	while (base[offset + 1] != '\0')
	{
		offset_search = offset;
		while (base[++offset_search] != '\0')
		{
			if (base[offset] == base[offset_search])
				return (0);
		}
		offset++;
	}
	return (1);
}

int		ft_get_int_base(char *base)
{
	int	int_base;

	int_base = 0;
	if (ft_validate_base(base))
	{
		while (base[int_base] != '\0')
			int_base++;
	}
	return (int_base >= 2 ? int_base : 0);
}

int		ft_get_num_digits(char *nbr, char *base_from)
{
	int digits;
	int is_num;
	int offset_base;

	digits = 0;
	while (nbr[digits] != '\0')
	{
		is_num = 0;
		offset_base = 0;
		while (base_from[offset_base] != '\0')
		{
			if (nbr[digits] == base_from[offset_base])
			{
				is_num = 1;
				break ;
			}
			offset_base++;
		}
		if (!is_num)
			break ;
		digits++;
	}
	return (digits);
}

int		ft_get_num_int_base(char nbr, char *base_from)
{
	int	offset_base;

	offset_base = 0;
	while (base_from[offset_base] != '\0')
	{
		if (nbr == base_from[offset_base])
			break ;
		offset_base++;
	}
	return (offset_base);
}
