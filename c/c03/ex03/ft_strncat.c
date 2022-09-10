/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:08:35 by aamidou           #+#    #+#             */
/*   Updated: 2022/07/31 19:57:18 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src && nb > 0)
	{
		dest[i] = *src;
		src++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
