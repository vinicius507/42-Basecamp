/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 00:27:00 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/04 01:15:39 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int offset;

	offset = 0;
	if (size > 0)
	{
		while (offset < size - 1)
		{
			dest[offset] = src[offset];
			offset++;
		}
		dest[offset] = '\0';
	}
	offset = 0;
	while (src[offset] != '\0')
		offset++;
	return (offset);
}
