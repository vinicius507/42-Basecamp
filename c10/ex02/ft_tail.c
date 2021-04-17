/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:01:32 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 18:17:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_tail(int fildes)
{
	ssize_t		size_read;
	char		buffer[BUFFER_SIZE];

	while ((size_read = read(fildes, buffer, BUFFER_SIZE)) > 0gg
		write(1, buffer, size_read);
}
