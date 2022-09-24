/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:33:56 by samartin          #+#    #+#             */
/*   Updated: 2022/09/24 17:16:23 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	pos1;
	unsigned int	pos2;

	pos1 = 0;
	pos2 = 0;
	while ((pos1) < dstsize && dst[pos1] != 0)
		pos1++;
	while (src[pos2] != 0)
	{
		if ((pos1 + pos2) < (dstsize - 1) && dstsize > 0)
		{
			dst[pos1 + pos2] = src[pos2];
			pos2++;
		}
		else
			pos2++;
	}
	if (dstsize != 0)
		dst[pos1 + pos2] = 0;
	return (pos1 + pos2);
}
