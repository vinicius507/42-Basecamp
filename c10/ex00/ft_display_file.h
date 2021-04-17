/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:39:01 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 00:38:01 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 1024

typedef enum	e_error
{
	NO_FILENAME,
	TOO_MANY_ARGS,
	CANT_READ_FILE
}				t_error;

t_error			ft_error(t_error error_code);

void			ft_display_file(int fildes);

#endif
