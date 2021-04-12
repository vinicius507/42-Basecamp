/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:39:36 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 18:42:26 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int counter;
	int is_prime;

	if (nb <= 1)
		return (0);
	counter = 2;
	is_prime = 1;
	while (counter < nb)
	{
		if (nb % counter == 0)
		{
			is_prime = 0;
			break ;
		}
		counter++;
	}
	return (is_prime);
}
