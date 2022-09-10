/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:27:15 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/10 19:04:09 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*out;
	int	i;

	if (min >= max)
		return ((int *)0);
	out = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		out[i] = min;
		i++;
		min++;
	}
	return (out);
}
