/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:21:50 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/06 18:03:24 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int offset;

	offset = -1;
	while (str[++offset] != '\0')
	{
		if (str[offset] >= 'a' && str[offset] <= 'z')
		{
			if (offset != 0 && ((str[offset - 1] >= 'a'
							&& str[offset - 1] <= 'z')
						|| (str[offset - 1] >= 'A' && str[offset - 1] <= 'Z')
						|| (str[offset - 1] >= '0' && str[offset - 1] <= '9')))
				continue ;
			str[offset] -= 32;
		}
		else if (str[offset] >= 'A' && str[offset] <= 'Z')
		{
			if (offset == 0 || ((str[offset - 1] < 'a' || str[offset - 1] > 'z')
						&& (str[offset - 1] < 'A' || str[offset - 1] > 'z')
						&& (str[offset - 1] < '0' || str[offset - 1] > '9')))
				continue ;
			str[offset] += 32;
		}
	}
	return (str);
}
