/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bllst_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:39:01 by samartin          #+#    #+#             */
/*   Updated: 2023/04/03 16:16:06 by samartin         ###   ########.fr       */
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

	while (lst)
	{
		swap = (lst)->next;
		lst->content.lsnum = 0;
		lst->next = NULL;
		lst->prev = NULL;
		free(lst);
		lst = swap;
	}
}
