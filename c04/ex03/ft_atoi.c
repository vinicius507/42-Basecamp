/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:47:35 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 14:52:02 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int res;
	int sign;

	while (*str == '\n' || *str == '\t' || *str == ' '
			|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		sign *= *str == '-' ? -1 : 1;
		str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	res *= sign;
	return (res);
}
