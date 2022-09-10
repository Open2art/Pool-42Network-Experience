/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:37:47 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/04 00:34:11 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] && to_find[i] == str[i])
			i++;
		if (!to_find[i])
			return (str);
		str++;
	}
	return (0);
}
