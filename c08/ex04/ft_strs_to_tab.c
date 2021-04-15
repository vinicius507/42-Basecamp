/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:20:36 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 22:56:42 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *str)
{
	int		offset;
	char	*str_copy;

	offset = 0;
	while (str[offset] != '\0')
		offset++;
	str_copy = malloc(offset + 1);
	offset = 0;
	while (str[offset] != '\0')
	{
		str_copy[offset] = str[offset];
		offset++;
	}
	str_copy[offset] = '\0';
	return (str_copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int						av_n;
	int						offset;
	struct s_stock_str		*res_tab;

	if (ac < 0)
		return (NULL);
	res_tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	av_n = 0;
	while (av_n < ac)
	{
		offset = 0;
		while (av[av_n][offset] != '\0')
			offset++;
		res_tab[av_n].size = offset;
		res_tab[av_n].str = av[av_n];
		res_tab[av_n].copy = ft_strdup(av[av_n]);
		av_n++;
	}
	res_tab[av_n].str = 0;
	return (res_tab);
}
