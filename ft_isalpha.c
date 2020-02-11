/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:29:11 by faubert           #+#    #+#             */
/*   Updated: 2020/02/02 19:35:20 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int			ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int					ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
