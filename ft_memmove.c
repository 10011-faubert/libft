/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:31:12 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 10:51:53 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;

	if (!dst && !src)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (len--)
		d[len] = s[len];
	return (dst);
}
