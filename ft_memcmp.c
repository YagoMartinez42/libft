/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:53:26 by samartin          #+#    #+#             */
/*   Updated: 2022/09/15 11:28:47 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	if (s1[i] != s2[i] && i < n)
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	else
		return (0);
	return (diff);
}
