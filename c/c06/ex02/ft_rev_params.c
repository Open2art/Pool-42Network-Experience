/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:04:05 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/04 17:13:31 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	while (--ac > 0)
	{
		while (*av[ac])
			write(1, av[ac]++, 1);
		write(1, "\n", 1);
	}
}