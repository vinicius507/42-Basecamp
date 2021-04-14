/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 20:33:48 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/09 20:50:09 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		offset;
	int		str_size;
	char	*str_copy;

	str_size = 0;
	while (str[str_size] != '\0')
		str_size++;
	offset = 0;
	str_copy = malloc(str_size + 1);
	while (offset < str_size)
	{
		str_copy[offset] = str[offset];
		offset++;
	}
	str_copy[offset] = '\0';
	return (str_copy);
}
