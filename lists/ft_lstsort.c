/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:09:00 by samartin          #+#    #+#             */
/*   Updated: 2023/02/01 13:39:59 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

t_list	*ft_lstsort(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	t_list	*past_last;
	void	*swp;

	if (lst && lst->next)
	{
		cur = lst;
		past_last = NULL;
		while (cur->next != past_last)
		{
			while (cur->next != past_last)
			{
				if (!(cmp(*(int *)cur->content, *(int *)cur->next->content)))
				{
					swp = cur->content;
					cur->content = cur->next->content;
					cur->next->content = swp;
				}
				cur = cur->next;
			}
			past_last = cur;
			cur = lst;
		}
	}
	return (lst);
}
