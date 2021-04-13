/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:40:24 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 16:28:05 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

void	ft_bubble_sort(char **args, int size)
{
	int		offset1;
	int		offset2;
	char	*temp;

	offset1 = 0;
	while (offset1 < size - 1)
	{
		offset2 = 0;
		while (offset2 < size - 1 - offset1)
		{
			if (ft_strcmp(args[offset2], args[offset2 + 1]) > 0)
			{
				temp = args[offset2];
				args[offset2] = args[offset2 + 1];
				args[offset2 + 1] = temp;
			}
			offset2++;
		}
		offset1++;
	}
}

int		main(int argc, char *argv[])
{
	int		offset;

	if (argc > 1)
	{
		argv++;
		ft_bubble_sort(argv, argc - 1);
		offset = -1;
		while (++offset < argc - 1)
			ft_putstr(argv[offset]);
	}
	return (0);
}
