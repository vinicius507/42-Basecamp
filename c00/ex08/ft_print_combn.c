/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 02:43:55 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/04 02:31:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int		i;
	char	nbr[n];

	i = -1;
	while (++i < n)
		nbr[i] = i != n - 1 ? '0' + i : '0' + i - 1;
	while (nbr[0] != '9' + 1 - n)
	{
		i = -1;
		while (n > ++i)
		{
			if (i != 0 && nbr[i] == '9' - n + 1 + i)
				nbr[i] = nbr[i - 1] == '9' - n + i ? nbr[i] : nbr[i - 1] + 1;
			else
			{
				if (i != n - 1)
					nbr[i] += nbr[i + 1] == '9' - n + i + 2 ? 1 : 0;
				else
					nbr[i]++;
			}
		}
		write(1, &nbr, n);
		if (nbr[0] != '9' + 1 - n)
			write(1, ", ", 2);
	}
}
