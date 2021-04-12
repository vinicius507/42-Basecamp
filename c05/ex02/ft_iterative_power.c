/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:01:30 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 17:08:13 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = 1;
	while (power--)
		res *= nb;
	return (res);
}
