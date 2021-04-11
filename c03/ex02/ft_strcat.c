/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:05:37 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/05 16:30:30 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int offset;
	unsigned int dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	offset = 0;
	while (src[offset] != '\0')
	{
		dest[dest_size + offset] = src[offset];
		offset++;
	}
	dest[dest_size + offset] = '\0';
	return (dest);
}
