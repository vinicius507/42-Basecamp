/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:01:32 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 18:01:17 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_cat(int fildes)
{
	ssize_t		size_read;
	char		buffer[BUFFER_SIZE];

	while ((size_read = read(fildes, buffer, BUFFER_SIZE)) > 0)
		write(1, buffer, size_read);
}
