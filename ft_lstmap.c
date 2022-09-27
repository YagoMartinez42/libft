/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:03:56 by samartin          #+#    #+#             */
/*   Updated: 2022/09/26 20:25:56 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*settled_node;
	t_list	*node;
	t_list	*head;

	if (lst)
	{
		head = ft_lstnew(lst->content);
		if (!head)
			return (NULL);
		f(head->content);
		settled_node = head;
		while (lst->next != NULL)
		{
			lst = lst->next;
			node = ft_lstnew(lst->content);
			if (!node)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			settled_node->next = node;
			f(node->content);
			settled_node = node;
		}
		return (head);
	}
	else
		return (NULL);
}
