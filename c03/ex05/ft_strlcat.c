/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:07:47 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/05 23:39:00 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int offset;
	unsigned int src_size;
	unsigned int dest_size;

	dest_size = 0;
	while (dest_size < size && dest[dest_size] != '\0')
		dest_size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (dest_size < size)
	{
		offset = 0;
		while (dest_size + offset < size - 1 && src[offset] != '\0')
		{
			dest[dest_size + offset] = src[offset];
			offset++;
		}
		dest[dest_size + offset] = '\0';
	}
	return (dest_size + src_size);
}
