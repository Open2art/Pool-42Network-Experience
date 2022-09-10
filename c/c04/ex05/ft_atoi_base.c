/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 06:56:27 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/04 22:15:37 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	baselen(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!*str || !*(str + 1))
		return (0);
	while (str[i])
	{
		if (str[i] == 43 || str[i] == 45)
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	out;
	int	b_len;

	i = 0;
	s = 1;
	out = 0;
	b_len = baselen(base);
	if (!b_len)
		return (0);
	while (is_whitespace(str[i]))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i++] == 45)
			s *= -1;
	}
	while (is_inbase(str[i], base) != -1)
		out = out * b_len + is_inbase(str[i++], base);
	return (s * out);
}
