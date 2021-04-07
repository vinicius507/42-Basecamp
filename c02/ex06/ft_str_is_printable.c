/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:30:31 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 20:44:57 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int offset;
	int is_printable;

	offset = 0;
	is_printable = 1;
	while (str[offset] != '\0')
	{
		if (str[offset] < 32 || str[offset] >= 127)
		{
			is_printable = 0;
			break ;
		}
		offset++;
	}
	return (is_printable);
}
