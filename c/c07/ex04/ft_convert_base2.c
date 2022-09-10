/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 04:04:49 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/10 22:17:33 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	baselen(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!*str || !*(str + 1))
		return (0);
	while (str[i])
	{
		if (str[i] == 43 || str[i] == 45
			|| (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (0);
		j = i;
		while (str[++j])
		{
			if (str[i] == str[j])
				return (0);
		}
		i++;
	}
	return (i);
}

int	is_inbase(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (c == str[i])
			return (i);
	}
	return (-1);
}

int	n_len(int len, int nb, char *base)
{
	unsigned int	n;
	unsigned int	base_l;

	base_l = baselen(base);
	len = nb < 0;
	if (nb < 0)
		n = -nb;
	else
		n = nb;
	while (n >= base_l)
	{
		n /= base_l;
		len++;
	}
	len++;
	return (len);
}
