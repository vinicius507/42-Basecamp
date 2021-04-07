/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:04:39 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 17:07:38 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int offset;
	int is_uppercase;

	offset = 0;
	is_uppercase = 1;
	while (str[offset] != '\0')
	{
		if (str[offset] < 'A' || str[offset] > 'Z')
		{
			is_uppercase = 0;
			break ;
		}
		offset++;
	}
	return (is_uppercase);
}
