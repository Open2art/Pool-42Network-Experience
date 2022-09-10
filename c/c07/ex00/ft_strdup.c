/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:12:08 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/10 19:03:25 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
