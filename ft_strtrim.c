/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:58:06 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 12:20:16 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_in_charset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t		ft_trim_l(const char *s1, const char *set)
{
	size_t		len;

	len = 0;
	while (s1[len] && ft_in_charset(s1[len], set))
		len++;
	return (len);
}

static size_t		ft_trim_r(const char *s1, const char *set)
{
	size_t		len;

	len = 0;
	while (*s1)
		s1++;
	s1--;
	while (*s1 && ft_in_charset(*s1, set))
	{
		len++;
		s1--;
	}
	return (len);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	size_t		trim_l;
	size_t		trim_r;
	size_t		s2_len;
	char		*s2;

	if (!s1 || !set)
		return (NULL);
	trim_l = ft_trim_l(s1, set);
	trim_r = ft_trim_r(s1, set);
	s2_len = ft_strlen(s1);
	s2_len -= s2_len > trim_l ? trim_l + trim_r : trim_l;
	if (!(s2 = ft_calloc(sizeof(char), s2_len + 1)))
		return (NULL);
	s2 = ft_substr(s1, trim_l, s2_len);
	return (s2);
}
