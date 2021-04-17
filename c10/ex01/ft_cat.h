/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:02:43 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 00:57:13 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <errno.h>
# include <fcntl.h>
# include <unistd.h>
# include <libgen.h>
# include <string.h>

# define BUFFER_SIZE 1024

void			ft_cat(int fildes);

int				ft_strcmp(char *s1, char *s2);

void			ft_error(char *ft_cat, char *path);

#endif
