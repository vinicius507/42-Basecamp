/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:42:46 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 20:55:10 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

char	*ft_get_constraints_str(char *str)
{
	int		offset;
	char	*c_str;

	c_str = malloc(17);
	offset = 0;
	while (*str != '\0' && c_str != NULL)
	{
		if (*str >= '1' && *str <= '4')
		{
			if (offset > 16)
				break ;
			c_str[offset] = *str;
			offset++;
		}
		else if (*str != ' ' && (*str < '1' || *str > '4'))
			break ;
		str++;
	}
	if (offset != 16)
	{
		free(c_str);
		return (NULL);
	}
	c_str[offset] = '\0';
	return (c_str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
