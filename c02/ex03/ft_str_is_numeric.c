/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:49:24 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 16:52:48 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int offset;
	int is_num;

	offset = 0;
	is_num = 1;
	while (str[offset] != '\0')
	{
		if (str[offset] < '0' || str[offset] > '9')
		{
			is_num = 0;
			break ;
		}
		offset++;
	}
	return (is_num);
}
