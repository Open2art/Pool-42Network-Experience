/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 04:28:51 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/04 23:20:27 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	baselen(char *str)
{
	int	i;
	int	j;

	if (!*str || !*(str + 1))
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	b_len;
	unsigned int	n;

	b_len = baselen(base);
	if (!b_len)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	if (n < b_len)
	{
		write(1, &base[n], 1);
		return ;
	}
	else
	{
		ft_putnbr_base(n / b_len, base);
		ft_putnbr_base(n % b_len, base);
	}
}
