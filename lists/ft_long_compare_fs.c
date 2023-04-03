/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_compare_fs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:26:57 by samartin          #+#    #+#             */
/*   Updated: 2023/04/03 13:54:41 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lists.h"

int	comp_sigd_asc(t_data a, t_data b)
{
	if (a.lsnum <= b.lsnum)
		return (1);
	return (0);
}

int	comp_unsd_asc(t_data a, t_data b)
{
	if ((unsigned long)a.lsnum <= (unsigned long)b.lsnum)
		return (1);
	return (0);
}

int	comp_sigd_desc(t_data a, t_data b)
{
	if (a.lsnum >= b.lsnum)
		return (1);
	return (0);
}

int	comp_unsd_desc(t_data a, t_data b)
{
	if ((unsigned long)a.lsnum >= (unsigned long)b.lsnum)
		return (1);
	return (0);
}
