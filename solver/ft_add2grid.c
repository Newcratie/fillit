/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add2grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:28:38 by jjauzion          #+#    #+#             */
/*   Updated: 2017/12/01 19:18:32 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_add2grid(char **cg, char **tetri, t_data data, int t)
{
	int i;
	int j;
	int n;

	i = data.index / data.cgs;
	j = data.index % data.cgs;
	cg[i][j] = 'A' + t;
	n = -1;
	while (++n < 3)
	{
		i = i + tetri[n][0];
		j = j + tetri[n][1];
		cg[i][j] = 'A' + t;
	}
}
