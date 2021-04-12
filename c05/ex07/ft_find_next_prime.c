/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:11:26 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 15:42:13 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_SQRT 46341

int	ft_approximate_sqrt(int n)
{
	int sqrt;

	sqrt = 2;
	while (sqrt * sqrt < n && sqrt < MAX_SQRT)
		sqrt++;
	return (sqrt);
}

int	ft_is_prime(int n)
{
	int	temp_div;

	if (n % 2 == 0)
		return (0);
	temp_div = 3;
	while (temp_div <= ft_approximate_sqrt(n))
	{
		if (n % temp_div == 0)
			return (0);
		temp_div += 2;
	}
	return (1);
}

int	ft_find_next_prime(int n)
{
	int test_num;

	if (n <= 2)
		return (2);
	test_num = n % 2 == 0 ? n + 1 : n;
	while (!ft_is_prime(test_num))
		test_num += 2;
	return (test_num);
}
