/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:40:50 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 16:48:27 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = nb >= 0 ? 1 : 0;
	while (nb > 1)
	{
		res *= nb;
		--nb;
	}
	return (res);
}
