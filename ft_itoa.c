/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:04 by samartin          #+#    #+#             */
/*   Updated: 2022/09/24 17:01:34 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	drop_d(char *nb_as_str, int n, int sign)
{
	unsigned int	dig;

	dig = 0;
	if (n == -2147483648)
	{
		nb_as_str[0] = '8';
		n = n / 10;
		dig++;
	}
	while ((n * sign) >= 10)
	{
		nb_as_str[dig] = ((n % 10) * sign) + '0';
		n = n / 10;
		dig++;
	}
	nb_as_str[dig] = (n * sign) + '0';
	if (sign == -1)
	{
		dig++;
		nb_as_str[dig] = '-';
	}
	nb_as_str[dig + 1] = '\0';
	return (dig);
}

static void	rev_str(char *str, unsigned int len)
{
	unsigned int	i;
	char			swp;

	i = 0;
	while (i < len)
	{
		swp = str[len];
		str[len] = str[i];
		str[i] = swp;
		len--;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char			*nb_as_str;
	unsigned int	dig;
	int				sign;

	nb_as_str = malloc (12);
	if (!nb_as_str)
		return (NULL);
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	dig = drop_d (nb_as_str, n, sign);
	rev_str(nb_as_str, dig);
	return (nb_as_str);
}
