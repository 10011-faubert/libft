/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:32:33 by faubert           #+#    #+#             */
/*   Updated: 2020/02/04 12:40:06 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			str_nb(char const *s, char c)
{
	int	str_nb;

	str_nb = 0;
	while (*s)
	{
		if (*s != c)
		{
			str_nb++;
			while (*s && *s != c)
				s++;
		}
		while (*s && *s == c)
			s++;
	}
	return (str_nb);
}

static char			*ft_strcp(char *dest, char const *src, char c)
{
	while (*src && *src != c)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

static char			*cp_word(char const *s, char c)
{
	int		i;
	char	*str_nb;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(str_nb = ft_calloc(sizeof(char), (i + 1))))
		return (NULL);
	i = 0;
	ft_strcp(str_nb, s, c);
	return (str_nb);
}

static char			**free_arr(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
	return (0);
}

char				**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	if (!(strs = (char**)malloc(sizeof(char*) * (str_nb(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j] && s[j] != c)
		{
			if (!(strs[i] = cp_word(&s[j], c)))
				return (free_arr(strs, i));
			i++;
			while (s[j] && s[j] != c)
				j++;
		}
	}
	strs[i] = NULL;
	return (strs);
}
