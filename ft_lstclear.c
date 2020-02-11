/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:30:14 by faubert           #+#    #+#             */
/*   Updated: 2020/02/05 14:34:51 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list		*next;

	while (*list)
	{
		next = (*list)->next;
		ft_lstdelone(*list, del);
		*list = next;
	}
}
