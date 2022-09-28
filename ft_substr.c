/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:46:49 by samartin          #+#    #+#             */
/*   Updated: 2022/09/28 12:36:08 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (start >= slen)
	{
		sub = ft_calloc(1, 1);
		return (sub);
	}
	if (len > (slen - start))
		len = slen - start;
	sub = malloc ((len + 1) * (sizeof(char)));
	if (sub == NULL || *sub == '\0')
		return (sub);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
