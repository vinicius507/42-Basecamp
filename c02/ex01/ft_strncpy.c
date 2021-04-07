/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:47:53 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/06 01:52:42 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	offset;

	offset = 0;
	while (offset < n && src[offset] != '\0')
	{
		dest[offset] = src[offset];
		offset++;
	}
	while (offset < n)
		dest[offset++] = '\0';
	return (dest);
}
