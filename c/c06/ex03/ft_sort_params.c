/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 05:34:33 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/06 14:04:32 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*e;

	e = *s1;
	*s1 = *s2;
	*s2 = e;
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	
	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
		}
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
}
