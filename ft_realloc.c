/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:46:36 by samartin          #+#    #+#             */
/*   Updated: 2023/01/04 16:01:09 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t cpsize, size_t size)
{
	char	*ret_ptr;

	ret_ptr = malloc(size * sizeof(char));
	if (!ret_ptr)
		return (NULL);
	if (ptr)
	{
		ret_ptr = ft_memcpy(ret_ptr, ptr, cpsize);
		free (ptr);
	}
	cpsize--;
	while (++cpsize < size)
		ret_ptr[cpsize] = 0;
	return ((void *)ret_ptr);
}
