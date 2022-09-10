/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:42:41 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/03 02:54:19 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-", 1);
			write(1, "2", 1);
			ft_putnbr(147483648);
		}
		else
		{
			write(1, "-", 1);
			ft_putnbr(nb * (-1));
		}
	}
	else
	{
		if (nb >= 0 && nb < 10)
			ft_putchar(nb);
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
