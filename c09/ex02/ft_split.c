/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:17:12 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 03:08:31 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup_esque(char *str, int str_len)
{
	char	*res;
	int		offset;

	res = malloc(str_len + 1);
	offset = 0;
	while (offset < str_len)
	{
		res[offset] = str[offset];
		offset++;
	}
	res[offset] = '\0';
	return (res);
}

int		ft_is_delimiter(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_strlen_esque(char *str, char *charset)
{
	int str_len;

	str_len = 0;
	while (str[str_len] != '\0' && !ft_is_delimiter(str[str_len], charset))
		str_len++;
	return (str_len);
}

int		ft_count_strs(char *str, char *charset)
{
	int str_n;
	int offset;
	int is_word;

	str_n = 0;
	offset = 0;
	is_word = 0;
	while (str[offset] != '\0')
	{
		if (ft_is_delimiter(str[offset], charset))
			is_word = 0;
		else if (!is_word)
		{
			is_word = 1;
			str_n++;
		}
		offset++;
	}
	return (str_n);
}

char	**ft_split(char *str, char *charset)
{
	int		str_n;
	char	**strs;
	int		temp_strlen;
	int		str_counter;

	str_n = ft_count_strs(str, charset);
	strs = malloc((str_n + 1) * sizeof(char *));
	str_counter = 0;
	while (str_counter < str_n)
	{
		temp_strlen = ft_strlen_esque(str, charset);
		if (temp_strlen)
		{
			strs[str_counter] = ft_strdup_esque(str, temp_strlen);
			str_counter++;
		}
		str += temp_strlen + 1;
	}
	strs[str_n] = 0;
	return (strs);
}
