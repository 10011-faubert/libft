/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:04:04 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 12:06:00 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		d_len;
	size_t		s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (size)
	{
		d_len = ft_strlen(dst);
		if (size > d_len)
			s_len = s_len + d_len;
		else
			s_len = s_len + size;
		while (d_len + 1 < size && src[i])
			dst[d_len++] = src[i++];
		dst[d_len] = '\0';
	}
	return (s_len);
}
