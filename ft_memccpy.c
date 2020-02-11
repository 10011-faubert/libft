/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:17:13 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 10:44:25 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		if (*(unsigned char *)dst == (unsigned char)c)
			return (dst + 1);
		dst++;
		src++;
	}
	return (NULL);
}
