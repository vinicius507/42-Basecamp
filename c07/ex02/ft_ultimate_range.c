/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:33:33 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 03:23:12 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ERROR_CODE -1

void	ft_assign_values(int *arr, int min, int n_range)
{
	int	offset;

	offset = 0;
	while (offset < n_range)
	{
		arr[offset] = min + offset;
		offset++;
	}
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int n_range;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	n_range = max - min;
	if (range == NULL)
		return (-1);
	*range = malloc(n_range * sizeof(int));
	if (*range == NULL)
		return (ERROR_CODE);
	ft_assign_values(*range, min, n_range);
	return (n_range);
}
