/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:26:19 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 10:19:58 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (!(mem = malloc(count * size)))
		return (0);
	ft_bzero(mem, count * size);
	return (mem);
}
