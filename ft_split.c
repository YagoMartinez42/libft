/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:54:56 by samartin          #+#    #+#             */
/*   Updated: 2022/09/21 13:37:24 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	count = 1;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static const char	*add_word(const char *s, char c, char **ws, unsigned int i)
{
	unsigned int	len;
	unsigned int	j;

	len = 0;
	while (s[len] != c && s[len] != 0)
		len++;
	ws[i] = malloc (sizeof(char) * (len + 1));
	j = 0;
	while (j < len)
	{
		ws[i][j] = *s;
		s++;
		j++;
	}
	ws[i][j] = 0;
	return (s + 1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	str_count;
	char			**words;

	str_count = count_words(s, c);
	words = malloc (sizeof(char *) * (str_count + 1));
	i = 0;
	while (i < str_count)
	{
		s = add_word(s, c, words, i);
		i++;
	}
	words[i] = NULL;
	return (words);
}
