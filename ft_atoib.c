/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoib.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:05:45 by samartin          #+#    #+#             */
/*   Updated: 2024/07/22 19:08:55 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	calculate(char *str, int base)
{
	char	*base_symbols;
	long	nb;
	int		idx;

	idx = 0;
	nb = 0;
	base_symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (*str && idx >= 0)
	{
		idx = (long)(ft_strchr(base_symbols, *str) - base_symbols);
		if (idx >= 0 && idx < base)
			nb = (nb * base) + idx;
		else
			break ;
		str++;
	}
	return (nb);
}

static void	ft_str_toupper(char *str)
{
	if (str)
	{
		while (*str)
		{
			*str = ft_toupper(*str);
			str++;
		}
	}
}

int	ft_atoib(const char *str, int base)
{
	long	nb;
	int		sign;
	char	*strup;

	if (!str)
		return (0);
	strup = ft_strdup(str);
	ft_str_toupper(strup);
	sign = 1;
	while (*strup == ' ' || (*strup >= '\t' && *strup <= '\r'))
		strup++;
	if (*strup == '-')
		sign = -1;
	if (*strup == '-' || *strup == '+')
		strup++;
	nb = calculate(strup, base);
	nb = nb * sign;
	if (nb > __INT_MAX__)
		return (-1);
	else if (nb < (-(__INT_MAX__) - 1))
		return (0);
	else
		return ((int)nb);
}
