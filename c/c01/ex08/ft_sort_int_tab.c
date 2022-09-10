/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 05:17:45 by aamidou           #+#    #+#             */
/*   Updated: 2022/07/25 04:30:31 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;
	int e;

	x = 0;
	while (x < size - 1)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[x] > tab[y])
			{
				e = tab[x];
				tab[y] = tab[x];
				tab[x] = e;
			}
		}
	}
}
