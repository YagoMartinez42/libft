/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:06:24 by samartin          #+#    #+#             */
/*   Updated: 2022/09/17 16:12:27 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;

	pos = 0;
	while (src[pos] != 0)
	{
		if (pos < (dstsize - 1))
			dst[pos] = src[pos];
		else
			dst[pos] = 0;
		pos++;
	}
	if (dstsize > 0)
		dst[pos] = 0;
	return (pos);
}
