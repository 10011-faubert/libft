/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:07:54 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 10:40:47 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size_of_int(int n)
{
	int		size;

	size = 0;
	if (!n)
		return (1);
	if (n < 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char				*ft_itoa(int n)
{
	long int	nb;
	int			len;
	char		*str;
	int			sign;

	nb = n;
	sign = 0;
	len = ft_size_of_int(n);
	if (!(str = ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
		len--;
		sign = 1;
	}
	while (len)
	{
		str[sign + len - 1] = nb % 10 + '0';
		len--;
		nb /= 10;
	}
	return (str);
}
