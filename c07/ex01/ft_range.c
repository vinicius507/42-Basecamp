/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:15:54 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/09 21:25:37 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *nbrs;
	int range;
	int offset;

	if (max <= min)
		return (0);
	range = max - min;
	nbrs = malloc(range * sizeof(int));
	offset = 0;
	while (offset < range)
	{
		nbrs[offset] = min + offset;
		offset++;
	}
	return (nbrs);
}
