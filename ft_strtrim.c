/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:28:37 by samartin          #+#    #+#             */
/*   Updated: 2022/09/24 15:48:42 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	if (!s1 || !set)
		return ((char *)s1);
	len = ft_strlen(s1);
	while (*s1 != 0)
	{
		if (!ft_strchr(set, *s1))
			break ;
		s1++;
		len--;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i--;
		len--;
	}
	str = malloc(len + 1);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
