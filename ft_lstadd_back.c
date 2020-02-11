/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:30:14 by faubert           #+#    #+#             */
/*   Updated: 2020/02/05 14:34:21 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new)
	{
		if (!*alst)
			*alst = new;
		else
			ft_lstlast(*alst)->next = new;
	}
}
