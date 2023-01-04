/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:17:16 by samartin          #+#    #+#             */
/*   Updated: 2023/01/04 12:48:27 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a string, skips any whitespace, checks for a sign, skips any
 * leading zeros, and then converts the rest of the string to an integer.
 * 
 * @param str This is the string that we are converting to an integer.
 * 
 * @return the integer value of the string passed as argument.
 */
int	ft_atoi(const char *str)
{
	long	nb;
	int		sign;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + *str - '0';
		str++;
	}
	if (nb > __INT_MAX__)
		return (-1);
	else if (nb < (-(__INT_MAX__) - 1))
		return (0);
	else
		return ((int)(sign * nb));
}
