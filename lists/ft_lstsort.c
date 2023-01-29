/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:09:00 by samartin          #+#    #+#             */
/*   Updated: 2023/01/29 19:06:54 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

static void	int_content_swap(t_list *node)
{
	int	swp;

	swp = node->content;
	node->next->content = node->content;
	node->content = swp;
}

t_list	*ft_listsort(t_list *lst, int (*cmp)(int, int))
{
	t_list	*current;
	t_list	*past_last;

	if (lst && lst->next)
	{
		current = lst;
		past_last = NULL;
		while (current->next != past_last)
		{
			while (current->next != past_last)
			{
				if (!(cmp(current->content, current->next->content)))
					int_content_swap(current);
				current = current->next;
			}
			past_last = current->next;
			current = lst;
		}
	}
	return (lst);
}
