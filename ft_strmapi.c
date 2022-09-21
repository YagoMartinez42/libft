/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:41:45 by samartin          #+#    #+#             */
/*   Updated: 2022/09/21 11:02:53 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int   len;
    unsigned int   i;
    char           *dst;

    len = ft_strlen(s);
    dst = malloc(len);
    i = 0;
    while (s[i])
    {
        dst[i] = (*f)(i, s[i]);
        i++;
    }
    return (dst);
}
