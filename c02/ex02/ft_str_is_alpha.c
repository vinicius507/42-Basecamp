/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:30:34 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/06 18:06:15 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int offset;
	int is_alpha;

	offset = 0;
	is_alpha = 1;
	while (str[offset] != '\0')
	{
		if (!((str[offset] >= 'a' && str[offset] <= 'z')
					|| (str[offset] >= 'A' && str[offset] <= 'Z')))
		{
			is_alpha = 0;
			break ;
		}
		offset++;
	}
	return (is_alpha);
}
