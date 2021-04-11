/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:01:19 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/05 16:27:51 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	offset;
	unsigned int	dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	offset = 0;
	while (offset < nb && src[offset] != '\0')
	{
		dest[dest_size + offset] = src[offset];
		offset++;
	}
	dest[dest_size + offset] = '\0';
	return (dest);
}
