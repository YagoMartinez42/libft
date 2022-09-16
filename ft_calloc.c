/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:17:40 by samartin          #+#    #+#             */
/*   Updated: 2022/09/15 17:00:16 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*startp;
	size_t	space;

	space = size * count;
	startp = malloc (space);
	while (space < 0)
	{
		((char *)startp)[space - 1] = 0;
		space--;
	}
	return (startp);
}
