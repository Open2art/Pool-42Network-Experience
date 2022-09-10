/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 01:43:37 by aamidou           #+#    #+#             */
/*   Updated: 2022/08/11 09:15:03 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	baselen(char *str);
int				is_inbase(char c, char *str);
int				n_len(int len, int nb, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	out;
	int	b_len;

	i = 0;
	s = 1;
	out = 0;
	b_len = baselen(base);
	if (!b_len)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i++] == 45)
			s *= -1;
	}
	while (is_inbase(str[i], base) != -1)
		out = out * b_len + is_inbase(str[i++], base);
	return (s * out);
}

void	ft_n_base_to(int nb, char *base, char *nbr)
{
	int				i;
	unsigned int	base_l;
	int				nbr_len;	
	unsigned int	n;

	base_l = baselen(base);
	nbr_len = n_len(0, nb, base) - 1;
	i = 0;
	if (nb < 0)
	{
		nbr[0] = '-';
		n = -nb;
		i++;
	}
	else
		n = nb;
	while (n >= base_l)
	{
		nbr[nbr_len] = base[n % base_l];
		n /= base_l;
		nbr_len--;
	}
	if (n < base_l)
		nbr[i] = base[n];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*out;
	int		n_atoi;
	int		nbr_len;
	char	*d;

	if (baselen(base_to) == 0 || baselen(base_from) == 0)
		return (0);
	n_atoi = ft_atoi_base(nbr, base_from);
	nbr_len = n_len(0, n_atoi, base_to);
	d = (char *)malloc(sizeof(char) * (nbr_len + 1));
	out = d;
	if (!d)
		return (0);
	ft_n_base_to(n_atoi, base_to, out);
	out[nbr_len] = '\0';
	return (out);
}
