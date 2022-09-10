/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:41:14 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/09 04:17:56 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*out;

	if (min >= max)
	{
		*range = (int *)0;
		return (0);
	}
	out = (int *)(malloc((max - min) * sizeof(int)));
	if (!out)
		return (-1);
	i = -1;
	while (++i < (max - min))
		out[i] = min + i;
	*range = out;
	return (max - min);
}
