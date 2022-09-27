/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:45:55 by samartin          #+#    #+#             */
/*   Updated: 2022/09/26 20:27:55 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swap;

	if (lst)
	{
		while ((*lst)->next != NULL)
		{
			if (del)
				del((*lst)->content);
			free((*lst)->content);
			swap = (*lst)->next;
			(*lst)->next = NULL;
			lst = &swap;
		}
		lst = NULL;
	}
}
