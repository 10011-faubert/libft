/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:44:40 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 10:00:27 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_issign(int c)
{
	return (c == '+' || c == '-');
}

static int			ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int					ft_atoi(const char *str)
{
	unsigned long long		nb;
	short int				sign;

	nb = 0;
	sign = 1;
	while (ft_isspace((int)*str))
		str++;
	if (ft_issign((int)*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit((int)*str))
	{
		if (sign == 1 && (nb = nb * 10 + *str - '0') > LLONG_MAX)
			return (-1);
		if (sign == -1 && (nb = nb * 10 + *str - '0') > LLONG_MAX)
			return (0);
		str++;
	}
	return ((int)(sign * nb));
}
