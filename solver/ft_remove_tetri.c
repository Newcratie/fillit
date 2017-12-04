/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_tetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:01:10 by jjauzion          #+#    #+#             */
/*   Updated: 2017/12/01 18:59:21 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

void	ft_remove_tetri(char **cg, char **tetri, t_data data)
{
	int i;
	int j;
	int n;

	i = data.index / data.cgs;
	j = data.index % data.cgs;
	cg[i][j] = '.';
	n = -1;
	while (++n < 3)
	{
		i = i + tetri[n][0];
		j = j + tetri[n][1];
		cg[i][j] = '.';
	}
}
