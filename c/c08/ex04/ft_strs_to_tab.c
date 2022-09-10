/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:13:48 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/11 02:56:39 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		siz;
	char	*out;
	int		i;

	i = 0;
	siz = 0;
	while (src[siz])
		siz++;
	siz += 1;
	out = malloc(siz * sizeof(char));
	if (!out)
		return ((char *)0);
	while (src[i])
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab_struct;
	struct s_stock_str	*t;

	t = malloc((ac + 1) * sizeof(struct s_stock_str));
	tab_struct = t;
	if (!t)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		t[i].size = ft_strlen(av[i]);
		t[i].str = av[i];
		t[i].copy = ft_strdup(av[i]);
		i++;
	}
	t[i].str = 0;
	t[i].copy = 0;
	return (tab_struct);
}
