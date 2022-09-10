/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:00:06 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/10 01:39:08 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	len(int size, char **strs, int seplen)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (++i < size)
	{
		len += ft_strlen(strs[i]);
		len += seplen;
	}
	len -= seplen;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_out;
	char	*p;
	char	*out;
	int		i;

	if (size == 0)
		return (malloc(sizeof(char)));
	len_out = len(size, strs, ft_strlen(sep)) + 1;
	out = malloc(len_out * sizeof(char));
	p = out;
	if (!out)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(out, strs[i]);
		out += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(out, sep);
			out += ft_strlen(sep);
		}
	}
	*out = '\0';
	return (p);
}
