/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:06:16 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 10:50:53 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_tmp;
	unsigned char		*src_tmp;
	size_t				i;

	if (!src && !dest)
		return (NULL);
	i = 0;
	dest_tmp = dest;
	src_tmp = (unsigned char*)src;
	while (n > i)
	{
		dest_tmp[i] = src_tmp[i];
		i++;
	}
	dest = dest_tmp;
	return (dest);
}
