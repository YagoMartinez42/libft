/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:07:27 by samartin          #+#    #+#             */
/*   Updated: 2023/05/16 11:35:56 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function searches for a character in a string and returns a pointer to
 * the first occurrence of the character or NULL if it is not found.
 * 
 * @param s A pointer to a constant character string that we want to search for
 * the character c.
 * @param c c is an integer representing the ASCII value of a character that we
 * are searching for in the string s.
 * 
 * @return The function ft_strchr returns a pointer to the first occurrence of
 * the character. If the character is not found, it returns a null pointer.
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned int	pos;

	if (s)
	{
		pos = 0;
		while (s[pos] != 0)
		{	
			if (s[pos] == (char)c)
				return ((char *)&s[pos]);
			pos++;
		}
		if (s[pos] == (char)c)
			return ((char *)&s[pos]);
	}
	return (0);
}
