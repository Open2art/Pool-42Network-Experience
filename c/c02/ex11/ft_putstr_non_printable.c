/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:37:36 by aamidou           #+#    #+#             */
/*   Updated: 2022/07/31 18:04:10 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEX "0123456789abcdef"

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int		i;

	c = '\\';
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, &c, 1);
			write(1, &HEX[str[i] / 16], 1);
			write(1, &HEX[str[i] % 16], 1);
		}
		i++;
	}
}
