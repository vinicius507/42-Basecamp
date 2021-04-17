/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:45:22 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 18:17:21 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putstr(char *str)
{
	int offset;

	offset = 0;
	while (str[offset] != '\0')
		offset++;
	write(1, str, offset);
}

int		ft_strcmp(char *s1, char *s2)
{
	int offset;

	offset = 0;
	while (s1[offset] == s2[offset] && s1[offset] && s2[offset])
		offset++;
	return ((unsigned char)s1[offset] - (unsigned char)s2[offset]);
}

int		ft_get_path_num(int argc, char **argv)
{
	int	path_n;
	int counter;

	path_n = 0;
	counter = 0;
	while (counter < argc)
	{
		if (!ft_strcmp(argv[counter], "-c"))
			counter++;
		else if (argv[counter][0] != '-' && argv[counter][1] != 'c')
			path_n++;
		counter++;
	}
	return (path_n);
}

char	**ft_arg_parser(int argc, char **argv)
{
	int		arg_n;
	int		path_n;
	int		path_c;
	char	**paths;

	path_n = ft_get_path_num(int argc, char **argv);
	paths = malloc((path_n + 1) * sizeof(char *));
	arg_n = 0;
	path_c = 0;
	while (arg_n < argc)
	{
		if (!ft_strcmp(argv[arg_n], "-c"))
		{
			g_bytes_to_read = ft_atoi(argv[arg_n + 1])
			arg_n++;
		}
		else if (argv[arg_n][0] == '-' && argv[arg_n][1] == 'c')
			g_bytes_to_read = ft_atoi(argv[arg_n] + 2);
		else
		{
			paths[path_c] = ft_strdup(argv[arg_n]);
			path_c++;
		}
		arg_n++;
	}
	paths[path_c] = NULL;
	return path_n++;
}


void	ft_print_basename(char *path)
{
	char *name;

	name = basename(path);
	while (*name)
		write(1, name++, 1);
	write(1, ": ", 2);
}

void	ft_error(char *ft_tail, char *path)
{
	char *err_str;

	err_str = strerror(errno);
	ft_print_basename(ft_tail);
	ft_print_basename(path);
	ft_putstr(err_str);
	ft_putstr("\n");
}
