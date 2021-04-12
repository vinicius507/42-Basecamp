/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:08:28 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 04:26:47 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_SQRT 46341

int	ft_sqrt(int nb)
{
	int n;
	int sqrt;

	if (nb == 0)
		return (0);
	n = nb % 2 == 0 ? 2 : 1;
	sqrt = 0;
	while (n * n <= nb && n < MAX_SQRT)
	{
		if (n * n == nb)
		{
			sqrt = n;
			break ;
		}
		n += 2;
	}
	return (sqrt);
}
