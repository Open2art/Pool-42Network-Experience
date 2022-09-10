/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 07:13:15 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/11 08:52:22 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 06:33:46 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/11 07:12:31 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	size_strs_table(char *str, char *charset)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
			size++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (size);
}

int	len_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_strcpy(char *str, char *charset)
{
	int		len_string;
	int		i;
	char	*string;

	i = 0;
	len_string = len_sep(str, charset);
	string = (char *)malloc(sizeof(char) * (len_string + 1));
	while (i < len_string)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**out;
	int		i;

	i = 0;
	out = malloc(sizeof(char *)
			* (size_strs_table(str, charset) + 1));
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			out[i] = ft_strcpy(str, charset);
			i++;
		}
		while (*str && !is_sep(*str, charset))
			str++;
	}
	out[i] = 0;
	return (out);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/
