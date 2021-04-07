/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:08:01 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 21:10:33 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int offset;

	offset = 0;
	while (str[offset] != '\0')
	{
		if (str[offset] >= 'A' && str[offset] <= 'Z')
			str[offset] += 32;
		offset++;
	}
	return (str);
}
