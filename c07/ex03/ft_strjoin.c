/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:38 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 03:25:36 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int		ft_get_res_str_size(int size, char **strs, char *sep)
{
	int				str_n;
	unsigned int	offset;
	unsigned int	char_counter;
	unsigned int	sep_length;

	if (size <= 0)
		return (1);
	str_n = 0;
	char_counter = 0;
	while (str_n < size)
	{
		offset = 0;
		while (strs[str_n][offset] != '\0')
		{
			char_counter++;
			offset++;
		}
		str_n++;
	}
	sep_length = 0;
	while (sep[sep_length] != '\0')
		sep_length++;
	return (char_counter + (sep_length * (size - 1)) + 1);
}

void				ft_strcat(char *dest, char *src)
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
}

char				*ft_strjoin(int size, char **strs, char *sep)
{
	int				str_n;
	unsigned int	res_size;
	char			*res_string;

	res_size = ft_get_res_str_size(size, strs, sep);
	res_string = malloc(res_size);
	res_string[0] = '\0';
	str_n = 0;
	while (str_n < size)
	{
		ft_strcat(res_string, strs[str_n]);
		str_n++;
		if (str_n < size)
			ft_strcat(res_string, sep);
	}
	return (res_string);
}
