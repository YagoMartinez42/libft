/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:28:37 by samartin          #+#    #+#             */
/*   Updated: 2022/09/29 17:04:56 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim_it(char const *s1, char const *set, unsigned int *len)
{
	unsigned int	i;

	while (*s1 != 0)
	{
		if (!ft_strchr(set, *s1))
			break ;
		s1++;
		(*len)--;
	}
	if (*len)
	{
		i = (*len) - 1;
		while (i >= 0)
		{
			if (!ft_strchr(set, s1[i]))
				break ;
			(*len)--;
			i--;
		}
	}
	return ((char *)s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len;

	if (!(*s1) || !(*set))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		else
			return (str);
	}
	len = ft_strlen(s1);
	s1 = trim_it(s1, set, &len);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
