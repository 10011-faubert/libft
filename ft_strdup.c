/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:03:32 by faubert           #+#    #+#             */
/*   Updated: 2020/02/02 17:59:28 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = -1;
	while (*(src + ++i))
		*(dst + i) = *(src + i);
	*(dst + i) = '\0';
	return (dst);
}

char				*ft_strdup(const char *s1)
{
	char	*new_s;

	new_s = ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	if (new_s == NULL)
		return (NULL);
	else
		new_s = ft_strcpy(new_s, s1);
	return (new_s);
}
