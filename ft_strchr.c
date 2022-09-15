/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:07:27 by samartin          #+#    #+#             */
/*   Updated: 2022/09/14 16:30:03 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	pos;

	pos = 0;
	while (s[pos] != 0)
	{	
		if (s[pos] == c)
			return ((char *)&s[pos]);
		pos++;
	}
	if (s[pos] == c)
		return ((char *)&s[pos]);
	else
		return (0);
}
