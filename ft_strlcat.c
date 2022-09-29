/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:33:56 by samartin          #+#    #+#             */
/*   Updated: 2022/09/29 19:50:53 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	pos1;
	unsigned int	pos2;
	unsigned int	ret;

	pos1 = 0;
	pos2 = 0;
	while (dst[pos1])
		pos1++;
	if (pos1 < dstsize)
		ret = pos1;
	else
		ret = dstsize;
	while (src[pos2] != '\0')
	{
		if ((pos1 + pos2) < (dstsize - 1) && dstsize > 0)
			dst[pos1 + pos2] = src[pos2];
		pos2++;
	}
	if (dstsize != 0)
		dst[pos1 + pos2] = 0;
	return (ret + pos2);
}
