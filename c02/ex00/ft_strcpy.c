/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:21:21 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 21:07:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int offset;

	offset = 0;
	while (src[offset] != '\0')
	{
		dest[offset] = src[offset];
		offset++;
	}
	dest[offset] = '\0';
	return (dest);
}
