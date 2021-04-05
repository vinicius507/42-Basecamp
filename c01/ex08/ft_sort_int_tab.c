/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:02:35 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/03 01:31:48 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int counter1;
	int counter2;

	counter1 = 0;
	while (counter1 < size - 1)
	{
		counter2 = 0;
		while (counter2 < size - 1 - counter1)
		{
			if (tab[counter2] > tab[counter2 + 1])
			{
				temp = tab[counter2];
				tab[counter2] = tab[counter2 + 1];
				tab[counter2 + 1] = temp;
			}
			counter2++;
		}
		counter1++;
	}
}
