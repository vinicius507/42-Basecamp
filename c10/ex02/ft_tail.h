/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:02:43 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 18:17:50 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <errno.h>
# include <fcntl.h>
# include <unistd.h>
# include <libgen.h>
# include <string.h>

# define BUFFER_SIZE 1024

char			**ft_arg_parser(int argc, char **argv);

void			ft_tail(int fildes);

int				ft_strcmp(char *s1, char *s2);

void			ft_error(char *ft_tail, char *path);

#endif
