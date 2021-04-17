/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:45:22 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 00:56:42 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_putstr(char *str)
{
	int offset;

	offset = 0;
	while (str[offset] != '\0')
		offset++;
	write(1, str, offset);
}

int		ft_strcmp(char *s1, char *s2)
{
	int offset;

	offset = 0;
	while (s1[offset] == s2[offset] && s1[offset] && s2[offset])
		offset++;
	return ((unsigned char)s1[offset] - (unsigned char)s2[offset]);
}

void	ft_print_basename(char *path)
{
	char *name;

	name = basename(path);
	while (*name)
		write(1, name++, 1);
	write(1, ": ", 2);
}

void	ft_error(char *ft_cat, char *path)
{
	char *err_str;

	err_str = strerror(errno);
	ft_print_basename(ft_cat);
	ft_print_basename(path);
	ft_putstr(err_str);
	ft_putstr("\n");
}
