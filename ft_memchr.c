/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:42:27 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 10:46:12 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
