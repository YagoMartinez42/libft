/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:17:16 by samartin          #+#    #+#             */
/*   Updated: 2022/09/22 15:51:40 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_mltp(const char *str)
{
	int	i;
	int	mltp;

	i = 0;
	mltp = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (i > 0)
			mltp = mltp * 10;
		i++;
	}
	if (i == 0)
		return (i);
	else
		return (mltp);
}

static int	get_sign(const char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] != '-' && str[i] != '+')
	{
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		else if (!(str[i] >= '\t' && str[i] <= '\r') && str[i] != ' ')
			return (-1);
		i++;
	}
	*sign = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = *sign + 1;
		i++;
	}
	if (*sign % 2 == 0)
		*sign = 1;
	else
		*sign = -1;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;
	int	mltp;

	sign = 0;
	i = get_sign(str, &sign);
	if (i == -1)
		return (0);
	mltp = get_mltp(&str[i]);
	if (mltp == 0)
		return (0);
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb += (str[i] - 48) * mltp;
		mltp = mltp / 10;
		i++;
	}
	nb = nb * sign;
	return (nb);
}
