/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 14:49:59 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/05 01:34:50 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	offset;
	int				cmp_value;

	cmp_value = 0;
	if (n > 0)
	{
		offset = 0;
		while (offset < n - 1
				&& s1[offset] != '\0'
				&& s2[offset] != '\0' && s1[offset] == s2[offset])
			offset++;
		cmp_value = (unsigned char)s1[offset] - (unsigned char)s2[offset];
	}
	return (cmp_value);
}
