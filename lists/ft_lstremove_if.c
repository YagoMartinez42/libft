/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:59:33 by samartin          #+#    #+#             */
/*   Updated: 2023/02/01 16:39:11 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

void	ft_lstremove_if(t_list **lst, void *data_ref, int (*cmp)(void *, \
void *))
{
	t_list	*curr;
	t_list	*prev;

	prev = NULL;
	curr = *lst;
	while (curr)
	{
		if (cmp(curr->content, data_ref) == 0)
		{
			if (prev)
				prev->next = curr->next;
			else
				*lst = curr->next;
			free(curr);
			if (prev)
				curr = prev->next;
			else
				curr = *lst;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
