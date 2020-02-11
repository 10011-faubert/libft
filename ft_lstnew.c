/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:30:14 by faubert           #+#    #+#             */
/*   Updated: 2020/02/05 14:35:50 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstnew(void *content)
{
	t_list		*lst;

	if (!(lst = ft_calloc(sizeof(t_list), 1)))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
