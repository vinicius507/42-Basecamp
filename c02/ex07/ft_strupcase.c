/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:47:47 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 21:00:11 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int offset;

	offset = 0;
	while (str[offset] != '\0')
	{
		if (str[offset] >= 'a' && str[offset] <= 'z')
		{
			str[offset] = str[offset] - 32;
		}
		offset++;
	}
	return (str);
}
