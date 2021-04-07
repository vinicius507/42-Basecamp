/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:56:42 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 16:58:17 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int offset;
	int is_lowercase;

	offset = 0;
	is_lowercase = 1;
	while (str[offset] != '\0')
	{
		if (str[offset] < 'a' || str[offset] > 'z')
		{
			is_lowercase = 0;
			break ;
		}
		offset++;
	}
	return (is_lowercase);
}
