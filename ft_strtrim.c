/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:28:37 by samartin          #+#    #+#             */
/*   Updated: 2023/06/06 13:40:59 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Main working part of the function separated only due norm needs.
 */
static char	*trim_it(char const *s1, char const *set, unsigned int *len)
{
	int	i;

	while (*s1)
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

/**
 * Trims the characters specified in the set parameter from the beginning and
 * end of the string s1.
 * 
 * @param s1 A pointer to a string that needs to be trimmed.
 * @param set A string of characters that are considered to be whitespace for
 * this use. Any amount of these characters will be removed from only the
 * beginning and end of the s1 string (not the central part delimited by the
 * first and last ocurrences of other characters out of the set).
 * 
 * @return A pointer to a newly allocated string that is a copy of the input
 * string s1 with leading and trailing characters from the input string set
 * removed. If s1 or set is null, it returns NULL. If s1 is an empty string or
 * all characters in it where part of the set, it returns a pointer to a newly
 * allocated empty string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len;

	if (!s1 || !set)
		return (NULL);
	if (!(*s1))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		else
		{
			*str = *s1;
			return (str);
		}
	}
	len = ft_strlen(s1);
	if (*set)
		s1 = trim_it(s1, set, &len);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy (str, s1, len + 1);
	return (str);
}
