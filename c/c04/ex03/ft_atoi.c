/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 03:40:50 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/04 04:28:04 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_white_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	out;

	i = 0;
	s = 1;
	out = 0;
	while (is_white_space(str[i]))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i++] == 45)
			s *= -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
		out = out * 10 + (str[i++] - 48);
	return (s * out);
}
