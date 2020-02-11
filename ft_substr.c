/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 22:22:24 by faubert           #+#    #+#             */
/*   Updated: 2020/02/05 15:35:54 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (!(s) || !(str = ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	if (start > ft_strlen(s))
		return (str = ft_calloc(sizeof(char), 1));
	i = 0;
	while (i < len && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
