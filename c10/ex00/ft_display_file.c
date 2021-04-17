/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:55:01 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 21:09:44 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(int fildes)
{
	ssize_t				size_read;
	unsigned char		buffer[BUFF_SIZE];

	while ((size_read = read(fildes, buffer, BUFF_SIZE)) > 0)
		write(1, buffer, size_read);
}
