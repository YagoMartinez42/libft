/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bllst_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:39:01 by samartin          #+#    #+#             */
/*   Updated: 2023/04/04 12:39:56 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

/**
 * It clears a doubly linked list.
 * 
 * @param lst The list to clear.
 */
void	ft_bllst_clear(t_bllist *lst)
{
	t_bllist	*swap;

	lst = ft_bllst_first(lst);
	while (lst)
	{
		swap = (lst)->next;
		lst->content = 0;
		lst->next = NULL;
		lst->prev = NULL;
		free(lst);
		lst = swap;
	}
}
