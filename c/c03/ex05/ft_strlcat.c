/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:37:35 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/03 01:34:39 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	lim;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	lim = dest_len;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && lim < size - 1)
		dest[lim++] = src[i++];
	dest[lim] = '\0';
	return (dest_len + src_len);
}
